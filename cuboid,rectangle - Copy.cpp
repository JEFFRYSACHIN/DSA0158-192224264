#include <iostream>
using namespace std;

class Shape {
public:
    virtual void getData() = 0;
    virtual void displayData() = 0;
};

class Rectangle : public Shape {
protected:
    int length, breadth;
public:
    void getData() override {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    int area() {
        return length * breadth;
    }

    void displayData() override {
        cout << "Area of Rectangle = " << area() << endl;
    }
};

class Cuboid : public Rectangle {
private:
    int height;
public:
    void getData() override {
        Rectangle::getData();
        cout << "Enter height: ";
        cin >> height;
    }

    int volume() {
        return length * breadth * height;
    }

    void displayData() override {
        Rectangle::displayData();
        cout << "Volume of Cuboid = " << volume() << endl;
    }
};

int main() {
    Cuboid cuboid;
    cuboid.getData();
    cuboid.displayData();
    return 0;
}
