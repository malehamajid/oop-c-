#include <iostream>                   
using namespace std;

class Product {
     int productID;             

public:
    Product(int productID)  {
        cout << "Product ID set to: " << productID << endl;
    }
};

int main() {
    Product p(501);                  
    return 0;
}

