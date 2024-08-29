#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class A {
private:
    string str;

public:
    A(const string& inputStr) : str(inputStr) {}

    void toUpperCase() {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }

    void toLowerCase() {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }

    void display() const {
        cout << str << std::endl;
    }
};

int main() {
    string inputStr;
    cout << "Enter a string: ";
	getline(std::cin, inputStr);

     A st(inputStr);

    st.toUpperCase();
	cout << "Uppercase: ";
    st.display();

    st.toLowerCase();
    cout << "Lowercase: ";
    st.display();

    return 0;
}
