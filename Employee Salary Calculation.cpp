#include<iostream>
using namespace std;

class Employee {
public:
    string Emp_name, Address, Mail_id;
    int Emp_id;
    long long Mobile_no;
};

class Programmer : public Employee {
public:
    float BP;

    void getPaySlip() {
        float DA = 0.97 * BP;
        float HRA = 0.10 * BP;
        float PF = 0.12 * BP;
        float clubFund = 0.001 * BP;
        float grossPay = BP + DA + HRA;
        float netPay = grossPay - (PF + clubFund);

        cout << "=======================\n";
        cout << "PROGRAMMER PAYMENT SLIP\n";
        cout << "=======================\n";
        cout << "BASIC PAY => " << BP << endl;
        cout << "DEARNESS ALLOWANCE => " << DA << endl;
        cout << "HOUSE RENT ALLOWANCE => " << HRA << endl;
        cout << "PROVIDENT FUND => " << PF << endl;
        cout << "CLUB FUND => " << clubFund << endl;
        cout << "GROSS PAY => " << grossPay << endl;
        cout << "NET PAY => " << netPay << endl;
    }
};

int main() {
    Programmer p;
    cout << "Enter Name of the Employee: ";
    cin >> p.Emp_name;
    cout << "Enter Address of the Employee: ";
    cin >> p.Address;
    cout << "Enter ID of the Employee: ";
    cin >> p.Emp_id;
    cout << "Enter Mobile Number: ";
    cin >> p.Mobile_no;
    cout << "Enter E-Mail ID of the Employee: ";
    cin >> p.Mail_id;
    cout << "ENTER THE BASIC PAY OF THE PROGRAMMER => ";
    cin >> p.BP;

    p.getPaySlip();

    return 0;
}

