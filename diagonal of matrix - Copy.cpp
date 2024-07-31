#include <iostream>
using namespace std;

const int N = 3; // Example matrix size

int main() {
    int matrix[N][N] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    
    int sum = 0;
    
    // Calculate sum of diagonal elements
    for (int i = 0; i < N; ++i) {
        sum += matrix[i][i];
    }
    
    // Output the sum of diagonal elements
    cout << "Sum of diagonal elements: " << sum << endl;
    
    return 0;
}
