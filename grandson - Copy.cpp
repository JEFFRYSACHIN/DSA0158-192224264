#include <iostream>
#include <string>

using namespace std;

class Grandfather {
private:
    double property; // Property in Crores

public:
    Grandfather(double prop) : property(prop) {}

    double getProperty() const {
        return property;
    }
};

class Grandson : public Grandfather {
private:
    string name;

public:
    Grandson(const string& name, double prop) : Grandfather(prop), name(name) {}

    void showInheritedProperty() const {
        cout << name << " has inherited " << getProperty() << " Crores of property." << endl;
    }
};

int main() {
    Grandson gs("John", 500); // Create Grandson object inheriting 500 Crores property
    gs.showInheritedProperty(); // Display inherited property

    return 0;
}
