#include <iostream>
using namespace std;

class SeriesSum {
public:
    SeriesSum(int n) {
        int sum = 0;
        for(int i = 1; i <= n; ++i) {
            sum += i;
        }
        cout << "Sum of series 1 to " << n << " is " << sum << endl;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    SeriesSum ss(num);
    return 0;
}
