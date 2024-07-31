#include <iostream>
#include <string>

using namespace std;

inline bool isPalindrome(const string& str) {
    int start = 0;
    int end = str.length() - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return false;  
        }
        start++;
        end--;
    }
    return true;  
}

int main() {
    string input;

    // Get the string from the user
    cout << "Enter the string: ";
    cin >> input;

    // Check if the string is a palindrome and output the result
    if (isPalindrome(input)) {
        cout << "THE GIVEN STRING IS PALINDROME" << endl;
    } else {
        cout << "THE GIVEN STRING IS NOT A PALINDROME" << endl;
    }

    return 0;
}