#include <iostream>

using namespace std;

int main() {
    int day;

    // Prompt the user to enter a number from 1 to 7
    cout << "Enter a number between 1 and 7 to get the corresponding day of the week:" << endl;
    cin >> day;

    // Switch-case structure to determine the day of the week
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7." << endl;
            break;
    }

    return 0;
}