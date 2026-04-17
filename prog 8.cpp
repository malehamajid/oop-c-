#include <iostream>
using namespace std;
class Car;
void show(Car&c);
class Car {
public:
    string brand;
    string model;
  friend void show(Car&c) ;
};
 void show(Car&c){
 	cout << "Brand: " << c.brand << ", Model: " << c.model << endl;
 }
int main() {
    Car c1;
    c1.brand = "Toyota";
    c1.model = "Corolla";
    show(c1);
    return 0;
}

