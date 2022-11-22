#include <iostream>
#include <vector>
#include <functional>
#include <memory>
#include <cassert>

using namespace std;

void for_each(const std::vector<int> &vi, const std::function<void(int)> &fn) {
    for (int x : vi) {
        fn(x);
    }
}

void print(int x) {
    cout << x << endl;
}

int main(int argc, char* argv[]) {
    vector<int> vi{1, 2, 3, 4, 5, 6};
    for_each(vi, print);
}
