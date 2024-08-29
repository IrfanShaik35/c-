#include <iostream>

int main() {
    int num;
    double sqrt, guess = 1.0;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num >= 0) {
      
        while ((guess * guess) - num > 0.0001 || (guess * guess) - num < -0.0001) {
            guess = (guess + (num / guess)) / 2;
        }
        sqrt = guess;
        std::cout << "The square root of " << num << " is " << sqrt;
    } else {
        std::cout << "Sorry, square root of negative numbers is not real.";
    }

    return 0;
}
