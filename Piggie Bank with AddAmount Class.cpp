#include <iostream>
using namespace std;

class AddAmount {
public:
    int amount;

    AddAmount(int amount_to_add = 0) {
        amount = 50 + amount_to_add;
    }

    void display_amount() {
        cout << amount << " ";
    }
};

// Sample Usage
int main() {
    AddAmount piggy_bank1;
    AddAmount piggy_bank2(7);

    piggy_bank1.display_amount();  // Output: 50
    piggy_bank2.display_amount();  // Output: 57

    return 0;
}

