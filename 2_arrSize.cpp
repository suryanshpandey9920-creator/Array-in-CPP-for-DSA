#include <iostream>
using namespace std;

int main() {
    int arr [3] = { 99, 23, 65}; // 0 to 2
    cout << sizeof(arr) << "\n";
    
    
    int length  = sizeof(arr) / sizeof(int);
    cout << "The length of array is  : "  << length  << endl;
    cout << arr[3];
    return 0;
}