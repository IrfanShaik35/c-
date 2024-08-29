#include<iostream>
using namespace std;

int sum(int a = 10, int b = 20, int c = 30, int d = 40) {
    return a + b + c + d;
}

int main() {
    int a, b, c, d;
    cout << "Enter the values: ";
    cin >> a >> b >> c >> d;
    cout << sum(a, b, c, d) << endl;
    return 0;
}

