#include <iostream>
using namespace std;

void refer( int arr[]) { //Here the function taking parameter of an array
    arr[0] = 121;        // all the changes here will affect the main array elements
    arr[1] = 311;
}

// using a pointer to get access to all elements of array;
void func( int *ptr) {
    ptr[4] = 991;
}

void printArray( int arr[] , int n ) {
   
    for (int i = 0; i < n; i++ ) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {

    int arr[] = { 1, 2, 4, 6, 8};
    int n = sizeof(arr) / sizeof(int);

    refer(arr);  //calling the function and providing the array name as pointer
    func(arr);  // calling the other function with pointer.
    printArray(arr , n);
    // for (int i = 0; i < n; i++ ) {
    //     cout << arr[i] << " ";
    // }

    
    return 0;
}