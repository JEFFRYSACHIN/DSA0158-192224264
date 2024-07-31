#include <iostream>
using namespace std;

class Triangle {
public:
    Triangle(int n = 5) { // Single constructor with default parameter
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Triangle t1;    // Uses default parameter (5)
    cout << endl;
    Triangle t2(3); // Uses parameterized value (3)
    return 0;
}
