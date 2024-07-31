#include <iostream>
using namespace std;

int main() {
    int number;

    // Input the number for which multiplication table is to be printed
    cout << "Enter a number to print its multiplication table: ";
    cin >> number;

    // Print the multiplication table using a for loop
    cout << "Multiplication table of " << number << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << number << " * " << i << " = " << (number * i) << endl;
    }

    return 0;
}
