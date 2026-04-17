#include <iostream>                  // Includes the input/output stream library for using cout and cin
using namespace std;                // Uses the standard namespace to avoid prefixing with std::

class Rectangle {                   // Declares a class named Rectangle
public:                             // Public access specifier – members declared after this are accessible outside the class
    int length, width;              // Two integer variables to store the dimensions of the rectangle

    void input(int l, int w) {      // Member function to assign values to length and width
        length = l;                 // Sets the class's length variable to the value of l
        width = w;                  // Sets the class's width variable to the value of w
    }
    void area();                    // Declares a member function named area (defined later using scope resolution)
};

void Rectangle::area() {            // Defines the area() function outside the class using the scope resolution operator
    cout << "Area of Rectangle: "   // Outputs the label "Area of Rectangle: "
         << length * width << endl; // Calculates and prints the area of the rectangle, then ends the line
}

int main() {                        // Entry point of the program
    Rectangle r;                    // Creates an object 'r' of the Rectangle class
    r.input(5, 3);                  // Calls the input function to set length = 5 and width = 3
    r.area();                       // Calls the area function to calculate and display the area
    return 0;                       // Returns 0 to indicate successful program execution
}

