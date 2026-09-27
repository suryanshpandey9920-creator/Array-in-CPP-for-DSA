#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {

    int start = 0;
    int end = n-1 ;

    while(start <= end ) {
        // Creating midpoint
        int mid = (start + end) / 2;

        // 1st half
        if (key == arr[mid]) {
            cout << "Target found at index : ";
            return mid ;

            // 2nd Half if Array's middle element is greater than Key.
        } else if (arr[mid] > key) {

            end = mid - 1;       // Here End will Update to Mid - 1
            
            // 3rd Half if Array's middle element is smaller than Key
        } else {
            
            start = mid + 1;    // Here Start will Updated to Mid + 1
        }
    }
    return -1;
}
int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof( arr) / sizeof(int);


    //    Printing Array
    cout << "Array is : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } 
    cout << "\n";
    cout << "\n";

    int target ;
    cout << "enter the target value : ";
    cin >> target;


    // Calling BInary Search Function.
    cout << binarySearch( arr, n, target );

    return 0;
}