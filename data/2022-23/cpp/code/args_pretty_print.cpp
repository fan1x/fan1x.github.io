#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pretty_print(const vector<string>& args) {
    for (size_t i = 0; i < args.size(); ++i) {
        cout << "Arg " << i << ": " << args[i] << '\n';
    }
}

void sum_numbers(const vector<string> &args) {
    int sum = 0;
    for (size_t i = 1; i < args.size(); ++i) {
        int int_value = stoi(args[i]);
        sum += int_value;
    }

    cout << "Sum: " << sum;
}

int main(int argc, char** argv) {
    vector<string> args(argv, argv+argc);
    sum_numbers(args);
    return 0;
}