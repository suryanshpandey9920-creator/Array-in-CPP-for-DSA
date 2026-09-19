// Reversing thr original array with extra space.
#include <iostream>
using namespace std;

// Function to print array 
void printArray ( int *array , int n) {

    for (int i = 0; i< n ; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[] = { 2, 4, 6, 8, 10, 12 , 14, 16, 18, 20};
    int n = sizeof(arr) /sizeof(int);

    // Printing the Original Array
    cout << "Original array is : ";
    printArray (arr , n);

    // Copying the original array from backwords in Copy array.
    int copy[n];
    for (int i = 0; i<n ;i++) {
        int j = n-i-1;         // here j is having the last element value of array
        copy[i] = arr[j];      // array copy[] is is storing the last element due to [j]
    }  

    // Copying the array all elements to the original array element by element.
    for (int i =0; i< n ;i++) {
        arr[i] = copy[i];
    }

    // Printing the Reversed Array
    cout << "Reversed array is : ";
    printArray (arr , n);
    
    return 0;
}