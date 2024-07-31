#include <iostream>
using namespace std;
class Complex {
private:
    int real;
    int imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    Complex operator - (const Complex& obj) {
        Complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
    }
    void print() {
        if(imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};
int main() {
    int r1, i1, r2, i2;
    cout << "Enter the value of Complex Number a:";
    cin >> r1 >> i1;
    Complex c1(r1, i1);
    cout << "Enter the value of Complex Number b:";
    cin >> r2 >> i2;
    Complex c2(r2, i2);
    cout << "Input Values" << endl;
    c1.print();
    c2.print();
    Complex sum = c1 + c2; 
    Complex diff = c1 - c2;
    cout << "Result" << endl;
    sum.print();
    diff.print();
    return 0;
}