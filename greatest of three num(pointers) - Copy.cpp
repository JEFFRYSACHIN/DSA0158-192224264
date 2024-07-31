#include <iostream>
using namespace std;

void findGreatest(int *a, int *b, int *c, int *greatest) {
    *greatest = (*a > *b) ? ((*a > *c) ? *a : *c) : ((*b > *c) ? *b : *c);
}

int main() {
    int num1, num2, num3, greatest;
    cout << "Enter the three numbers: ";
    cin >> num1 >> num2 >> num3;

    findGreatest(&num1, &num2, &num3, &greatest);

    cout << "The greatest number is: " << greatest << endl;
    return 0;
}
