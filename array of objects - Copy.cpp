#include <iostream>
using namespace std;

// Class Rectangle
class Rectangle {
private:
    int length;
    int breadth;

public:
    // Constructor to initialize length and breadth
    Rectangle(int l, int b) : length(l), breadth(b) {}

    // Method to calculate area (const member function)
    int area() const {
        return length * breadth;
    }
};

int main() {
    // Array of Rectangle objects with specific dimensions
    Rectangle rectangles[] = { {7, 4}, {5, 4} };

    // Calculate and display area for each rectangle
    for (const auto& rect : rectangles) {
        cout << rect.area() << endl;
    }

    return 0;
}
