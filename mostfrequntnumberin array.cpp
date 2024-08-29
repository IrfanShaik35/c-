#include <iostream>
#include <map>

int main() {
    int size;
    std::cout << "Enter size of the array: ";
    std::cin >> size;

    int arr[size];
    std::cout << "Enter elements in the array: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Enter Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    std::cout << "Entered Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::map<int, int> freqMap;
    int maxFreq = 0, mostFrequent;
    for (int i = 0; i < size; i++) {
        freqMap[arr[i]]++;
        if (freqMap[arr[i]] > maxFreq) {
            maxFreq = freqMap[arr[i]];
            mostFrequent = arr[i];
        }
    }

    std::cout << "Most occurred number: " << mostFrequent << std::endl;

    return 0;
}
