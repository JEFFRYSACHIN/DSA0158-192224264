#include <iostream>
using namespace std;

void sortArray(int* arr, int size) {
    for(int i = 0; i < size - 1; ++i) {
        for(int j = i + 1; j < size; ++j) {
            if(*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size = 0;

    cout << "Enter Infinite Numbers and (-1 To Stop Reading)" << endl;
    while (true) {
        int num;
        cin >> num;
        if (num == -1) break;
        arr[size++] = num;
    }

    sortArray(arr, size);

    cout << "The Ascending order is given below:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << endl;
    }

    return 0;
}