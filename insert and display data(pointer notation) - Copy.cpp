#include <iostream>
using namespace std;

int main() {
    const int size = 4;
    double numbers[size];

    // Input using pointer notation
    cout << "Enter the " << size << " numbers: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> *(numbers + i); // Pointer notation for input
    }

    // Display using pointer notation
    cout << "\nNumbers entered: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << *(numbers + i) << endl; // Pointer notation for output
    }

    return 0;
}
