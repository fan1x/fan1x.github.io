#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

/*
  sum numbers given as command line arguments
*/
void sum_numbers(const vector<string> &args) {
    int sum = 0;
    for (size_t i = 1; i < args.size(); ++i) {
        int int_value = stoi(args[i]);
        sum += int_value;
    }

    cout << "Sum: " << sum << endl;
}

constexpr bool calculator_expect_number(size_t idx) {
    return idx % 2 == 1;
}

/*
    simple calculator - expression given as command line arguments, each expression must be separated by an empty space, 
    i.e., each string represens a single integral number or operator (+/-)
*/
void calculator(const vector<string> &args) {
    int result = 0;
    int sign = 1;
    for (size_t i = 1; i < args.size(); ++i) {
        if (calculator_expect_number(i)) {
            int number = stoi(args[i]);
            result += sign * number;
        } else {
            assert(args[i] == "+" || args[i] == "-");
            sign = args[i] == "-" ? -1 : 1;
        }
    }

    cout << "Result is: " << result << endl;
}

int main(int argc, char *argv[]) {
    vector<string> args(argv, argv+argc);
    calculator(args);
    return 0;
}