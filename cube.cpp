#include <iostream>
#include <cmath> // For cbrt()

int main() {
    double number;

    // Get the number from the user
    std::cout << "Enter a number to find its cube root: ";
    std::cin >> number;

    // Calculate the cube root
    double cubeRoot = cbrt(number);

    // Display the result
    std::cout << "The cube root of " << number << " is " << cubeRoot << std::endl;

    return 0;
}


