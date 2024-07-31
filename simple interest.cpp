#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, simpleInterest;

    // Input principal, rate, and time
    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter annual interest rate (in %): ";
    cin >> rate;

    cout << "Enter time (in years): ";
    cin >> time;

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Display the result
    cout << "Simple Interest = " << simpleInterest << endl;

    return 0;
}
