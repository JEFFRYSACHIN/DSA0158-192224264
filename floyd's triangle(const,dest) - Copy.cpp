#include <iostream>
using namespace std;

class FloydsTriangle {
    int rows;

public:
    // Constructor to initialize rows and print Floyd's Triangle
    FloydsTriangle(int r) : rows(r) {
        int num = 1;
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << num << " ";
                ++num;
            }
            cout << endl;
        }
    }

    // Destructor
    ~FloydsTriangle() {
        cout << "Floyd's Triangle object is destroyed" << endl;
    }
};

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    FloydsTriangle triangle(rows);

    return 0;
}
