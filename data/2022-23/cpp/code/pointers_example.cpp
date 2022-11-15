#include <iostream>
#include <vector>
#include <functional>
#include <memory>
#include <cassert>

using namespace std;

int main(int argc, char* argv[]) {
    unique_ptr<int[]> int_arr = make_unique<int[]>(10);
    for (size_t i = 0; i < 10; ++i) { int_arr[i] = 0; }
    
    int *ptr = int_arr.get();
    (*ptr) = 1;
    *(ptr + 1) = 2;
    cout << *ptr << ' ' << *(ptr + 1) << endl; // 1 2
    ptr += 1;
    cout << *ptr++ << endl; // 2
    cout << *ptr << ' ' << *(ptr - 1) << endl; // 0 2
    *ptr-- = 3;
    cout << ptr[-1] << ' ' << ptr[0] << ' ' << ptr[1] << endl; // 1 2 3
}
