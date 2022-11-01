#include <iostream>

using namespace std;

class C {
    static size_t num_instances;
public:
    C() { 
        ++num_instances;
        if (num_instances == 1) {
            cout << "2\n"; 
        }
    }
    C(const C &) { 
        ++num_instances;
        switch (num_instances) {
            case 2: cout << "4\n"; break;
            case 3: cout << "6\n"; break;
            case 4: cout << "8\n"; break;
            default: break;
        }
    }

    C(C &&) { 
        cout << "10\n";
    }

    ~C() {
        if (--num_instances == 0) {
            cout << "16\n";
        }
    }

    C &operator=(const C&) { cout << "12\n"; return *this; }
    C &operator=(C&&) { cout << "14\n"; return *this; }
};

size_t C::num_instances = 0;

void fn_copy(C) {}
void fn_cref(const C&) {}
void fn_rref(C&&) {}

int main(int argc, char* argv[])
{
    cout << "1\n";
    C c1;
    cout << "3\n";
    C c2(c1);
    cout << "5\n";
    C c3 = c2;
    cout << "7\n";
    fn_copy(c1);
    cout << "9\n";
    fn_cref(c1);
    fn_copy(std::move(c1));
    fn_rref(std::move(c2));
    cout << "11\n";
    c3 = c2;
    cout << "13\n";
    c2 = std::move(c1);
    cout << "15\n";
}