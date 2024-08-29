#include<iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;

    int firstMatrix[r][c], secondMatrix[r][c], result[r][c];

    cout << "Enter the first matrix elements:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> firstMatrix[i][j];
        }
    }

    cout << "Enter the second matrix elements:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> secondMatrix[i][j];
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            result[i][j] = 0;
            for(int k = 0; k < c; k++) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }

    cout << "Multiplication of the matrix:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

