#include <iostream>
#include <stdexcept> // For exceptions
using namespace std;

void checkNumber(double num) {
    if (num <= 0) throw invalid_argument("Accept only positive integer.");
    if (num < 0.0001) throw out_of_range("The number is too small.");
    cout << "Number is acceptable." << endl;
}

int main() {
    double x;
    cout << "Enter a number: ";
    cin >> x;

    try {
        checkNumber(x);
    } catch (const invalid_argument &e) {
        cout << e.what() << endl;
    } catch (const out_of_range &e) {
        cout << e.what() << endl;
    } catch (...) {
        cout << "An unknown error occurred." << endl;
    }

    return 0;
}
