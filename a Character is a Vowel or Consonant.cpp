#include <iostream>

int main() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        std::cout << ch << " is a vowel." << std::endl;
    } else if (isalpha(ch)) {
        std::cout << ch << " is a consonant." << std::endl;
    } else {
        std::cout << ch << " is not an alphabetic character." << std::endl;
    }

    return 0;
}
