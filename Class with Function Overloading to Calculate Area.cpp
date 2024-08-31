class Area:
    def calculate_area(self, length, breadth=None):
        if breadth is None:
            # Square
            return length * length
        else:
            # Rectangle
            return length * breadth

# Sample Usage
area_calculator = Area()

print(area_calculator.calculate_area(7))  # Output: 49 (Square)
print(area_calculator.calculate_area(7, 8))  # Output: 56 (Rectangle)#include <iostream>
using namespace std;

class Area {
public:
    int calculate_area(int length, int breadth = 0) {
        if (breadth == 0) {
            // Square
            return length * length;
        } else {
            // Rectangle
            return length * breadth;
        }
    }
};

// Sample Usage
int main() {
    Area area_calculator;

    cout << area_calculator.calculate_area(7) << " ";  // Output: 49 (Square)
    cout << area_calculator.calculate_area(7, 8) << endl;  // Output: 56 (Rectangle)

    return 0;
}

