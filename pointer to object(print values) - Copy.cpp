#include <iostream>
using namespace std;

// Define a class ComplexNumber
class ComplexNumber {
private:
    int real;
    int imaginary;
public:
    // Constructor to initialize real and imaginary parts
    ComplexNumber(int r, int i) {
        real = r;
        imaginary = i;
    }

    // Method to print real part
    void printReal() {
        cout << "The real part is " << real << endl;
    }

    // Method to print imaginary part
    void printImaginary() {
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main() {
    // Create an object of ComplexNumber using dynamic allocation
    ComplexNumber* ptrComplex = new ComplexNumber(1, 54);

    // Access and print real and imaginary parts using pointer to object
    ptrComplex->printReal();
    ptrComplex->printImaginary();

    // Deallocate memory allocated for object
    delete ptrComplex;

    return 0;
}