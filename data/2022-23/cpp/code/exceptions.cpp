#include <iostream>
#include <vector>
#include <functional>
#include <memory>
#include <cassert>
#include <algorithm>
#include <string>
#include <stdexcept>

using namespace std;

template<typename T>
class matrix {
    bool is_valid_range(size_t x, size_t y) { return false; }
public:
    T &get(size_t x, size_t y) {
        if (!is_valid_range(x, y)) {
            throw std::out_of_range("Invalid x or y value");
        }
    }
};

int main(int argc, char* argv[]) {
    matrix<int> mi;
    try {
        cout << mi.get(10, 10);
    } catch (const std::out_of_range &e) {
        cerr << e.what() << endl;
    }
}
