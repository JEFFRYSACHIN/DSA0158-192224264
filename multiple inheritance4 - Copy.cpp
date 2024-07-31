#include <iostream>
using namespace std;

// Base class A
class A {
protected:
    int a;

public:
    A() : a(100) {} // Initialize a to 100
};

// Base class B
class B {
protected:
    int b;

public:
    B() : b(200) {} // Initialize b to 200
};

// Derived class C inherits from A and B
class C : public A, public B {
private:
    int c;

public:
    C() : c(300) {} // Initialize c to 300

    void display() {
        cout << "value of a: " << a << endl; // Accessing member of class A
        cout << "value of b: " << b << endl; // Accessing member of class B
        cout << "value of c: " << c << endl; // Accessing member of class C
    }
};

int main() {
    C objC;
    objC.display();

    return 0;
}
