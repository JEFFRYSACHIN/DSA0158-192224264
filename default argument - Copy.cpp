#include <iostream>

using namespace std;
int calculateSum(int a = 25, int b = 30, int c = 25, int d = 30) {
    return a + b + c + d;
}

int main() {
    int a = 25, b = 30, c = 25, d = 30;
    
    cout << "Enter up to 4 values: ";
    cin >> a >> b >> c >> d;

    int sum = calculateSum(a, b, c, d);
    cout << "Sum of the values is: " << sum << endl;

    return 0;
}