#include <vector> 
#include <iostream>

using namespace std;

class C {
  /* CAN ADD MORE ATTRIBUTES */
  int value;
  /* USE THIS FUNCTION FOR PRINTING */
  void print() const {
    cout << value << "\n";
  }

public:
  /* IMPLEMENT SPECIAL METHODS */
};

class D {
  std::vector<C> cs;
  /* CANNOT ADD MORE ATTRIBUTES */
public:
  /* IMPLEMENT SPECIAL FUNCTIONS */
};

int main(int argc, char *argv[]) {
  int first, last;
  cin >> first >> last;
  cout << "Numbers:\n";
  D d(first, last); // prints number first, first+1, ..., last
  cout << "Preparing...\n";
  D d2 = d;
  cout << "Sum of the numbers:\n";
  d2 = d; // prints sum of numbers first..last
}
