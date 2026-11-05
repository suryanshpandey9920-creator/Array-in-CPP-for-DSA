#include <iostream>
using namespace std;
int main() {

    int arr[] = {12, 3, 56, 67, 8};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0 ; i < n ; i ++) {
        cout << *arr << " ";    // Printing the De-referencing the array name 
        *arr = *arr+1;          // Adding 1 in the memory address, which means 
        // Moving 1 array forward 
    }
    return 0;
}