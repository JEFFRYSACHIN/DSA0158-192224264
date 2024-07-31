#include <iostream>

using namespace std;

// Base class Shape
class Shape {
protected:
    double area;

public:
    Shape() : area(0) {}

    // Virtual function to calculate area
    virtual void calculateArea() = 0;

    // Function to display area
    void displayArea() {
        cout << "Area: " << area << endl;
    }
};

// Derived class Rectangle inheriting from Shape
class Rectangle : virtual public Shape {
protected:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Implementation of calculateArea for Rectangle
    void calculateArea() override {
        area = length * width;
    }
};

// Derived class Cuboid inheriting from Rectangle and Shape
class Cuboid : public Rectangle {
private:
    double height;
    double volume;

public:
    Cuboid(double l, double w, double h) : Rectangle(l, w), height(h), volume(0) {}

    // Function to calculate volume of Cuboid
    void calculateVolume() {
        volume = length * width * height;
    }

    // Override calculateArea to calculate total surface area of Cuboid
    void calculateArea() override {
        // Calculate the area of the cuboid
        area = 2 * (length * width + width * height + height * length);
    }

    // Function to display volume
    void displayVolume() {
        cout << "Volume: " << volume << endl;
    }
};

int main() {
    double l, w, h;

    cout << "Enter length, width, and height of the cuboid: ";
    cin >> l >> w >> h;

    Cuboid cuboid(l, w, h);

    // Calculate and display area
    cuboid.calculateArea();
    cout << "Total Surface Area of Cuboid:" << endl;
    cuboid.displayArea();

    // Calculate and display volume
    cuboid.calculateVolume();
    cuboid.displayVolume();

    return 0;
}
