#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number:";
    cin >> num;
    if (num < 2)
	 { cout << "Not Prime\n"; return 0; }
    for (int i = 2; i * i <= num; ++i)
        if (num % i == 0) { cout << "Not Prime\n"; return 0; }
    cout << "Prime\n";
    return 0;
}