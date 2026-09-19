// Reverse an array without usinge extra space
#include <iostream>
using namespace std;

int main() {
    // Creating a array
    int array[] = { 2, 7, 6, 8, 10};
    int n = sizeof(array) / sizeof(int);

    // Printing the original array
    cout << "Original Array : ";
    for (int i =0 ; i<n ; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int start = 0; // start will have the memory address of 0th index
    int end = n-1; // end is having last index

    while (start < end) {

        // Swapping 
        int temp = array[start];       // Temporary is having value if array [0]
        array[start] = array[end];     // Start is having index of array [n-1]
        array[end] = temp;     // The end is having the index of Temp[0] 

        // Increment in start 0 -> 1 -> 2 -> 3
        start++;
        // Decremet is end  5 -> 4 -> 3 -> 2 -> 1
        end--;
    }

    // Printing reverse array 
    cout << "Reversed Array : ";
    for (int i =0 ; i<n ; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}