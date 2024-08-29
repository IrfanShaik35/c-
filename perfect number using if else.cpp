#include <iostream>

int main() {
    int number;
    int sum_of_divisors = 0;

    // Get the number from the user
    std::cout << "Enter a number to check if it's perfect: ";
    std::cin >> number;

    // Check if the number is positive
    if (number > 0) {
        // Find all divisors of the number and sum them up
        for (int i = 1; i <= number / 2; ++i) {
            if (number % i == 0) { // Check if 'i' is a divisor of 'number'
                sum_of_divisors += i;
            }
        }

        // Check if the sum of divisors equals the number
        if (sum_of_divisors == number) {
            std::cout << number << " is a perfect number" << std::endl;
        } else {
            std::cout << number << " is not a perfect number" << std::endl;
        }
    } else {
        // If the number is not positive
        std::cout << number << " is not a valid positive number" << std::endl;
    }

    return 0;
}
