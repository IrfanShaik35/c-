#include <iostream>
using namespace std;

class Cube {
public:
    Cube(int n) {
        for (int i = 1; i <= n; ++i) {
            cout << "Cube of " << i << " is " << i*i*i << endl;
        }
    }
    Cube() {
        int n;
        cout << "Enter the number: ";
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            cout << "Cube of " << i << " is " << i*i*i << endl;
        }
    }
};

int main() {
    Cube obj1(3);  // Using parameterized constructor
    Cube obj2;     // Using default constructor
    return 0;
}

