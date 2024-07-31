#include <iostream>  // Includes the iostream header file for input-output operations.

using namespace std;  // Allows us to use standard C++ library features without prefixing 'std::'.

// Define the inline function to calculate the square of a number
inline int square(int x) {
    return x * x;  // Return the square of the number
}

int main() {
    int num;  // Variable to store the user-input integer

    // Prompt the user to enter an integer
    cout << "Enter an integer: ";
    cin >> num;  // Read the integer from the user

    // Call the inline function to calculate the square of the integer
    int result = square(num);  // Calculate the square of the input number

    // Display the result
    cout << "The square of " << num << " is: " << result << endl;

    return 0;  // Indicate successful completion of the program.
}