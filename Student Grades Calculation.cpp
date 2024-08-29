#include<iostream>
using namespace std;

int main() {
    int marks[5];
    int total = 0;
    float average;
    
    cout << "Please Enter the marks of five subjects: ";
    for(int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }
    
    average = total / 5.0;
    
    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;
    
    if(average > 75) {
        cout << "Grade: Distinction" << endl;
    } else if(average >= 60) {
        cout << "Grade: First Division" << endl;
    } else if(average >= 50) {
        cout << "Grade: Second Division" << endl;
    } else if(average >= 40) {
        cout << "Grade: Third Division" << endl;
    } else {
        cout << "Grade: Fail" << endl;
    }

    return 0;
}

