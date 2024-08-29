#include<iostream>
using namespace std;

class Box {
public:
    int length;
private:
    int width;
public:
    void setWidth(int w) {
        width = w;
    }
    int getWidth() {
        return width;
    }
};

int main() {
    Box box;
    int l, w;
    cout << "Enter the Length of box: ";
    cin >> l;
    box.length = l;
    cout << "Enter the Width of box: ";
    cin >> w;
    box.setWidth(w);
    
    cout << "Length of box: " << box.length << endl;
    cout << "Width of box: " << box.getWidth() << endl;
    
    return 0;
}

