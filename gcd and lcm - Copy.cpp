#include <iostream>
using namespace std;

// Function to calculate GCD (Greatest Common Divisor)
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Function to calculate LCM (Lowest Common Multiple)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    
    // Input two numbers
    cout << "Enter first number: "; cin >> num1;
    cout << "Enter second number: "; cin >> num2;
    
    // Calculate GCD and LCM
    int gcdResult = gcd(num1, num2);
    int lcmResult = lcm(num1, num2);
    
    // Output results
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcdResult << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcmResult << endl;
    
    return 0;
}
