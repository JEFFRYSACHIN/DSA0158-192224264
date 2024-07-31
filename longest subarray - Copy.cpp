#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int longestIncreasingSubsequence(const vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return 0;

    vector<int> dp(n, 1);

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (arr[j] < arr[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main() {
    vector<int> arr = {10, 22, 9, 33, 21, 50, 41, 60};
    
    cout << "Original Array:";
    for (int num : arr) {
        cout << " " << num;
    }
    cout << endl;

    int length = longestIncreasingSubsequence(arr);
    
    cout << "Length of Longest Increasing Subsequence: " << length << endl;

    return 0;
}
