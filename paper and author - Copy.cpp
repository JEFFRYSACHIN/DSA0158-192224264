#include <iostream>
#include <string>

using namespace std;

int main() {
    string authors[4];
    
    // Input the names of the 4 authors
    cout << "Enter the names of the 4 authors:" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << "Author " << i + 1 << ": ";
        getline(cin, authors[i]);
    }
    
    // Identify the index of the non-contributing author
    int notWorkedIndex;
    cout << "Enter the index (1-4) of the author who did not work on the paper: ";
    cin >> notWorkedIndex;
    
    // Validate the index
    if (notWorkedIndex < 1 || notWorkedIndex > 4) {
        cout << "Invalid index entered. Exiting program." << endl;
        return 1;
    }
    
    // Adjust index to match array indexing (1-based to 0-based)
    notWorkedIndex--;

    // Output the authors excluding the non-contributing author
    cout << "\nAuthors of the paper excluding the non-contributing author:" << endl;
    for (int i = 0; i < 4; ++i) {
        if (i != notWorkedIndex) {
            cout << "Author " << i + 1 << ": " << authors[i] << endl;
        }
    }
    
    // Add a new 5th author
    string newAuthor;
    cout << "\nEnter the name of the new 5th author: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, newAuthor);
    
    // Output the final list of authors including the new 5th author
    cout << "\nFinal list of authors including the new 5th author:" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << "Author " << i + 1 << ": " << authors[i] << endl;
    }
    cout << "Author 5: " << newAuthor << endl;

    return 0;
}
