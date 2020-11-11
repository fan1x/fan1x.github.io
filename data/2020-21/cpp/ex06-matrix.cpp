#include <iostream>
#include <vector>
#include <iomanip>

class matrix {
public:
    using value_type = int;
    using row_type = std::vector<value_type>;
    using data_type = std::vector<row_type>;
    using size_type = size_t;

    data_type data;

    // ctor
    matrix() {
        data = data_type(10, row_type(10, 0));
    }

    // ctor
    matrix(int width, int height, value_type init_value = value_type()) {
        data = data_type(height, row_type(width, init_value));
    }

    // copy-ctor
    matrix(matrix &m) {
        data = m.data;
    }
    // move-ctor
    matrix(matrix &&m) {
        data = m.data;
    }

    size_t width() {
        return data[0].size();
    }

    size_t height() {
        return data.size();
    }

    row_type operator[](size_type height_idx) {
        return data[height_idx];
    }

    void clear() {
        for (auto i = 0; i < width(); ++i) {
            for (auto j = 0; j < height(); ++j) {
                data[i][j] = 0;
            }
        }
    }

    void print() {
        for (auto i = 0; i < width(); ++i) {
            for (auto j = 0; j < height(); ++j) {
                std::cout << std::setw(3) << data[i][j];
            }
            std::cout << '\n';
        }
    }
};

void fill(matrix m) {
    for (auto i = 0; i < 10; ++i) {
        for (auto j = 0; j < 10; ++j) {
            m[i][j] = i*10 + j;
        }
    }
}

int main() {
    matrix m;
    fill(m);
    m.print();
    return 0;
}