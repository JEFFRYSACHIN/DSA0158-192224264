#include <iostream>
#include <stdexcept> // For std::runtime_error
using namespace std;

class Student {
private:
    float marks[4];
    float total;
    float aggregate;

public:
    void getMarks() {
        cout << "Enter the marks in Python: ";
        cin >> marks[0];
        cout << "Enter the marks in C Programming: ";
        cin >> marks[1];
        cout << "Enter the marks in Mathematics: ";
        cin >> marks[2];
        cout << "Enter the marks in Physics: ";
        cin >> marks[3];
    }

    void calculate() {
        total = marks[0] + marks[1] + marks[2] + marks[3];
        aggregate = total / 4;
    }

    void displayGrade() {
        try {
            if (aggregate < 50) {
                throw runtime_error("Fail");
            } else {
                cout << "Pass" << endl;
            }
        } catch (const runtime_error &e) {
            cout << e.what() << endl;
        }
    }
};

int main() {
    Student student;
    student.getMarks();
    student.calculate();
    student.displayGrade();
    return 0;
}
