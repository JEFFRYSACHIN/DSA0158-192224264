#include <iostream>
using namespace std;

// Base class for Circle
class Circle {
protected:
    float radius;
public:
    void getRadius() {
        cout << "Enter the radius: ";
        cin >> radius;
    }
    float areaCircle() {
        return 3.14 * radius * radius;
    }
};

// Derived class from Circle for Rectangle
class Rectangle : public Circle {
protected:
    float length, breadth;
public:
    void getDimensions() {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the breadth: ";
        cin >> breadth;
    }
    float areaRectangle() {
        return length * breadth;
    }
};

// Derived class from Rectangle for Cylinder
class Cylinder : public Rectangle {
private:
    float height;
public:
    void getHeight() {
        cout << "Enter the height: ";
        cin >> height;
    }
    float volumeCylinder() {
        return areaRectangle() * height;
    }
};

int main() {
    // Circle
    Circle c;
    cout << "Getting the radius of the circle\n";
    c.getRadius();
    cout << "The area = " << c.areaCircle() << endl << endl;

    // Rectangle
    Rectangle r;
    cout << "Getting the length and breadth of the rectangle\n";
    r.getDimensions();
    cout << "The area = " << r.areaRectangle() << endl << endl;

    // Cylinder
    Cylinder cy;
    cout << "Getting the height and dimensions of the cylinder\n";
    cy.getDimensions();
    cy.getHeight();
    cout << "The volume of the cylinder is: " << cy.volumeCylinder() << endl;

    return 0;
}
