#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    string emp_id;
    float basic_salary;
public:
    Employee(string n, string id, float salary) : name(n), emp_id(id), basic_salary(salary) {}
};

class Pay : public Employee {
private:
    float gross_salary;
    float deductions;
    float net_salary;
public:
    Pay(string n, string id, float salary) : Employee(n, id, salary) {
        gross_salary = basic_salary + (basic_salary * 0.7); // 70% of basic salary as allowances
        deductions = 50000; // Fixed deductions
        net_salary = gross_salary - deductions;
    }

    void displayData() {
        cout << "Gross salary: " << gross_salary << endl;
        cout << "Ded: " << deductions << endl;
        cout << "Net salary = " << net_salary << endl;
    }
};

int main() {
    string name, emp_id;
    float basic_salary;

    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter Employee id: ";
    cin >> emp_id;
    cout << "Enter Employee Salary: ";
    cin >> basic_salary;

    Pay employee(name, emp_id, basic_salary);
    employee.displayData();

    return 0;
}
