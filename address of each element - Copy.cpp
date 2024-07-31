#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* ptr = arr; // Pointer to the first element of the array

    cout << "Displaying address using arrays:" << endl;
    cout << "&arr[0] = " << &arr[0] << endl;
    cout << "&arr[1] = " << &arr[1] << endl;
    cout << "&arr[2] = " << &arr[2] << endl;
    cout << endl;

    cout << "Displaying address using pointers:" << endl;
    cout << "ptr + 0 = " << ptr + 0 << endl; // ptr + 0 points to arr[0]a
    cout << "ptr + 1 = " << ptr + 1 << endl; // ptr + 1 points to arr[1]
    cout << "ptr + 2 = " << ptr + 2 << endl; // ptr + 2 points to arr[2]

    return 0;
}