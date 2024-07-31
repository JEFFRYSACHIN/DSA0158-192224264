#include <iostream>
using namespace std;

class Person {
protected:
    float salary;
public:
    virtual void getData() = 0;
    virtual void displayData() = 0;
    virtual float bonus() = 0;
};

class Admin : virtual public Person {
public:
    void getData() override {
        cout << "Enter the salary: ";
        cin >> salary;
    }

    void displayData() override {
        cout << "Salary: " << salary << endl;
    }

    float bonus() override {
        return salary * 1.02; // 2% bonus
    }
};

class Account : virtual public Person {
public:
    void getData() override {
        cout << "Enter the salary: ";
        cin >> salary;
    }

    void displayData() override {
        cout << "Salary: " << salary << endl;
    }

    float bonus() override {
        return salary * 1.03; // 3% bonus
    }
};

class Master : public Admin, public Account {
public:
    void getData() override {
        Admin::getData();
    }

    void displayData() override {
        Admin::displayData();
    }

    float bonus() override {
        return Admin::bonus(); // Using Admin's bonus calculation
    }
};

int main() {
    Person* employee = new Master();
    employee->getData();
    employee->displayData();
    cout << "Bonus = " << employee->bonus() << endl;
    delete employee;
    return 0;
}
