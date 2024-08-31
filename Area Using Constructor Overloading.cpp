#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    double a, b;
    string shape_type;

    Shape(double a, double b = 0, string shape_type = "Circle") {
        this->a = a;
        this->b = (b == 0) ? a : b;
        this->shape_type = shape_type;
    }

    double area() {
        if (shape_type == "Circle") {
            return M_PI * pow(a, 2);
        } else if (shape_type == "Rectangle") {
            return a * b;
        } else if (shape_type == "Triangle") {
            return 0.5 * a * b;
        }
        return 0;
    }
};

// Sample Usage
int main() {
    Shape circle(3);
    Shape rectangle(6, 7, "Rectangle");
    Shape triangle(3, 2, "Triangle");

    cout << "Circle Area: " << circle.area() << endl;      // Output: 28.26
    cout << "Rectangle Area: " << rectangle.area() << endl; // Output: 42
    cout << "Triangle Area: " << triangle.area() << endl;  // Output: 3

    return 0;
}

