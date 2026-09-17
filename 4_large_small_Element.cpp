// WAP to print the largest of arry.
#include <iostream>
using namespace std;
int main() {

    int arr[5] = {23, 43, 3, 49, 1};
    int n = sizeof(arr) / sizeof(int);


    int max = arr[0];
    int min = arr[0];
    

    for(int i = 0; i < n; i++) {
        
        if (arr[i] > max) {  //when the array is having greater value then the max 
            max = arr[i];  //Then that greater value get assigned to max.
        }
        if (arr[i] < min) {  // when the min is having greater value then array
            min = arr[i];   //The smaller value will assigned to the min variable.   
        }
    }

    cout << "Array's largest element is : " << max << "\n \n";
    cout << "Array's smallest element is : " << min << "\n \n";
    
    return 0;
}
