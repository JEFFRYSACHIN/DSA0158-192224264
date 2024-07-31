#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int rollNumber;
    string name;
    string address;
    string city;
    int marks1, marks2, marks3;
public:
    void getDetails() {
        while (true) {
            cout << "Enter student roll number: ";
            cin >> rollNumber;
            if (rollNumber > 0) break;
            else cout << "Invalid roll number. Please enter a positive integer." << endl;
        }
        
        cout << "Enter student name: ";
        cin >> name;
        
        cout << "Enter student address: ";
        cin.ignore(); // Clear the newline character left in the buffer
        getline(cin, address);
        
        cout << "Enter student city: ";
        getline(cin, city);
        
        while (true) {
            cout << "Enter the marks1: ";
            cin >> marks1;
            if (marks1 >= 0 && marks1 <= 100) break;
            else cout << "Invalid marks. Please enter a number between 0 and 100." << endl;
        }
        
        while (true) {
            cout << "Enter the marks2: ";
            cin >> marks2;
            if (marks2 >= 0 && marks2 <= 100) break;
            else cout << "Invalid marks. Please enter a number between 0 and 100." << endl;
        }
        
        while (true) {
            cout << "Enter the marks3: ";
            cin >> marks3;
            if (marks3 >= 0 && marks3 <= 100) break;
            else cout << "Invalid marks. Please enter a number between 0 and 100." << endl;
        }
    }
};

class Report : public Student {
public:
    void displayDetails() {
        int total = marks1 + marks2 + marks3;
        float percentage = total / 3.0;
        char grade;
        
        if (percentage >= 75) grade = 'A';
        else if (percentage >= 60) grade = 'B';
        else if (percentage >= 50) grade = 'C';
        else if (percentage >= 35) grade = 'D';
        else grade = 'F';
        
        cout << "\nStudent Details:\n";
        cout << "\n";
        cout << "The student roll number: " << rollNumber << endl;
        cout << "The student name: " << name << endl;
        cout << "The student address: " << address << endl;
        cout << "The student city: " << city << endl;
        cout << "Marks1: " << marks1 << endl;
        cout << "Marks2: " << marks2 << endl;
        cout << "Marks3: " << marks3 << endl;
        cout << "Total percentage: " << percentage << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Report studentReport;
    studentReport.getDetails();
    studentReport.displayDetails();
    return 0;
}