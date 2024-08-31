#include <iostream>
using namespace std;

class ReverseNumber {
public:
    ReverseNumber(int n) {
        int rev = 0;
        while (n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        cout << "Reversed Number: " << rev << endl;
    }
    ReverseNumber() {
        int n, rev = 0;
        cout << "Enter the number: ";
        cin >> n;
        while (n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        cout << "Reversed Number: " << rev << endl;
    }
};

int main() {
    ReverseNumber obj1(1234);  // Using parameterized constructor
    ReverseNumber obj2;        // Using default constructor
    return 0;
}

