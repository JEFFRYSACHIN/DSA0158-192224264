#include <iostream>

class Shape {
public:
    virtual void display() = 0; // Pure virtual function to make Shape an abstract class
};

class Rectangle : public Shape {
protected:
    int length;
    int breadth;
public:
    Rectangle(int l, int b) : length(l), breadth(b) {}

    int area() {
        return length * breadth;
    }

    void display() override {
        std::cout << "Area of Rectangle = " << area() << std::endl;
    }
};

class Cuboid : public Rectangle {
private:
    int height;
public:
    Cuboid(int l, int b, int h) : Rectangle(l, b), height(h) {}

    int volume() {
        return length * breadth * height;
    }

    void display() override {
        Rectangle::display();
        std::cout << "Volume of Cuboid = " << volume() << std::endl;
    }
};

int main() {
    int LENGTH = 10;
    int BREADTH = 10;
    int HEIGHT = 10;

    Cuboid cuboid(LENGTH, BREADTH, HEIGHT);
    cuboid.display();

    return 0;
}
