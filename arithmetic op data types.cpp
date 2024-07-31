#include <iostream>

using namespace std;

int main() {
    // Variables for different data types
    int int1, int2;
    float float1, float2;

    // Input integers
    cout << "Enter two integers:" << endl;
    cin >> int1 >> int2;

    // Input floats
    cout << "Enter two float numbers:" << endl;
    cin >> float1 >> float2;

    // Integer arithmetic
    cout << "\nInteger Arithmetic Operations:" << endl;
    cout << int1 << " + " << int2 << " = " << int1 + int2 << endl;
    cout << int1 << " - " << int2 << " = " << int1 - int2 << endl;
    cout << int1 << " * " << int2 << " = " << int1 * int2 << endl;
    if (int2 != 0) {
        cout << int1 << " / " << int2 << " = " << int1 / int2 << endl;
        cout << int1 << " % " << int2 << " = " << int1 % int2 << endl;
    } else {
        cout << "Division by zero is not allowed for integers." << endl;
    }

    // Float arithmetic
    cout << "\nFloat Arithmetic Operations:" << endl;
    cout << float1 << " + " << float2 << " = " << float1 + float2 << endl;
    cout << float1 << " - " << float2 << " = " << float1 - float2 << endl;
    cout << float1 << " * " << float2 << " = " << float1 * float2 << endl;
    if (float2 != 0) {
        cout << float1 << " / " << float2 << " = " << float1 / float2 << endl;
    } else {
        cout << "Division by zero is not allowed for floats." << endl;
    }

    return 0;
}