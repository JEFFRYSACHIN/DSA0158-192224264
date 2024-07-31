#include <iostream>
using namespace std;

class Input {
protected:
    int x, y;
public:
    void getInput() {
        cout << "Enter values of x and y: ";
        cin >> x >> y;
    }

    int getX() const { return x; }
    int getY() const { return y; }
};

class Summation {
protected:
    int sum;
public:
    void calculateSum(int x, int y) {
        sum = x + y;
    }

    int getSum() const { return sum; }
};

class Calculator : public Input, public Summation {
public:
    void process() {
        getInput(); // Call getInput to initialize x and y
        calculateSum(getX(), getY()); // Calculate sum using x and y from Input
    }

    void displaySum() {
        cout << "Sum = " << getSum() << endl; // Display sum using getSum from Summation
    }
};

int main() {
    Calculator calc;
    calc.process(); // Perform input and calculation
    calc.displaySum(); // Display the calculated sum
    return 0;
}