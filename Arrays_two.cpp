#include <iostream>
#include <climits>
using namespace std;

// Print Subarrays
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
// Brute Force Approach - 1
void maxSubarraySum1(int *arr, int n){
    int maxSum = INT_MIN;
    for(int start = 0; start < n; start++){
        for(int end = start; end < n ; end++){
            int curSum = 0;
            for(int i = start; i <= end; i++){
                curSum += arr[i];
            }
            cout << curSum << ",";
            maxSum = max(maxSum, curSum);
        }
        cout << "\n";
    }

    cout << "maximum subarray sum = " << maxSum << endl;
}

// Brute Force Approach - 2
void maxSubarraySum2(int *arr, int n){
    int maxSum = INT_MIN;
    for(int start = 0; start < n; start++){     // start = 2
            int currSum = 0;
        for(int end = start; end < n ; end++){  // end = 2, 3, 4, 5
            currSum += arr[end];
            cout << currSum << ",";
            maxSum = max(maxSum, currSum);
        }
        cout << "\n";
    }

    cout << "maximum subarray sum = " << maxSum << endl;
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
    
    /*
    subsequence (non-continuous): 
        1 3 5 // this is subsquence but not subarray. Also in subsequence if one comes before in array it should come before in subsequence also.
    */
    
// Print Subarrays
    int arr1[5] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(int);
    
    printSubarrays(arr1, n1);

// Max Subarray Sum

    // Brute Force Approach - 1
        int arr2[] = {2, -3, 6, -5, 4, 2};
        int n2 = sizeof(arr2) / sizeof(int);
        maxSubarraySum1(arr2, n2);

    // Brute Force Approach - 2
        int arr3[] = {2, -3, 6, -5, 4, 2};
        int n3 = sizeof(arr3) / sizeof(int);
        maxSubarraySum1(arr3, n3);
    return 0;
}