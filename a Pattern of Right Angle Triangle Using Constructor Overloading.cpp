#include <iostream>
using namespace std;

class TrianglePattern {
public:
    TrianglePattern(int n) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    TrianglePattern() {
        int n;
        cout << "Enter the number: ";
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    TrianglePattern obj1(4);  // Using parameterized constructor
    TrianglePattern obj2;     // Using default constructor
    return 0;
}

