#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) {  // Constructor with two parameters
        name = n;              // Initialize name
        age = a;               // Initialize age
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1("john", 21);  // Create object using constructor
    p1.display();            // Display values
    return 0;
}

