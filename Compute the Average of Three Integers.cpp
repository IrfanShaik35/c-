#include <iostream>



int main() {

    int num1, num2, num3;

    std::cout << "Enter three integers: ";

    std::cin >> num1 >> num2 >> num3;



    float average = (num1 + num2 + num3) / 3.0;



    std::cout << "The average is: " << average << std::endl;



    return 0;

}

