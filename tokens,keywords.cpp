#include <iostream>

using namespace std;

const int MAX_COUNT = 100;

void printMessage() {
    cout << "Hello from printMessage!" << endl;
}

int main() {
    int count = 0;

    cout << "Program demonstrating tokens, keywords, identifiers, and constants." << endl;
    cout << "MAX_COUNT: " << MAX_COUNT << endl;

    count = 5;
    cout << "Value of count: " << count << endl;

    printMessage();

    return 0;
}
