#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int age;
    void setData(string n, int a) {
        name = n;
        age = a;
    }
};
void showStudent(Student s) {
    cout << "Name: " << s.name << ", Age: " << s.age << endl;
}
int main() {
    Student s1;
    s1.setData("Ali", 21);
    showStudent(s1);  
    
}

