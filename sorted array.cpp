#include <iostream>

int findSmallestMissing(int arr[], int size) {
    int expected = 0; 

    int i = 0; 
    while (i < size) {
        if (arr[i] > expected) {
            
            return expected;
        } else if (arr[i] == expected) {
            
            ++expected;
        }
        ++i;
    }
    

    return expected;
}

int main() {
    int arr[] = {0, 1, 2, 3, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int missing = findSmallestMissing(arr, size);

    std::cout << "The smallest missing element is " << missing << std::endl;

    return 0;
}

