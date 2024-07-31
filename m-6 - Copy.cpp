#include <iostream>
using namespace std;

double rectangleArea(double width = 1.0, double height = 1.0) {
    return width * height;
}
int main() {
    cout << "Area with default dimensions: " << rectangleArea() << endl;
    cout << "Area with width 5 and height 10: " << rectangleArea(5.0, 10.0) << endl;
    return 0;
}
