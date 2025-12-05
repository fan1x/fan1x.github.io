#include <vector> 
#include <iostream>
#include <memory>
#include <functional>
#include <algorithm>
#include <set>
#include <list>
#include <stdexcept>

using namespace std;

template<typename T>
class Container {
public:
    Container() { throw std::runtime_error("Gotcha!"); }
};

template<typename T>
class Vector {
public:
    using size_type = std::size_t;
    using value_type = T;
    using reference = value_type &;
    using const_reference = const reference;

private:
    std::unique_ptr<T[]> data;
    size_type data_size;
    size_type user_size;

public:
    Vector() = default;
    // ~Vector() noexcept = default;

    Vector(Vector &&rhs) noexcept;

    reference at(size_type pos);
};

struct Destruction {
    ~Destruction() noexcept { 
        // cerr << "Desctruction" << endl;
        throw std::runtime_error("gotcha!"); 
    }
};

template<typename T>
typename Vector<T>::reference Vector<T>::at(size_type pos) {
    Destruction d;
    if (pos >= user_size) throw std::out_of_range("Given position too large");
    // if (pos >= user_size) throw "Given position too large";
    return data[pos];
}

template<typename T>
Vector<T>::Vector(Vector &&rhs) noexcept {
    std::swap(data, rhs.data); // nullptr <--> rhs.data
    std::swap(data_size, rhs.data_size);
    std::swap(user_size, rhs.user_size);
}

int main(int argc, char *argv[]) {
    size_t i = 10;
    Vector<int> vi;
    try {
        vi.at(i);
    } catch (const std::out_of_range &e) {
        cerr << e.what() << endl;
    } catch (const char *) {
        cerr << "Const char *???" << endl;
    } catch (...) {
        cerr << "Unexpected exception" << endl;
    }

    // set_wrapper.push_back(3);
} // dstruct vec, type Base, ~Base is not virtual