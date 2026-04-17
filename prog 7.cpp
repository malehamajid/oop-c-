/*1. Program: Create a Class for a Student
Statement: Write a program to define a class Student that stores a student's name and age. Create an object and display the data.
*/
#include <iostream>
using namespace std;
class Student;
void display( Student&s);
class Student {
public:
      string name;
      int age;
    friend void display(Student&s);
};
    void display(Student&s){
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    }
int main() {
    Student s1;
    s1.name = "Alice";
    s1.age = 58;
    display(s1);
    return 0;
}

