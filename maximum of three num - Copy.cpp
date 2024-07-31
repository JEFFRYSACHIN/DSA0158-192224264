#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, max;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Find the maximum of the three numbers
    max = num1; 
    if (num2 > max) max = num2;
    if (num3 > max) max = num3;

    cout << "The maximum of the three numbers is: " << max << endl;

    return 0;
}
