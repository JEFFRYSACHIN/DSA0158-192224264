#include <iostream>
using namespace std;
class Person {
protected:
    float salary;
public:
    void getdata() {
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displaydata() {
        cout << "Salary: " << salary << endl;
    }
    float bonus() {
        return salary * 1.1;
    }
};
class Admin : public Person {
};
class Account : public Person {
};
class Master : public Admin, public Account {
public:
    void getdata() {
        Admin::getdata(); 
    }
    void displaydata() {
        Admin::displaydata();
    }
    float bonus() {
        return Admin::bonus();
    }
};
int main() {
    Master employee;
    employee.getdata();
    employee.displaydata();
    float bonusAmount = employee.bonus();
    cout << "Bonus = " << bonusAmount << endl;
    return 0;
}