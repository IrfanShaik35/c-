#include<iostream>
using namespace std;

class Car {
    static int count;
    int id;
    string name;
    int marks;

public:
    Car(int i, string n, int m) {
        id = i;
        name = n;
        marks = m;
        count++;
    }

    void display() {
        cout << "Id of the Car: " << id << endl;
        cout << "Name of the Car: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    static int getCount() {
        return count;
    }
};


