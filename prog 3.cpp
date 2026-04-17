#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
   void show();
   
};
 void Car::show() {
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
int main() {
    Car c1;
    c1.brand = "Toyota";
    c1.model = "Corolla";

    c1.show();
    return 0;
}

