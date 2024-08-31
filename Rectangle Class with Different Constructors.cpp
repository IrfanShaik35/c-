class Rectangle:
    def __init__(self, length=0, breadth=0):
        self.length = length
        self.breadth = breadth

    def area(self):
        return self.length * self.breadth

# Sample Usage
rect1 = Rectangle()
rect2 = Rectangle(3, 3)
rect3 = Rectangle(3)

print(f"Area: {rect1.area()}")  # Output: Area: 0
print(f"Area: {rect2.area()}")  # Output: Area: 9
print(f"Area: {rect3.area()}")  # Output: Area: 9#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, breadth;

    Rectangle() {
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    Rectangle(int side) {
        length = side;
        breadth = side;
    }

    int area() {
        return length * breadth;
    }
};

// Sample Usage
int main() {
    Rectangle rect1;
    Rectangle rect2(3, 3);
    Rectangle rect3(3);

    cout << "Area: " << rect1.area() << endl;  // Output: Area: 0
    cout << "Area: " << rect2.area() << endl;  // Output: Area: 9
    cout << "Area: " << rect3.area() << endl;  // Output: Area: 9

    return 0;
}

