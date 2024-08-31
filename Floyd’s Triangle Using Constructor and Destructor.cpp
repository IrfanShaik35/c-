#include <iostream>
using namespace std;

class FloydsTriangle {
public:
    FloydsTriangle(int n) {
        int num = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << num << " ";
                num++;
            }
            cout << endl;
        }
    }

    ~FloydsTriangle() {
        cout << "Destructor called!" << endl;
    }
};

// Sample Usage
int main() {
    FloydsTriangle ft(5);  // Prints Floyd's Triangle with 5 rows
    return 0;
}

