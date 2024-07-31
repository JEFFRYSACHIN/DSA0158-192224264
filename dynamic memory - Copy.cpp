#include <iostream>

using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions of the matrices
    cout << "Enter dimensions of the first matrix (rows columns): ";
    cin >> rows1 >> cols1;
    cout << "Enter dimensions of the second matrix (rows columns): ";
    cin >> rows2 >> cols2;

    // Check if multiplication is possible
    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible with these dimensions." << endl;
        return 1;
    }

    // Allocate memory for matrices
    int **matrix1 = new int*[rows1];
    int **matrix2 = new int*[rows2];
    int **result = new int*[rows1];

    for (int i = 0; i < rows1; ++i) {
        matrix1[i] = new int[cols1];
        result[i] = new int[cols2]; // Result matrix dimensions: rows1 x cols2
    }

    for (int i = 0; i < rows2; ++i) {
        matrix2[i] = new int[cols2];
    }

    // Input elements of the matrices
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows1; ++i)
        for (int j = 0; j < cols1; ++j)
            cin >> matrix1[i][j];

    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rows2; ++i)
        for (int j = 0; j < cols2; ++j)
            cin >> matrix2[i][j];

    // Perform matrix multiplication
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0; // Initialize result matrix element
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Output the resultant matrix
    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j)
            cout << result[i][j] << " ";
        cout << endl;
    }

    // Free dynamically allocated memory
    for (int i = 0; i < rows1; ++i) {
        delete[] matrix1[i];
        delete[] result[i];
    }

    for (int i = 0; i < rows2; ++i)
        delete[] matrix2[i];

    delete[] matrix1;
    delete[] matrix2;
    delete[] result;

    return 0;
}
