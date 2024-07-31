#include <iostream>
using namespace std;

class Employee {
    string name;
    int id;
    float basicSalary, hra, da;

public:
    void getDetails() {
        cout << "Enter the employee name: "; cin >> name;
        cout << "Enter the employee id: "; cin >> id;
        cout << "Enter the basic salary: "; cin >> basicSalary;
        cout << "Enter the hra: "; cin >> hra;
        cout << "Enter the da: "; cin >> da;
    }

    void displayDetails() const {
        cout << "Name: " << name << ", ID: " << id 
             << ", Basic Salary: " << basicSalary 
             << ", HRA: " << hra << ", DA: " << da << endl;
    }
};

int main() {
    int n;
    cout << "****************\nEmployee details\n****************\n";
    cout << "Enter the number of employees: "; cin >> n;

    Employee employees[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nEmployee " << i + 1 << " details:\n";
        employees[i].getDetails();
    }

    cout << "\nEmployee details entered:\n";
    for (int i = 0; i < n; ++i) {
        employees[i].displayDetails();
    }

    return 0;
}
