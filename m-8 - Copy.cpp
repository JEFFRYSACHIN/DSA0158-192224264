#include <iostream>
#include <cmath>
using namespace std;
double area(double width, double height) {
    return width * height;
}
double area(double radius) {
    return M_PI * radius * radius;
}
double area(double base, double height, bool isTriangle) {
    return 0.5 * base * height;
}
int main() {
    double width, height, radius, base;
    cout << "Enter width and height of the rectangle: ";
    cin >> width >> height;
    cout << "Area of the rectangle: " << area(width, height) << endl;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << area(base, height, true) << endl;

    return 0;
}
