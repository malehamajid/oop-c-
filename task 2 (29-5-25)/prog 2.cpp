#include <iostream>
using namespace std;

class Circle {
    float radius;

public:
    // Constructor with default argument
    Circle(float r = 1.0) {
        radius = r; // Sets radius, or defaults to 1.0
    }

    void area() {
        cout << "Area: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Circle c1,c2(3);     // c1 Uses default radius = 1.0

    c1.area();     // Output: Area: 3.14
    c2.area();     // Output: Area: 28.26
    return 0;
}

