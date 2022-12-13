#include <iterator>
#include <functional>
#include <unordered_map>
#include <memory>
#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>
#include <sstream>

using namespace std;

enum class operation { SUM, MIN, MAX, IDENTITY };


template<typename T>
struct types_policy;

template<>
struct types_policy<int> {
    using type = int;
    static type from_str(std::string &&str) {
        return std::stoi(str);
    }

    static string to_str(type val) {
        return std::to_string(val);
    }
};

template<>
struct types_policy<double> {
    using type = double;
    static type from_str(std::string &&str) {
        return std::stod(str);
    }

    static string to_str(type val) {
        return std::to_string(val);
    }
};

template<>
struct types_policy<std::string> {
    using type = std::string;
    static type from_str(std::string &&str) {
        return std::move(str);
    }

    static string to_str(type val) {
        return val;
    }
};

class column_if {
public:
    column_if(const std::string &name) : name(name) {}

    virtual void emplace_from_string(std::string &&) { assert(false); };

    virtual std::unique_ptr<column_if> aggregate_column(operation op) const { assert(false); return nullptr; }

    virtual std::unique_ptr<column_if> group_by(const std::function<void(size_t, size_t)> &) const { assert(false); return nullptr; }

    virtual void aggregate(size_t row_idx, size_t agg_idx) { assert(false); }

    virtual size_t size() const { assert(false); return 0; }

    virtual string get(size_t idx) const { assert(false); return ""; }

    const std::string name;
};


template<typename T>
struct operator_if {
    using value_type = T;
};

template<typename T, class OpExec>
struct op : operator_if<T> {
    T value;
    explicit op(const T &val) : value(val) {}

    void operator()(const T &val) {
        value = OpExec()(value, val);
    }

    const T &operator*() const { return value; }
};

template<typename T>
struct min_ftor {
    inline T operator()(const T &lhs, const T &rhs) { return std::min(lhs, rhs); }
};

template<typename T>
struct max_ftor {
    inline T operator()(const T &lhs, const T &rhs) { return std::max(lhs, rhs); }
};

template<typename T>
struct identity_ftor {
    inline T operator()(const T &lhs, const T &rhs) { assert(lhs == rhs); return lhs; }
};

template<typename T>
struct plus_op : op<T, std::plus<T>> {
    using op<T, std::plus<T>>::op;
};

template<typename T>
struct min_op : op<T, min_ftor<T>> {
    using op<T, min_ftor<T>>::op;
};

template<typename T>
struct max_op : op<T, max_ftor<T>> {
    using op<T, max_ftor<T>>::op;
};

template<typename T>
struct identity_op : op<T, identity_ftor<T>> {
    using op<T, identity_ftor<T>>::op;
};

template<typename T, class TypePolicy = types_policy<T>>
class column;

template<typename T, template<typename> class Op, class TypePolicy = types_policy<T>>
class agg_column : public column_if {
    vector<Op<T>> agg_values;
    const T *data;
public:
    explicit agg_column(const column<T> &column, const std::string &name) : column_if(name), data{column.data.data()} {}

    void aggregate(size_t row_idx, size_t agg_idx) override {
        if (agg_idx == agg_values.size()) {
            agg_values.emplace_back(data[row_idx]);
        } else {
            agg_values[agg_idx](data[row_idx]);
        }
    }

    size_t size() const override { return agg_values.size(); }

    string get(size_t idx) const override {
        const auto val = agg_values[idx].value;
        return TypePolicy::to_str(val);
    }
};


template<typename T, class TypePolicy>
class column : public column_if {
public:
    std::vector<T> data;

public:
    using column_if::column_if;

    void emplace_from_string(std::string &&str) override {
        data.emplace_back(TypePolicy::from_str(std::move(str)));
    }

    void push_back(const T &val) {
        data.push_back(val);
    }

    size_t size() const override { return data.size(); }

    string get(size_t idx) const override {
        auto val = data[idx];
        return TypePolicy::to_str(val);
    }

    std::unique_ptr<column_if> aggregate_column(operation op) const override {
        if (op == operation::SUM) {
            return unique_ptr<column_if>(new agg_column<T, plus_op>(*this, "SUM(" + name + ")"));
        } else if (op == operation::MAX) {
            return unique_ptr<column_if>(new agg_column<T, max_op>(*this, "MAX(" + name + ")"));
        } else if (op == operation::MIN) {
            return unique_ptr<column_if>(new agg_column<T, min_op>(*this, "MIN(" + name + ")"));
        } else {
            assert(op == operation::IDENTITY);
            return unique_ptr<column_if>(new agg_column<T, identity_op>(*this, name));
        }
    }

    std::unique_ptr<column_if> group_by(const std::function<void(size_t data_idx, size_t agg_idx)> &agg_func) const override {
        std::unordered_map<T, size_t> grouped_keys;
        auto res_column = make_unique<column<T>>(name);

        for (std::size_t i = 0; i < data.size(); ++i) {
            auto it = begin(grouped_keys); bool emplaced;
            std::tie(it, emplaced) = grouped_keys.emplace(data[i], res_column->size());
            if (emplaced) {
                agg_func(i, res_column->size());
                res_column->push_back(data[i]);
            } else {
                agg_func(i, it->second);
            }
        }

        return unique_ptr<column_if>(res_column.release());
    }
};


