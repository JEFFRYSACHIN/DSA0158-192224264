#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name;
    int age;
    double grade;
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter grade: ";
        cin >> grade;
    }
    void display() const {
        cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
    }
};
int main() {
    const int numStudents = 3;
    Student students[numStudents];
    for(int i = 0; i < numStudents; ++i) {
        cout << "Enter details for student " << i + 1 << ":\n";
        students[i].input();
    }
    cout << "\nStudent Details:\n";
    for(int i = 0; i < numStudents; ++i) {
        students[i].display();
    }

    return 0;
}
