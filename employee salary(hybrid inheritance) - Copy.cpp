#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int employeeID;
    string employeeName;
    double basicSalary;
public:
    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, employeeName);
        cout << "Enter basic salary of Employee: ";
        cin >> basicSalary;
    }
};

class GrossSalary : virtual public Employee {
protected:
    double grossSalary;
public:
    void calculateGrossSalary() {
        double hra = 0.1 * basicSalary; // House Rent Allowance
        double da = 0.1 * basicSalary;  // Dearness Allowance
        grossSalary = basicSalary + hra + da;
    }
    void displayGrossSalary() {
        cout << "Gross Salary = Rs." << grossSalary << endl;
    }
};

class NetSalary : public GrossSalary {
protected:
    double netSalary;
public:
    void calculateNetSalary() {
        double pf = 0.05 * basicSalary; // Provident Fund
        netSalary = grossSalary - pf;
    }
    void displayNetSalary() {
        cout << "Net Salary = Rs." << netSalary << endl;
    }
};

class Salary : public NetSalary {
public:
    void displaySalaryDetails() {
        cout << "\nEmployee Details:\n";
        cout << "\n";
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: Rs." << basicSalary << endl;
        displayGrossSalary();
        displayNetSalary();
    }
};

int main() {
    Salary employeeSalary;
    employeeSalary.getDetails();
    employeeSalary.calculateGrossSalary();
    employeeSalary.calculateNetSalary();
    employeeSalary.displaySalaryDetails();
    return 0;
}