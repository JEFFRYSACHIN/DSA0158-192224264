#include <iostream>
#include <cmath>
using namespace std;

class Volume {
    double volume;

public:
    // Constructor for cube
    Volume(double side) {
        volume = side * side * side;
    }

    // Constructor for cylinder
    Volume(double radius, double height) {
        volume = M_PI * radius * radius * height;
    }

    double getVolume() const {
        return volume;
    }
};

int main() {
    Volume cube(3.0);          // Volume of cube with side 3.0
    Volume cylinder(2.0, 5.0); // Volume of cylinder with radius 2.0 and height 5.0

    cout << "Volume of cube: " << cube.getVolume() << endl;
    cout << "Volume of cylinder: " << cylinder.getVolume() << endl;

    return 0;
}
