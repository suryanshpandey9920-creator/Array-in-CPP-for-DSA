// This is an explaination of Pointer's Ariethmatic
#include <iostream>
using namespace std;

int main() {
    cout << "========== Pointer Ariethmatic in CPP ==========\n\n\n";
    cout << "Increment & Decrement operator's in Pointer.\n\n";
    
    int a = 10;
    int *ptr = &a;
    cout << "Original memory address of A is : " << ptr << "\n\n";
    ptr++;  //Applying the increment operator 
    cout << "After applying the increment operator, the memory address is "<< ptr << "\n\n";
    ptr--;   //Applying the decrement operator 
    cout << "After applying the increment operator, the memory address is "<< ptr << "\n\n";

    return 0;
}