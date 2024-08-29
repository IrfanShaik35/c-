#include <iostream>

bool isPerfect(int number) {
    if (number <= 0) {
        return false;
    }

    int sum = 0;

    // Find all divisors of the number and sum them up
    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) { // Check if 'i' is a divisor of 'number'
            sum += i;
        }
    }

    // A number is perfect if it equals the sum of its proper divisors
    return sum == number;
}

int main() {
    int number;

    // Get the number from the user
    std::cout << "Enter a number to check if it's perfect: ";
    std::cin >> number;

    // Check if the number is perfect and display the result
    if (isPerfect(number)) {
        std::cout << number << " is a perfect number" << std::endl;
    } else {
        std::cout << number << " is not a perfect number" << std::endl;
    }

    return 0;
}

