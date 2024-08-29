#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    void input() {
        cout << "Enter the value of Complex Numbers a, b: ";
        cin >> real >> imag;
    }

    Complex operator + (const Complex &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    Complex operator - (const Complex &obj) {
        Complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }

    void print() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, sum, diff;
    c1.input();
    c2.input();

    cout << "Input Values" << endl;
    c1.print();
    c2.print();

    sum = c1 + c2;
    diff = c1 - c2;

    cout << "Result" << endl;
    sum.print();
    diff.print();

    return 0;
}

