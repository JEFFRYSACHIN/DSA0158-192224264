#include <iostream>
using namespace std;

class IncomeTax {
public:
    virtual void TDS(float income) = 0; // Pure virtual function
};

class Slab1 : public IncomeTax {
public:
    void TDS(float income) override {
        if (income <= 150000) cout << "No tax" << endl;
    }
};

class Slab2 : public IncomeTax {
public:
    void TDS(float income) override {
        if (income > 150000 && income <= 300000)
            cout << "Tax = " << (income - 150000) * 0.10 << endl;
    }
};

class Slab3 : public IncomeTax {
public:
    void TDS(float income) override {
        if (income > 300000 && income <= 500000)
            cout << "Tax = " << (income - 300000) * 0.20 + 15000 << endl;
        else if (income > 500000)
            cout << "Tax = " << (income - 500000) * 0.30 + 65000 << endl;
    }
};

int main() {
    float income;
    cout << "Enter the total income: ";
    cin >> income;

    IncomeTax *taxCalculator;

    if (income <= 150000) taxCalculator = new Slab1();
    else if (income <= 300000) taxCalculator = new Slab2();
    else taxCalculator = new Slab3();

    taxCalculator->TDS(income);
    delete taxCalculator;

    return 0;
}
