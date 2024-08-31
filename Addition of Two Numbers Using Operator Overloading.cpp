#include <iostream>
using namespace std;

class Add {
public:
    int a;

    Add(int a) {
        this->a = a;
    }

    Add operator+(const Add &other) {
        return Add(this->a + other.a);
    }
};

// Sample Usage
int main() {
    Add num1(10);
    Add num2(5);
    Add result = num1 + num2;

    cout << "Sum: " << result.a << endl;  // Output: Sum: 15

    return 0;
}

