#include <iostream>
#include <cmath>
using namespace std;

class BinaryToOctal {
public:
    BinaryToOctal(int binary) {
        int decimal = 0, octal = 0, i = 0;
        while (binary != 0) {
            decimal += (binary % 10) * pow(2, i);
            ++i;
            binary /= 10;
        }
        i = 1;
        while (decimal != 0) {
            octal += (decimal % 8) * i;
            decimal /= 8;
            i *= 10;
        }
        cout << "Octal: " << octal << endl;
    }
};

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    BinaryToOctal obj(binary);
    return 0;
}

