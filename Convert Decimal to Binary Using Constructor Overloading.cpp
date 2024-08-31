#include <iostream>
using namespace std;

class DecimalToBinary {
public:
    DecimalToBinary(int num) {
        while (num > 0) {
            cout << num % 2;
            num = num / 2;
        }
        cout << endl;
    }
};

// Sample Usage
int main() {
    DecimalToBinary db(10);  // Outputs: 0101
    return 0;
}

