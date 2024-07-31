#include <iostream>
using namespace std;

class Number {
protected:
    int num;
public:
    void getNumber() { 
        cout << "Enter an integer number: "; 
        cin >> num; 
    }
    int getNum() const {
        return num;
    }
};

class Square : public Number {
public:
    int getSquare() {
        return num * num;
    }
};

class Cube : public Number {
public:
    int getCube() {
        return num * num * num;
    }
};

int main() {
    Square sq;
    Cube cu;

    sq.getNumber();
    cout << "Square of " << sq.getNum() << " is: " << sq.getSquare() << endl;

    cu.getNumber();
    cout << "Cube of " << cu.getNum() << " is: " << cu.getCube() << endl;

    return 0;
}