class Db {
public:
    explicit Db(const std::vector<std::string> &names, const std::vector<std::string> &types) : columns_(types.size()) {
        assert(names.size() == types.size());
        std::transform(begin(types), std::end(types), begin(names),  std::begin(columns_), create);
        for (size_t i = 0; i < names.size(); i++) {
            names_.emplace(names[i], i);
        }
    }

    explicit Db(std::vector<unique_ptr<column_if>> &&columns) : columns_(std::move(columns)), names_() {}

    void load_line(std::vector<std::string> &&line) {
        assert(line.size() == columns_.size());
        for (size_t i = 0; i < line.size(); i++) {
            columns_[i]->emplace_from_string(std::move(line[i]));
        }
    }

    Db run_query(const std::string &query) const {
        const query_desc qd = parse_query(query);
        auto res_table = run_aggregation(qd);
        return Db(std::move(res_table));
    }

    void print() const {
        print_header();
        print_data();
    }

private:
    struct query_desc {
        std::vector<operation> operations;
        std::vector<size_t> selected_columns;
        size_t group_by_column;
    };

    static std::unique_ptr<column_if> create(const std::string &type, const std::string &name) {
        if (type == "int") {
            return unique_ptr<column_if>(new column<int>(name));
        } else if (type == "double") {
            return unique_ptr<column_if>(new column<double>(name));
        } else {
            assert(type == "string");
            return unique_ptr<column_if>(new column<std::string>(name));
        }
    }

    static string strip(const std::string &token) {
        if (token.back() == ',') {
            return string(begin(token), end(token) - 1);
        } else {
            return token;
        }
    }

    static inline string get_id_from_op(const std::string &token) {
        auto br_beg = token.find('(');
        assert(br_beg != string::npos);
        auto br_end = token.find(')');
        assert(br_end != string::npos);
        return token.substr(br_beg + 1, br_end - br_beg - 1);
    }

    static std::tuple<operation, std::string> parse_token(const std::string &token) {
        operation op;
        if (token.find("SUM") != string::npos) {
            op = operation::SUM;
        } else if (token.find("MIN") != string::npos) {
            op = operation::MIN;
        } else if (token.find("MAX") != string::npos) {
            op = operation::MAX;
        } else {
            op = operation::IDENTITY;
        }

        string identifier = op == operation::IDENTITY ? strip(token) : get_id_from_op(token);
        return { op, identifier };
    }

    void print_header() const {
        for (std::size_t i = 0; i < columns_.size() - 1; ++i) {
            cout << columns_[i]->name << ';';
        }
        cout << columns_.back()->name << endl;
    }

    void print_data() const {
        const auto size = columns_.front()->size();
        for (std::size_t row_idx = 0; row_idx < size; ++row_idx) {
            for (std::size_t i = 0; i < columns_.size() - 1; ++i) {
                cout << columns_[i]->get(row_idx) << ';';
            }
            cout << columns_.back()->get(row_idx);
            if (row_idx < size - 1) {
                cout << endl;
            }
        }
    }

    query_desc parse_query(const std::string &q) const {
        istringstream iss(q);
        string tok;

        query_desc qd;
        bool in_select = true;
        while (getline(iss, tok, ' ')) {
            if (tok == "SELECT") { in_select = true; }
            else if (tok == "GROUP_BY") { in_select = false; }
            else {
                operation op; string name;
                std::tie(op, name) =  parse_token(tok);
                auto id = names_.find(name)->second;
                if (in_select) {
                    qd.operations.push_back(op);
                    qd.selected_columns.push_back(id);
                } else {
                    qd.group_by_column = id;
                }
            }
        }

        return qd;
    }

    vector<unique_ptr<column_if>> run_aggregation(const query_desc &qd) const {
        vector<unique_ptr<column_if>> agg_table;
        agg_table.reserve(qd.selected_columns.size());
        transform(begin(qd.operations), end(qd.operations), begin(qd.selected_columns), back_inserter(agg_table), [this](operation op, size_t column) {
            return columns_[column]->aggregate_column(op);
        });

        auto grouped_column = columns_[qd.group_by_column]->group_by([&](size_t row_idx, size_t agg_idx){
            for(auto &agg_col : agg_table) {
                agg_col->aggregate(row_idx, agg_idx);
            }
        });


        // backpatch identities :)

        return agg_table;
    }

    std::vector<std::unique_ptr<column_if>> columns_;
    std::unordered_map<std::string, std::size_t> names_;
};

auto parse_string(const std::string &str, char delimiter) {
    vector<string> res;
    std::istringstream iss(str);
    string token;
    while (std::getline(iss, token, delimiter)) {
        res.push_back(std::move(token));
    }
    return res;
}


/*

id_1;id_2;...;id_m : string normalni - ne zakerne
typ_1;typ_2;...;typ_m : int, double, string
# rows = n : size_t
row_1
row_2
...
row_n
Query

SELECT id_m, AGG(id_n), ..., GROUP BY id_m // AGG in [sum, avg, min, max], sort from lowest
*/

static constexpr char DELIM = ';';

int main() {

    // Load header
    string names, types;
    cin >> names;
    cin >> types;
    Db db(parse_string(names, DELIM), parse_string(types, DELIM));

    size_t rows;
    cin >> rows;


    string line;
    std::getline(std::cin, line);

    for (std::size_t i = 0; i < rows; ++i) {
        std::getline(std::cin, line);
        db.load_line(parse_string(line, DELIM));

    }

    string query;
    std::getline(std::cin, query);

    auto res_db = db.run_query(query);
    res_db.print();
}