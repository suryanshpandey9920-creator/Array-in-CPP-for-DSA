// WAP to insert elements from  user;
#include <iostream>
using namespace std;

int main() {

    int n ; 
    cout << "enter the size of array : ";
    cin >> n; 

    // using loops to enter elements of array, till I = n-1

    int arr[n]; 
    for (int i = 0; i<n ; i++) {
        cin >> arr[i] ; 
    }

    cout << "Array is : "  ; 

    // using array to print the elements.
    for (int i = 0 ; i<n ; i++) {
        cout << arr[i] << " ";
    }
    return 0;

}