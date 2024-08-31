#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;

    Student(string name = "Unknown") {
        this->name = name;
    }

    void print_name() {
        cout << name << " ";
    }
};

// Sample Usage
int main() {
    Student student1("John");
    Student student2;

    student1.print_name();  // Output: John
    student2.print_name();  // Output: Unknown

    return 0;
}

