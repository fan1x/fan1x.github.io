#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <limits>
#include <cassert>

// #include <arm_neon.h>

// uint32x4_t x;

using namespace std;

int get_random() {
    static std::random_device rd; // obtain a random number from hardware
    static std::mt19937 gen(rd()); // seed the generator
    static std::uniform_int_distribution<> distr(std::numeric_limits<int>::min(), std::numeric_limits<int>::max()); // define the range
    return distr(gen);
    return 0;
}

void generate(std::vector<int> &data) {
    for (int &x : data) {
        x = get_random();
    }
}

template <typename It>
int sum_simple(It first, It last) {
    int sum = 0;
    for (; first != last; ) {
        sum += *first++;
    }
    return sum;
}

int main(int argc, char** argv) {
    if (argc != 3) {
        cerr << "Wrong number of arguments" << endl;
        cerr << "Usage: PRG <num_repeats> <num_elements>" << endl;
        return -1;
    }

    vector<string> args(argv, argv+argc);
    size_t num_repeats = stoul(args[1]);
    size_t num_elements = stoul(args[2]);

    cout << "Allocate " << num_elements * sizeof(int) / 1024 / 1024.0 << "MB" << endl;
    std::vector<int> data(num_elements, 0);
    
    cout << "Generate random values" << endl;
    generate(data);

    cout << "Sum simple values" << endl;
    int sum = sum_simple(data.begin(), data.end());
    cout << "Sum: " << sum << endl;

    return 0;
}