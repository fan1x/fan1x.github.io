#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

int get_max(int v1, int v2) {
    return v1 > v2 ? v1 : v2;
}

int get_max1(const vector<int> &ints) {
    int max = std::numeric_limits<int>::min();
    for (int x : ints) {
        max = get_max(x, max);
    }
    return max;
}

bool get_max(const vector<int> &ints, int &max) {
    max = std::numeric_limits<int>::min();
    for (int x : ints) {
        max = get_max(x, max);
    }
    return !ints.empty();
}

std::tuple<bool, int> get_max2(const vector<int> &ints) {
    int max = std::numeric_limits<int>::min();
    for (int x : ints) {
        max = get_max(x, max);
    }
    return { !ints.empty(), max };
}

int main(int argc, char** argv) {
    vector<string> args(argv, argv+argc);
    return 0; 
}