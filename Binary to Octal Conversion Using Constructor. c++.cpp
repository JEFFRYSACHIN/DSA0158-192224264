#include <iostream>
#include <string>
using namespace std;

class BinaryToOctal {
public:
    BinaryToOctal(string bin) {
        int decimal = 0;
        for(char digit : bin) {
            decimal = decimal * 2 + (digit - '0');
        }

        string octal = "";
        do {
            octal = to_string(decimal % 8) + octal;
            decimal /= 8;
        } while (decimal > 0);

        cout << "Octal equivalent: " << octal << endl;
    }
};

int main() {
    string bin;
    cout << "Enter a binary number: ";
    cin >> bin;
    BinaryToOctal bto(bin);
    return 0;
}
