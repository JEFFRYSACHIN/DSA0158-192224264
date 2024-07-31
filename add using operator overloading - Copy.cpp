#include <iostream>
using namespace std;

class Add {
    int value;

public:
    Add(int v) : value(v) {}

    Add operator+(const Add& other) {
        return Add(value + other.value);
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Add num1(10), num2(5);
    Add result = num1 + num2;
    cout << "sum: " << result.getValue() << endl;
    return 0;
}
