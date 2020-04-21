#include <iostream>
#include <tuple>

/**
 * 1. ako prechadzat tuple stringov?
 * 2. jak se variadické parametry použijí v těle funkce?
 * 3. jak "rozbalit" tuple? (napr. kdyz mam tuple a chci zavolat funkci, ktera bere "seznam" argumentu
 * 4. (gdb) chcem opravit otazku. Ja som sa chcel opytat, ze ako prechadzat tuple<vector<Props>...> a ako do jednotlivych vectorov pushbackovat veci
 */

template<class T>
void print(const T &val) {
    std::cout << val;
}

template<class ...Ts, class T> // <int, float, doble>
T sum(const Ts& ...ts) { // const int& , const float& , const double& (0-N parameteru)
    // init op ... op ts ---> init op ts1 op ts2 op ts3 op .. op tsN
    return (0 + ... + ts);
}

tuple<Ts...> mytup;

template<class ...Ts>
void print(const Ts &...ts) {
    //(X op ... op ts)
    // (std::cout << ... << ts);
    ((std::cout << ts), ...); // (cout << t1), (cout << t2), (cout << t3);
    //
}

template<class ...Ts>// 0-N params
void print2(const Ts &...ts) {

}

template<class T, class ...Ts> // 1-N params
void print2(const T &t, const Ts ...ts) {
    std::cout << t << " ";
    print2(ts...); // print2<2*int>, print1<int>(), ...print2<>();
}

template<class ...Ts>
class C {
    std::tuple<Ts ...> mytup;

};

template<class ...Ts>
class my_tuple;

template<class T>
struct holder {
    T val;
};

template<class T>
class my_tuple<T> : public holder<T> {
    val
};

template<class T, class ...Ts>
class my_tuple<T, Ts...> : public holder<T>, my_tuple<Ts ...> {
};


template<size_t I, size_t N, class T, class ...Ts>
auto &get1_impl(my_tuple<T, Ts ...> &tup) {
    if constexpr (I == N) {
        return static_cast<holder<T> &>(tup).val;
    } else {
        return get1_impl<I+1, N, Ts...>(my_tuple<Ts...>())
    }
}

template<size_t I, class T, class ...Ts>
auto &get1(my_tuple<T, Ts ...> &tup) {
    static constexpr size_t size = sizeof...(Ts);
    return get1_impl<0, size>(tup);
}

template<size_t I, size_t N, class Fnc, class ...Ts>
void print_impl(std::tuple<Ts ...> &ts) {
    Fnc(std::get<I>(ts));
    if constexpr (I == N) {
        // nic
    } else {
        print_impl<I + 1>(ts);
    }
}

template<class ...Ts>
void print(std::tuple<Ts ...> &ts) {
    print_impl<0, tuple_size(ts)>(ts);
}




// D<int, ...>

// print<int, double, const char *>
// print<int, int>

int main() {
    print2(1, 2, 3);
    return 0;
}
