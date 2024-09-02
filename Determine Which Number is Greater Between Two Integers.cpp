#include <iostream>



int main() {

    int num1, num2;

    std::cout << "Enter two integers: ";

    std::cin >> num1 >> num2;



    if (num1 > num2) {

        std::cout << num1 << " is greater than " << num2 << "." << std::endl;

    } else if (num2 > num1) {

        std::cout << num2 << " is greater than " << num1 << "." << std::endl;

    } else {

        std::cout << "Both numbers are equal." << std::endl;

    }



    return 0;

}

