#include <iostream>
using namespace std;

int main() {

    // Declaring the array
    int marks[5] = {34, 45, 46, 78, 99};
    int arr[] = {12, 23, 53};
    cout << "Traversal of arrya from index 0 to 4, using loop\n \n";
    for (int i = 0 ; i < 5 ; i++) {
        cout << marks[i] << "\n";

    }
    cout << endl;
    cout << sizeof(arr) <<"\n";
    cout << arr[4];
    return 0;
    
}