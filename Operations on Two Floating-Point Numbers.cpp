#include <iostream>



int main() {

    float num1, num2;



    std::cout << "Enter two floating-point numbers: ";

    std::cin >> num1 >> num2;



    float sum = num1 + num2;

    float difference = num1 - num2;

    float product = num1 * num2;

    float quotient = 0.0;

    float modulo = 0.0;



    if (num2 != 0) {

        quotient = num1 / num2;

        modulo = fmod(num1, num2);

    } else {

        std::cout << "Division by zero is not allowed." << std::endl;

    }



    std::cout << "Addition: " << sum << std::endl;

    std::cout << "Subtraction: " << difference << std::endl;

    std::cout << "Multiplication: " << product << std::endl;



    if (num2 != 0) {

        std::cout << "Division: " << quotient << std::endl;

        std::cout << "Modulo: " << modulo << std::endl;

    }



    return 0;

}

