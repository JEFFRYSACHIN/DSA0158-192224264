#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool areAnagrams(const string& str1, const string& str2) {
    string sorted_str1 = str1, sorted_str2 = str2;
    sort(sorted_str1.begin(), sorted_str1.end());
    sort(sorted_str2.begin(), sorted_str2.end());
    return sorted_str1 == sorted_str2;
}

int main() {
    string str1, str2;

    cout << "Enter the first string: "; getline(cin, str1);
    cout << "Enter the second string: "; getline(cin, str2);

    if (areAnagrams(str1, str2)) {
        cout << "\"" << str1 << "\" and \"" << str2 << "\" are anagrams." << endl;
    } else {
        cout << "\"" << str1 << "\" and \"" << str2 << "\" are not anagrams." << endl;
    }

    return 0;
}
