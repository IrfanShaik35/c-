#include <iostream>
using namespace std;

int main() {
    int num, bit_pos;
    cout << "Enter Number: ";
    cin >> num;
    cout << "Enter bit number you wish to set: ";
    cin >> bit_pos;
    int mask = 1 << bit_pos;
    num = num | mask;
    cout << "Bit set successfully. The new number is: " << num << endl;

    return 0;
}

