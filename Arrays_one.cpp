#include <iostream>
using namespace std;


void func1(int arr[]){
    arr[0] = 1000;
}

void func2(int *ptr){
    ptr[0] = 1000;
}

void printArr(int nums[], int n){
    // cout << sizeof(nums) << endl;   // 4 = size of int pointer not the array size which is equal to 20. So thats why we take one more parameter in our function which tells the size of the array.
    // int n = sizeof(nums) / sizeof(int);  // This will give 4 / 4 = 1 which is not the size of array.

    for(int i = 0; i < n; i++){
        cout << nums[i] << ",";
    }
    cout << endl;
}

int linearSearch(int *arr, int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }

    return -1;
}

void printArr6(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << ",";
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
    cout << "Largest value in Array is " << max << "\n";  // Output ---> 12
    cout << "Smallest value in Array is " << min << "\n"; // Output ---> 3

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
    cout << arr3[0] << "\n";   // Output ---> 1000
    func2(arr3);   
    cout << arr3[0] << "\n";   // Output ---> 1000

    int arr4[] = {1, 2, 3, 4, 5};
    int n4 = sizeof(arr4) / sizeof(int);
    printArr(arr4 , n4);    // Output ---> 1,2,3,4,5,

// Linear Search
    int arr5[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n5 = sizeof(arr5) / sizeof(int);

    cout << linearSearch(arr5, n5, 10) << endl;   // Output ---> 4
    cout << linearSearch(arr5, n5, 20) << endl;   // Output ---> -1 

// Reverse an array 
    // with extra space
    
    int arr6[] = {5, 4, 3, 9, 2};
    int n6 = sizeof(arr6) / sizeof(int);

    int copyArr6[n6];
    for(int i = 0; i < n6; i++){
        int j = n6 - i - 1;
        copyArr6[i] = arr6[j];
    }
    for(int i = 0; i < n6; i++){
        arr6[i] = copyArr6[i];
    }

    printArr6(arr6, n6);

    // without extra space (2 Pointer Approach)
    return 0;
}