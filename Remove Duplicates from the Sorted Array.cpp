#include<iostream>
#include<set>
using namespace std;

int main() {
    int arr[] = {15, 14, 25, 14, 32, 14, 31};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    set<int> s(arr, arr + n);
    cout << "Sorted Array = {";
    for(auto it = s.begin(); it != s.end(); ++it) {
        cout << *it;
        if (next(it) != s.end())
            cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}

