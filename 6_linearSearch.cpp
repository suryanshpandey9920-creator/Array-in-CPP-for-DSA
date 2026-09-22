#include <iostream>
using namespace std;

int linearSearch (int arr[], int n, int key) {
    cout<< "Target element is : " << key << "\n";
    
     for (int i = 0; i < n; i++) {
        if (key == arr[i]) {
            
            cout << "Target element found : " << arr[i] << "\nat index : " ;  
            return i;
        } 
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(int);

     cout << "array is : " ;

    for (int i = 0; i < n ; i++) {
        cout << arr[i] << " ";
    }

    // Declaring the target element.
    int key ;
    cout << "\nenter the key : ";
    cin >> key;
    
    // Passing all the values array, size of array, and the Target element.
    cout << linearSearch (arr , n , key);
    return 0;
}