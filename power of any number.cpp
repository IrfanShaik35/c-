#include <iostream>
using namespace std;
int main() {
    double base, exponent, result = 1;
    cout << "Input the base: ";
    cin >> base;
    cout << "Input the exponent: ";
    cin >> exponent;
    for (int i = 0; i < exponent; i++) {
    result *= base;
    }
    cout << "The result is: " << result << std::endl;

    return 0;
}
