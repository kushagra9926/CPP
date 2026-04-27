#include <iostream>
using namespace std;

void printSubarrays(int *arr, int n){      // Time Complexity: O(n^3)
    for(int start = 0; start < n; start++){
        for(int end = start; end < n ; end++){
            // cout << "(" << start << "," << end << ")" << " ";    // (0,0) (0,1) (0,2) (0,3) (0,4) (1,1) (1,2) (1,3) (1,4) (2,2) (2,3) (2,4) (3,3) (3,4) (4,4)
            for(int i = start; i <= end; i++){
                cout << arr[i];
            }
            cout << ", ";
        }
        cout << "\n";
    }
}

void maxSubarraySum(int *arr, int n){
    for(int start = 0; start < n; start++){
        for(int end = start; end < n ; end++){
            int curSum = 0;
            for(int i = start; i <= end; i++){
                curSum += arr[i];
            }
            cout << curSum << ",";
        }
        cout << "\n";
    }
}
int main(){

// Print Subarrays: Subarray is continuous part of an array.
    /*
    arr[] = {1, 2, 3, 4, 5}

    subarrays are: 
        1, 12, 123, 1234, 12345
        2, 23, 234, 2345
        3, 34, 345
        4, 45
        5   

    // For a n size array number of subarrays are: (n * (n + 1)) / 2 .
    
    Let's see by index
    start           end
      0        0, 1, 2, 3, 4
      1         1, 2, 3, 4
      2          2, 3, 4
      3           3, 4
      4            4
    */
    
    int arr1[5] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(int);
    
    printSubarrays(arr1, n1);
    
    /*
    subsequence (non-continuous): 
        1 3 5 // this is subsquence but not subarray. Also in subsequence if one comes before in array it should come before in subsequence also.
    */

// Max Subarray Sum
    int arr2[] = {2, -3, 6, -5, 4, 2};
    int n2 = sizeof(arr2) / sizeof(int);
    maxSubarraySum(arr2, n2);

    return 0;
}