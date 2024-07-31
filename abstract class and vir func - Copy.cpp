#include <iostream>
#include <cmath>

using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual double area() const = 0;
};

// Derived class for Square
class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    // Override area() function
    double area() const override {
        return side * side;
    }
};

// Derived class for Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override area() function
    double area() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    // Creating objects for Square and Circle
    Square square(5.0); // Side length of the square
    Circle circle(3.0); // Radius of the circle

    // Display the areas
    cout << "Area of the square: " << square.area() << endl;
    cout << "Area of the circle: " << circle.area() << endl;

    return 0;
}