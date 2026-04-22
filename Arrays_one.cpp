#include <iostream>
using namespace std;


void func1(int arr[]){
    arr[0] = 1000;
}

void func2(int *ptr){
    ptr[0] = 1000;
}

void printArr(int nums[]){
    // cout << sizeof(nums) << endl;   // 4 = size of int pointer not the array size which is equal to 20.
    int n = sizeof(nums) / sizeof(int); 

    for(int i = 0; i < n; i++){
        cout << nums[i] << ",";
    }
    cout << endl;
}

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
    int n1;
    cout << "Enter length of array: " << "\n";
    cin >> n1;

    int arr1[n1];
    
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }

    for(int i = 0; i < n1; i++){
        cout << arr1[i] << " ";  // i = 0, 1, 2, 3, 4     // Output --> 7 5 2 1 3
    }
    cout << "\n";

// Find Largest and Smallest in Array:
    int arr2[] = {5, 4, 3, 9, 12};
    int n2 = sizeof(arr2) / sizeof(int);

    int max = arr2[0];
    int min = arr2[0];
    for(int i = 0; i < n2; i++){
        if(arr2[i] > max){
            max = arr2[i];
            cout << "assigning val " << arr2[i] << " to max \n";
        }
        if(arr2[i] < min){
            min = arr2[i];
            cout << "assigning val " << arr2[i] << " to min \n";
        }
    }
    cout << "Largest value in Array is " << max << "\n";
    cout << "Smallest value in Array is " << min << "\n";

// Arrays are passed by reference: 
    // In C++ array name ---> pointer.
        /*                              ____                
        void printArr(int arr[]) {...}      |
                                            |---> same 
        void printArr(int *arr) {...}   ____|
        */

    int arr3[] = {1, 2, 3, 4, 5};
    int n3 = sizeof(arr3) / sizeof(int);

    cout << arr3 << endl;  // Output: 0x61feb0
    cout << *arr3 << endl; // Output: 1
    cout << *(arr3 + 1) << endl; // Output: 2
    cout << *(arr3 + 2) << endl; // Output: 3 

    func1(arr3);   // Passing array name is eq. to passing the pointer
    cout << arr3[0] << "\n"; 
    func2(arr3);   
    cout << arr3[0] << "\n";  

    printArr(arr3);
    return 0;
}