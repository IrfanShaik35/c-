#include <iostream>
using namespace std;

class SeriesSum {
public:
    SeriesSum(int n) {
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
        cout << "Sum of series 1 to " << n << " is " << sum << endl;
    }
    SeriesSum() {
        int n, sum = 0;
        cout << "Enter the number: ";
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
        cout << "Sum of series 1 to " << n << " is " << sum << endl;
    }
};

int main() {
    SeriesSum obj1(5);  // Using parameterized constructor
    SeriesSum obj2;     // Using default constructor
    return 0;
}

