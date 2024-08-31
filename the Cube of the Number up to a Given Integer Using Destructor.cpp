#include <iostream>
using namespace std;

class Cube {
    int n;
public:
    Cube(int num) : n(num) {}
    void displayCube() {
        for (int i = 1; i <= n; ++i) {
            cout << "Cube of " << i << " is " << i*i*i << endl;
        }
    }
    ~Cube() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    Cube obj(n);
    obj.displayCube();
    return 0;
}

