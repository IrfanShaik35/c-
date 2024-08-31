#include <iostream>
using namespace std;

class PrimeCheck {
    int num;
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i <= n/2; ++i) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
public:
    PrimeCheck(int n) : num(n) {
        bool found = false;
        for (int i = 2; i <= num/2; ++i) {
            if (isPrime(i) && isPrime(num - i)) {
                cout << num << " = " << i << " + " << (num - i) << endl;
                found = true;
            }
        }
        if (!found)
            cout << num << " cannot be expressed as the sum of two prime numbers." << endl;
    }
    ~PrimeCheck() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    PrimeCheck obj(n);
    return 0;
}

