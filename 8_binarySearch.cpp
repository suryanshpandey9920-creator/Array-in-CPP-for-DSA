// Search Target element using the binary search.
#include <iostream>
using namespace std;

// Binary search function
int binarySearch (int *arr, int n , int key) {
    int start = 0, end = n - 1;  //declared the start and end of index
    
    // cout << midpoint ;
    
    while (start <= end) {
        int midpoint = (start + end ) / 2 ;
        // 1st Half 
        if (arr[midpoint] == key) {
            cout << "Target found at index : ";
            cout <<  midpoint << "\n";
            return 1;
        } 
        else if (arr[midpoint] < key ) {
            start = midpoint+1;
        } else  {
            end = midpoint-1; 
        }
       
    }
    
    return -1 ;
}
int main() {

    int arr[] = {2, 3, 4, 5, 7, 6,11};
    int n = sizeof(arr) / sizeof(int);
    int target ;

    // printing array 
    cout << "array is : " ;

    for (int i = 0; i < n ; i++) {
        cout << arr[i] << " ";
    }


    // Taking the target element as input 
    cout << "\nenter the target element : " ;
    cin >> target;

    // calling binary search and providing all values 
    binarySearch (arr , n  , target);
    return 0;
}