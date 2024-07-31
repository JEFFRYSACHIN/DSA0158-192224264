#include <iostream>
#include <stdexcept> // For std::out_of_range
using namespace std;

void accessElement(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        throw out_of_range("The element is an array index out of boundary.");
    }
    cout << "Element at index " << index << " is " << arr[index] << endl;
}

int main() {
    int x[] = {10, 20, 30, 40};
    int size = sizeof(x) / sizeof(x[0]);
    int index;

    cout << "Enter index to access: ";
    cin >> index;

    try {
        accessElement(x, size, index);
    } catch (const out_of_range &e) {
        cout << e.what() << endl;
    }

    return 0;
}
