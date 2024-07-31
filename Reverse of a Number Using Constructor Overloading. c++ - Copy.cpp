#include <iostream>
using namespace std;

class ReverseNumber {
public:
    ReverseNumber(int num) {
        int reverse = 0;
        while (num > 0) {
            reverse = reverse * 10 + num % 10;
            num /= 10;
        }
        cout << "Reverse of the number is " << reverse << endl;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    ReverseNumber rn(num);
    return 0;
}
