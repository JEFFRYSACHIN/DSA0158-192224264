#include <iostream>
using namespace std;

class TrianglePattern {
public:
    TrianglePattern(int n) {
        for(int i = 1; i <= n; ++i) {
            for(int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    TrianglePattern tp(num);
    return 0;
}
