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

int binarySearch(int *arr, int n, int key){
    int start = 0;
    int end = n - 1;
    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == key){
            return mid;    // key found
        }else if(arr[mid] < key){   // 2nd half
            start = mid + 1;
        }else {          // 1st half
            end = mid - 1;
        }
    }
    return -1;
}

void printArray(int *ptr, int n){
    for(int i = 0; i < n; i++){
        cout << *(ptr + i) << "\n";
    }
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
    // Time Complextiy: O(n)  
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

    printArr(arr6, n6);

    // without extra space (2 Pointer Approach)
    
    int arr7[] = {5, 4, 3, 9, 2};
    int n7 = sizeof(arr7) / sizeof(int);

    int start1 = 0, end1 = n7 - 1;

    while(start1  < end1){
        int temp = arr7[start1];
        arr7[start1] = arr7[end1];
        arr7[end1] = temp;

        // swap(arr7[start], arr7[end]);     // In built function of C++ to swap numbers.
        start1++;
        end1--;
    }
    printArr(arr7, n7);

// Binary Search 
    // prerequisite: sorted array

    // Time complexity: O(log n)
    /*
    Pseudocode
        int st = 0, end = n - 1;
        while(st <= end){
            mid = (st + end) / 2;
            if(arr[mid] == key){
                return mid;
            }else if(arr[mid] < key){     // 2nd half
                st = mid + 1;
            }else{                        // 1st half
                end = mid - 1;
            }
        }
    */
    int arr8[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n8 = sizeof(arr8) / sizeof(int);
    
    cout << binarySearch(arr8, n8, 12) << endl;    // Output ---> 5
    cout << binarySearch(arr8, n8, 10) << endl;    // Output ---> 4
    cout << binarySearch(arr8, n8, 15) << endl;    // Output ---> -1

// Array Pointer: 
    // Array Pointer acts like a constant pointer.
    int x = 10;
    int *ptr = &x;
    
    int y = 20;
    ptr = &y;
    cout << *ptr << "\n";
    // But similar to this is not possible in array because it has a constant pointer.
    int arr[5];
    cout << arr << "\n";
    int y1 = 25;
    // arr = &y;   // Not possible.

// Pointer Arithmetic 
    // 1. Increment & Decrement Operators
        /*
        ptr++ or ++ptr    // ++ increment in pointer means to add one Data type to a pointer address.
        ptr-- or --ptr    // -- decrement in pointer means to substract one Data type to a pointer address. 
        */
       int a1 = 10;
       int *a1ptr = &a1;
       cout << a1ptr << "\n";  // 0x61fdd0
       a1ptr++;  // 1 int++ 
       cout << a1ptr << "\n";  // 0x61fdd4
       a1ptr--;
       cout << a1ptr << "\n";  // 0x61fdd0

    // 2. Addition & Substraction of Constants
        /*
        ptr + 3    // [3 * int] = [3 * 4] = 12
        ptr - 3
        */
        int a2 = 10;
        int *a2ptr = &a2;
        cout << a2ptr << "\n"; // 0x61fdcc
        a2ptr = a2ptr + 3;
        cout << a2ptr << "\n"; // 0x61fdd8
        a2ptr = a2ptr - 3;
        cout << a2ptr << "\n"; // 0x61fdcc

        // In context of array:
        int arr9[] = {1, 2, 3, 4, 5};
        int n9 = sizeof(arr9) / sizeof(int);
        printArray(arr9, n9);

    // 3. Addition & Substraction of Pointers
        /*
        ptr1 + ptr2     // Invalid operation
        ptr1 - ptr2     // both should be of same type
        */
       int a = 5;
       int *ptr1 = &a;
       int *ptr2 = ptr1 + 3;

       cout << ptr2 << "\n";  // 0x61fdb4
       cout << ptr1 << "\n";  // 0x61fda8

       cout << ptr2 - ptr1 << "\n";  // 3
    return 0;
}