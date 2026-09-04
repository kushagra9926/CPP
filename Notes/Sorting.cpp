/*
// Selection Sorting:
Selection sort is a simple comparison-based sorting algorithm. Its main idea is:

Repeatedly find the smallest element in the unsorted part of the array and place it at the beginning of that part.

Example

Suppose we want to sort:

[64, 25, 12, 22, 11]

Pass 1: Search the entire array for the smallest value. The minimum is 11. Swap it with the first element (64).
[11, 25, 12, 22, 64]
Now 11 is in its final position.

Pass 2: Ignore 11 and search [25, 12, 22, 64]. The minimum is 12. Swap 12 with 25.
[11, 12, 25, 22, 64]

Pass 3: Search [25, 22, 64]. The minimum is 22. Swap it with 25.
[11, 12, 22, 25, 64]

Pass 4: Search [25, 64]. The minimum is already 25, so no effective swap is needed.
[11, 12, 22, 25, 64]
The array is now sorted.

Time Complexity: O(n^2)

// Bubble Sorting:
Bubble Sort is one of the simplest sorting algorithms. It works by repeatedly comparing two adjacent elements and swapping them if they are in the wrong order.

2. Example

Let's sort:
[5, 3, 8, 4, 2]

Pass 1
Start:
5  3  8  4  2

Compare 5 and 3:
5 > 3 → swap
3  5  8  4  2

Compare 5 and 8:
5 < 8 → no swap
3  5  8  4  2

Compare 8 and 4:
8 > 4 → swap
3  5  4  8  2

Compare 8 and 2:
8 > 2 → swap
3  5  4  2  8

After Pass 1:
3  5  4  2  8
8 is now in its correct position.

Pass 2
We don't need to check 8 anymore.

Compare 3 and 5:
3 < 5 → no swap

Compare 5 and 4:
5 > 4 → swap
3  4  5  2  8

Compare 5 and 2:
5 > 2 → swap
3  4  2  5  8

After Pass 2:
3  4  2  5  8

Pass 3

Compare 3 and 4:
3 < 4 → no swap

Compare 4 and 2:
4 > 2 → swap
3  2  4  5  8

Compare 4 and 5:
4 < 5 → no swap

After Pass 3:
3  2  4  5  8

Pass 4

Compare 3 and 2:
3 > 2 → swap
2  3  4  5  8

Compare 3 and 4:
3 < 4 → no swap

Compare 4 and 5:
4 < 5 → no swap

Final:
2  3  4  5  8

Time Complexity: O(n^2) ----> Worst & Average Complexity
                 O(n)   ----> Best Complexity

// Insetion Sort: 
It is a simple sorting algorithm that builds the sorted array one element at a time.
Example

Array:
[5, 3, 4, 1, 2]

Pass 1: Take 3 → insert before 5
[3, 5, 4, 1, 2]

Pass 2: Take 4 → insert between 3 and 5
[3, 4, 5, 1, 2]

Pass 3: Take 1 → insert at beginning
[1, 3, 4, 5, 2]

Pass 4: Take 2 → insert between 1 and 3
[1, 2, 3, 4, 5]

So the final sorted array is:
[1, 2, 3, 4, 5]


*/
#include <bits/stdc++.h>
using namespace std;

// Selection Sort     
void selection_sort(int n , int arr[]){
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(arr[min] > arr[j]) min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min]; 
        arr[min] = temp; 
    }
}
// Bubble Sort
void bubble_sort(int n, int arr[]){
    for(int i = n-1; i > 0; i--){
        for(int j = 0; j <= i; j++){
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Insertion Sort
void insertion_sort(int n, int arr[]){
    for(int i = 0; i < n; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    selection_sort(n, arr);
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    } cout << endl;
    bubble_sort(n, arr);
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    } cout << endl;
    insertion_sort(n, arr);
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    } cout << endl;
    return 0;
}