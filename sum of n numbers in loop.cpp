#include <iostream>

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int sum = 0; 
    if (n <= 0) {
        std::cout << "The value of n should be a positive integer." << std::endl;
        return 1; 
    std::cout << "Enter the numbers: ";
    for (int i = 1; i < n; ++i) {
        int num;
        std::cin >> num; 
        sum += num;     
    }
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
}
