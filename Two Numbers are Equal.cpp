#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    if (num1 == num2) {
        std::cout << "The numbers are equal." << std::endl;
    } else {
        std::cout << "The numbers are not equal." << std::endl;
    }

    return 0;
}
