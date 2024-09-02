#include <iostream>

#include <cmath>



int main() {

    float num;

    std::cout << "Enter a floating-point number: ";

    std::cin >> num;



    std::cout << "Rounded (floor): " << std::floor(num) << std::endl;

    std::cout << "Rounded (ceil): " << std::ceil(num) << std::endl;



    return 0;

}

