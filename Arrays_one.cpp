#include <iostream>
using namespace std;

int main(){
// Arrays: Linear collection of same type of elements that are stored together in contiguous memory spaces.

// Creating an Array: 
    /*
    int marks[50];
    int marks[50] = {1, 2, 3};
    int marks[] = {1, 2, 3};

    length of array ---> sizeof(marks) / sizeof(int). 
    Memory is statically allocated (at compile time).
    */

    int arr1[5] = {7, 5, 2, 1, 3};
    int len1 = sizeof(arr1) / sizeof(int);

    for(int idx = 0; idx <= len1 - 1; idx++){
        cout << arr1[idx] << "\n";  // idx = 0, 1, 2, 3, 4
    }
    return 0;
}