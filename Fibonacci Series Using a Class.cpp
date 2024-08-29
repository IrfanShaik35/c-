#include <iostream>
using namespace std;

class Series {
    int n;
public:
    void input(int limit) {
        n = limit;
    }

    void show() {
        int a = 0, b = 1, next;
        for (int i = 0; i < n; i++) {
            if (i <= 1)
                next = i;
            else {
                next = a + b;
                a = b;
                b = next;
            }
            cout << next << " ";
        }
        cout << endl;
    }
};

int main() {
    Series series;
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    series.input(limit);
    series.show();

    return 0;
}

