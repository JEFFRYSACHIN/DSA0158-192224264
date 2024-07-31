#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

class PrimeSumChecker {
private:
    int n;
public:
    PrimeSumChecker(int num) : n(num) {}
    ~PrimeSumChecker() {
        bool found = false;
        for (int i = 2; i <= n / 2; ++i) {
            if (isPrime(i) && isPrime(n - i)) {
                cout << n << " can be expressed as the sum of " << i << " and " << n - i << endl;
                found = true;
            }
        }
        if (!found) {
            cout << n << " cannot be expressed as the sum of two prime numbers." << endl;
        }
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    PrimeSumChecker psc(num);
    return 0;
}
