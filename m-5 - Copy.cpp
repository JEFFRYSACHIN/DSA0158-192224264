#include <iostream>
using namespace std;
class Number {
protected:
    int M, N, K;
public:
    Number(int m, int n, int k) : M(m), N(n), K(k) {}
    virtual void printNumbers() = 0;
};
class Skipper : public Number {
public:
    Skipper(int m, int n, int k) : Number(m, n, k) {}
    void printNumbers() override {
        for (int i = M; i <= N; i += (K + 1)) {
            cout << i << " ";
        }
        cout << endl;
    }
};
int main() {
    int M, N, K;
    cout << "Enter the starting number (M): ";
    cin >> M;
    cout << "Enter the ending number (N): ";
    cin >> N;
    cout << "Enter the number to skip (K): ";
    cin >> K;

    Skipper skipper(M, N, K);
    cout << "Numbers from " << M << " to " << N << " skipping " << K << " numbers in between:" << endl;
    skipper.printNumbers();

    return 0;
}
