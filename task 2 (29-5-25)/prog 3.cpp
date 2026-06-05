#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal constructor called" << endl;
    }
};

class Dog  {
public:
    Dog() {
        cout << "Dog constructor called" << endl;
    }
};

int main() {
	Animal a1; 
    Dog d; 
          
           
    return 0;
}

