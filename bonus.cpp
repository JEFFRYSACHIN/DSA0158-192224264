#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;
    double base_salary;

public:
    virtual void getdata() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter base salary: ";
        cin >> base_salary;
        cin.ignore(); // Ignore the newline character left in the input buffer
    }

    virtual void displaydata() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Base Salary: " << base_salary << endl;
    }

    virtual double bonus() {
        return base_salary; // Base salary as the default bonus (no extra bonus)
    }
};

class Admin : virtual public Person {
public:
    double bonus() override {
        return base_salary * 1.1; // 10% bonus
    }
};

class Account : virtual public Person {
public:
    double bonus() override {
        return base_salary * 1.15; // 15% bonus
    }
};

class Master : public Admin, public Account {
public:
    void getdata() override {
        Person::getdata(); // Resolve ambiguity by calling the base class method
    }

    void displaydata() override {
        Person::displaydata(); // Resolve ambiguity by calling the base class method
    }

    double bonus() override {
        return Admin::bonus(); // Use Admin's bonus calculation
    }
};

int main() {
    Master master_employee;
    master_employee.getdata();
    master_employee.displaydata();
    cout << "Bonus: " << master_employee.bonus() << endl;

    return 0;
}
