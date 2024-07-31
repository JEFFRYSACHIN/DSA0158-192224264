#include <iostream>
class Cube {
private:
    double side;
    double volume;
public:
    Cube() {
        side = 0;
        volume = 0;
    }
    Cube(int s) {
        side = s;
        volume = s * s * s;
    }
    Cube(double s) {
        side = s;
        volume = s * s * s;
    }
    void displayVolume() const {
        std::cout << "The volume of the cube with side " << side << " is: " << volume << std::endl;
    }
};
int main() {
    Cube c1;           
    Cube c2(3);        
    Cube c3(4.5);     
    c1.displayVolume();
    c2.displayVolume(); 
    c3.displayVolume(); 

    return 0;
}