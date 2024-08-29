#include <iostream>
#include <string>
using namespace std;

bool validateUsername(string user1, string user2) {
    return user1 == user2;
}

int main() {
    string username1, username2;
    cout << "Enter the user name: ";
    cin >> username1;
    cout << "Reenter the user name: ";
    cin >> username2;

    if (validateUsername(username1, username2)) {
        cout << "User name is Valid" << endl;
    } else {
        cout << "User name is Invalid" << endl;
    }

    return 0;
}

