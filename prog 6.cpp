
#include <iostream>       
using namespace std;      

class Rectangle;          
void area(Rectangle& r);  

class Rectangle {
public:                        
    int length, width;              
    void input(int l, int w) {      
        length = l;                 
        width = w;                  
    }
    friend void area(Rectangle& r);  

};

void area(Rectangle& r) { 
    cout << "Area of Rectangle: "<< r.length * r.width << endl;                      
}

int main() {                               
    Rectangle a;                        
    a.input( 5, 3);                     
    area(a);                            
    return 0;                            
}

