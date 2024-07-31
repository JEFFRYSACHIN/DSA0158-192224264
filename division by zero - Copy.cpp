#include <iostream>
#include <stdexcept> // For std::runtime_error
using namespace std;

void divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("divide by zero");
    }
    cout << "Result = " << (a / b) << endl;
}

int main() {
    int x, y;
    cout << "Enter two integers (a b): ";
    cin >> x >> y;

    try {
        divide(x, y);
    } catch (const runtime_error &e) {
        cout << e.what() << endl;
    }

    return 0;
}
