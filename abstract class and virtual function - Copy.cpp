#include <iostream>
using namespace std;

// Abstract class Shape
class Shape {
public:
    // Pure virtual function for calculating area
    virtual float area() = 0;
};

// Derived class Circle inheriting from Shape
class Circle : public Shape {
private:
    float radius;

public:
    // Constructor to initialize radius
    Circle(float r) : radius(r) {}

    // Implementation of pure virtual function area() for Circle
    float area() override {
        return 3.14 * radius * radius; // Area of circle formula
    }
};

// Derived class Square inheriting from Shape
class Square : public Shape {
private:
    float side;

public:
    // Constructor to initialize side length
    Square(float s) : side(s) {}

    // Implementation of pure virtual function area() for Square
    float area() override {
        return side * side; // Area of square formula
    }
};

int main() {
    float radius, length;

    // Input for radius of the circle
    cout << "Enter radius of the circle: ";
    cin >> radius;

    // Input for length of the square
    cout << "Enter the length of the square: ";
    cin >> length;

    // Create objects of Circle and Square
    Circle circle(radius);
    Square square(length);

    // Calculate and display areas
    cout << "Area of square: " << square.area() << endl;
    cout << "Area of circle: " << circle.area() << endl;

    return 0;
}
