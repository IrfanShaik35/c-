#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter the position N: ";
    cin >> N;
    if (N == 0) {
        cout << "Fibonacci number at position " << N << " is 0" << endl;
    } else if (N == 1) {
        cout << "Fibonacci number at position " << N << " is 1" << endl;
    } else {
        int prev1 = 0, prev2 = 1, currentFib = 0;
        for (int i = 2; i <= N; ++i) {
            currentFib = prev1 + prev2;
            prev1 = prev2;
            prev2 = currentFib;
    }
        cout << "Fibonacci number at position " << N << " is " << currentFib << endl;
    }

    return 0;
}

