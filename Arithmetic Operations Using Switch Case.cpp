#include<iostream>
using namespace std;

int main() {
    int choice, a, b;
    cout << "Calculator:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Number 1: ";
    cin >> a;
    cout << "Number 2: ";
    cin >> b;

    switch(choice) {
        case 1: cout << "The value of addition is " << a + b << endl; break;
        case 2: cout << "The value of subtraction is " << a - b << endl; break;
        case 3: cout << "The value of multiplication is " << a * b << endl; break;
        case 4: cout << "The value of division is " << a / b << endl; break;
        case 5: cout << "The value of modulus is " << a % b << endl; break;
        default: cout << "Invalid choice!" << endl;
    }

    return 0;
}

