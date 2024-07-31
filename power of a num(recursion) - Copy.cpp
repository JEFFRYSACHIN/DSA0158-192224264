#include <iostream>
using namespace std;

// Function to calculate power of a number using recursion
int power(int base, int exponent) {
    return (exponent == 0) ? 1 : base * power(base, exponent - 1);
}

int main() {
    int base, exponent;
    
    // Input base and exponent
    cout << "Enter base: "; cin >> base;
    cout << "Enter exponent: "; cin >> exponent;
    
    // Calculate and display the result
    cout << base << " raised to the power of " << exponent << " is: " << power(base, exponent) << endl;

    return 0;
}
