#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int regNo;
    int mark1, mark2, mark3;
    float average;
    char grade;

public:
    void input() {
        cout << "ENTER THE STUDENT NAME => ";
        cin >> name;
        cout << "ENTER THE REGISTER NUMBER => ";
        cin >> regNo;
        cout << "MARK 1 => ";
        cin >> mark1;
        cout << "MARK 2 => ";
        cin >> mark2;
        cout << "MARK 3 => ";
        cin >> mark3;
    }

    void calculateGrade() {
        average = (mark1 + mark2 + mark3) / 3.0;
        if (average > 90) grade = 'S';
        else if (average > 80) grade = 'A';
        else if (average > 70) grade = 'C';
        else if (average > 60) grade = 'D';
        else if (average > 50) grade = 'E';
        else grade = 'F';
    }

    void display() {
        cout << "AVERAGE SCORE IS => " << average << endl;
        cout << grade << " GRADE" << endl;
    }
};

int main() {
    int n;
    cout << "ENTER THE NUMBER OF STUDENT ENTRIES => ";
    cin >> n;

    Student students[10];

    for (int i = 0; i < n; i++) {
        students[i].input();
        students[i].calculateGrade();
        students[i].display();
    }

    return 0;
}

