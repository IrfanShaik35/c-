#include <iostream>
using namespace std;

void getPerson(int age) {
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are allowed to vote after " << 18 - age << " years." << endl;
    }
}

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    getPerson(age);

    return 0;
}

