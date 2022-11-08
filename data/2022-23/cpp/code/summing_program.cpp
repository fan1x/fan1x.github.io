#include <vector> 
#include <iostream>

using namespace std;

class C {
  /* CAN ADD MORE ATTRIBUTES */
  int value;
  bool print_value;

  /* USE THIS FUNCTION FOR PRINTING */
  void print() const {
    cout << value << "\n";
  }

public:
  /* IMPLEMENT SPECIAL METHODS */
  C(int x, bool print_value = false) : value(x), print_value(print_value) {
    print();
  }

  C(const C &c, int &sum) {
      sum += c.value;
      value = sum;
  }

  ~C() {
      if (print_value) {
          print();
      }
  }
};

class D {
  std::vector<C> cs;
  /* CANNOT ADD MORE ATTRIBUTES */
public:
  /* IMPLEMENT SPECIAL FUNCTIONS */
  D(int first, int last) {
    while (first != last) {
      cs.push_back(C(first++));
    }
    cs.push_back(C(first));
  }

  D(const D &other) {
    cs.reserve(other.cs.size());
    int sum = 0;
    for (auto &c : other.cs) {
        cs.emplace_back(c, sum);
    }
    cs.emplace_back(sum, true);
  }
};

int main(int argc, char *argv[]) {
  int first, last;
  cin >> first >> last;
  cout << "Numbers:\n";
  D d(first, last); // prints number first, first+1, ..., last
  cout << "Preparing...\n";
  D d2 = d; // copy ctor
  cout << "Sum of the numbers:\n";
  d2 = d; // prints sum of numbers first..last  // copy operator
} // dtor