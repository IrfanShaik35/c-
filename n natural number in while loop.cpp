#include <iostream>

int main() {
    int n;
    
    // Read the number of natural numbers
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    // Initialize sum to 0
    int sum = 0;
    
    // Check if the input number is valid
    if (n <= 0) {
        std::cout << "The value of n should be a positive integer." << std::endl;
        return 1; // Exit with an error code
    }

    // Initialize counter variable
    int i = 0;
    
    // While loop to read n numbers and calculate the sum
    std::cout << "Enter the numbers: ";
    while (i < n) {
        int num;
        std::cin >> num; // Read each number
        sum += num;     // Add the number to sum
        ++i;            // Increment the counter
    }
    
    // Output the result
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}

