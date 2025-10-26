#include <iostream>
#include <vector>

using namespace std;

class CountingClass {
    static size_t num_instances;
    static void change_num_instances(int num) { num_instances += num; }

public:
    static bool has_instance() { return num_instances > 0; }
    static size_t get_num_instances() { return num_instances; }
    
    CountingClass() { change_num_instances(1); }
    CountingClass(const CountingClass &) { change_num_instances(1); }
    ~CountingClass() { change_num_instances(-1); }
};  

size_t CountingClass::num_instances = 0; // initialization

void f() {
    cout << CountingClass::get_num_instances() << endl; // 0
    CountingClass cc1;
    cout << CountingClass::get_num_instances() << endl; // 1
    CountingClass cc2 = cc1;
    cout << CountingClass::get_num_instances() << endl; // 2
    
    std::vector<CountingClass> ccs(10);
    cout << CountingClass::get_num_instances() << endl; // 12
}

int main() {
    cout << CountingClass::get_num_instances() << endl; // 0
    f();
    cout << CountingClass::get_num_instances() << endl; // 0
}

