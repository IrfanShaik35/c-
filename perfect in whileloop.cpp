#include <iostream>

int main() {
    int num, sum = 0;

    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    // Calculate the sum of proper divisors using a WHILE loop
    int i = 1;
    while (i <= num / 2) {
        if (num % i == 0) {
            sum += i;
        }
        i++;
    }

    // Check if the number is perfect
    if (sum == num && num > 0) {
        std::cout << num << " is a perfect number." << std::endl;
    } else {
        std::cout << num << " is not a perfect number." << std::endl;
    }

    return 0;
}
