#include <iostream>
#include <cmath>
using namespace std;

class Solid {
public:
    double dimension1, dimension2;
    string solid_type;

    Solid(double dimension1, double dimension2 = 0, string solid_type = "Cube") {
        this->dimension1 = dimension1;
        this->dimension2 = (dimension2 == 0) ? dimension1 : dimension2;
        this->solid_type = solid_type;
    }

    double volume() {
        if (solid_type == "Cube") {
            return pow(dimension1, 3);
        } else if (solid_type == "Cylinder") {
            return M_PI * pow(dimension1, 2) * dimension2;
        }
        return 0;
    }
};

// Sample Usage
int main() {
    Solid cube(3);
    Solid cylinder(3, 5, "Cylinder");

    cout << "Cube Volume: " << cube.volume() << endl;          // Output: 27
    cout << "Cylinder Volume: " << cylinder.volume() << endl;  // Output: 141.37

    return 0;
}

