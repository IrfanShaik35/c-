#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass();  // Constructor declaration
    void display();
};

// Constructor definition outside the class
MyClass::MyClass() {
    cout << "Constructor called!" << endl;
}

void MyClass::display() {
    cout << "Displaying content" << endl;
}

// Sample Usage
int main() {
    MyClass obj;  // Constructor will be called here
    obj.display();
    return 0;
}
 
