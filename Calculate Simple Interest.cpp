#include <iostream>
using namespace std;

float calculateInterest(int principal, int years, bool isSeniorCitizen) {
    float rate = isSeniorCitizen ? 0.12 : 0.10;
    return principal * rate * years;
}

int main() {
    int principal, years;
    char seniorCitizen;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the number of years: ";
    cin >> years;
    cout << "Is customer senior citizen (y/n): ";
    cin >> seniorCitizen;

    bool isSenior = (seniorCitizen == 'y' || seniorCitizen == 'Y');
    float interest = calculateInterest(principal, years, isSenior);

    cout << "Interest: " << interest << endl;

    return 0;
}

