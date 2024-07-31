#include <iostream>
using namespace std;

class Shape {
public:
    // Constructor for circle
    Shape(double radius) {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }

    // Constructor for rectangle
    Shape(double length, double breadth) {
        cout << "Rectangle Area: " << length * breadth << endl;
    }

    // Constructor for triangle
    Shape(int base, int height) {
        cout << "Triangle Area: " << 0.5 * base * height << endl;
    }
};

int main() {
    Shape circle(3);         // Circle with radius 3
    Shape rectangle(6, 7);   // Rectangle with length 6 and breadth 7
    Shape triangle(2, 3);    // Triangle with base 2 and height 3
    return 0;
}

