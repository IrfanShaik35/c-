#include <iostream>

int main() {
    int num1, num2;

    // Input two integers
    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Perform operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = 0;
    int modulo = 0;

    // Check if the second number is not zero before division and modulo
    if (num2 != 0) {
        quotient = num1 / num2;
        modulo = num1 % num2;
    } else {
        std::cout << "Division by zero is not allowed." << std::endl;
    }

    // Display the results
    std::cout << "Addition: " << sum << std::endl;
    std::cout << "Subtraction: " << difference << std::endl;
    std::cout << "Multiplication: " << product << std::endl;
    
    if (num2 != 0) {
        std::cout << "Division: " << quotient << std::endl;
        std::cout << "Modulo: " << modulo << std::endl;
    }

    return 0;
}
