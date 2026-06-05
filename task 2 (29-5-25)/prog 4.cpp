#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;

public:
    Employee(int i, string n) : id(i), name(n) {}  
    void show() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Employee e1(101, "Sara");
    e1.show(); // Output: ID: 101, Name: Sara
    return 0;
}

