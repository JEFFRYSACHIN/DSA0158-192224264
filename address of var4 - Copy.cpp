#include <iostream>
using namespace std;

int main() {
    int var1 = 10;
    float var2 = 20.5;
    char var3 = 'A';

    cout << "Address of var1: " << &var1 << endl;
    cout << "Address of var2: " << &var2 << endl;
    cout << "Address of var3: " << static_cast<void*>(&var3) << endl;

    return 0;
}
