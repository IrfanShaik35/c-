#include <iostream>
#include <string>
using namespace std;

inline bool isPalindrome(string str) {
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    if (isPalindrome(str)) {
        cout << "THE GIVEN STRING IS PALINDROME" << endl;
    } else {
        cout << "THE GIVEN STRING IS NOT PALINDROME" << endl;
    }

    return 0;
}

