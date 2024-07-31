#include <iostream>
using namespace std;

int& modifyValue(int& num) {
    num += 15;
    return num;
}

int main() {
    int number = 10;
    cout << "Initial value: " << number << endl;
    
    modifyValue(number) = 25;
    cout << "Updated value: " << number << endl;

    return 0;
}
