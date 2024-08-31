#include <iostream>
using namespace std;

class DivisibleBy9 {
public:
    DivisibleBy9() {
        int sum = 0;
        cout << "Numbers divisible by 9 between 100 and 200: " << endl;
        for (int i = 101; i < 200; ++i) {
            if (i % 9 == 0) {
                cout << i << " ";
                sum += i;
            }
        }
        cout << endl << "Sum of these numbers: " << sum << endl;
    }
    ~DivisibleBy9() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    DivisibleBy9 obj;
    return 0;
}

