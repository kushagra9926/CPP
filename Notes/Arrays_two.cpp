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

// Kadane's Algorithm (DP)
void maxSubarraySum3(int *arr, int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i = 0; i < n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << "maximum subarray sum = " << maxSum << endl;
}

// Buy & Sell Stocks      
void maxProfit(int *prices, int n){
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    for(int i = 1; i < n; i++){
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
        // cout << bestBuy[i] << ",";
    }
    int maxProfit = 0;
    for(int i = 0; i < n; i++){
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout << "max Profit = " << maxProfit << endl;
}   

// Trapping Rainwater  

int trap(int *heights, int n){
    int leftMax[20000], rightMax[20000];
    /*
    in Math ==> -∞ - 4 ==> -ve value
    in C++ ==> INT_MIN - 4 ==> +ve value (due to bit calculation)

    so 
    leftMax[0] = heights[0];
    rightMax[0] = heights[n - 1]; 
    */
    // leftMax[0] = INT_MIN;
    // rightMax[n - 1] = INT_MIN;

    leftMax[0] = heights[0];
    rightMax[0] = heights[n - 1];

    // cout << leftMax[0] << " "; 
    for(int i = 1; i < n; i++){
        leftMax[i] = max(leftMax[i - 1], heights[i - 1]);
        // cout << leftMax[i] << " "; 
    }
    for(int i = n - 2; i >= 0; i--){
        rightMax[i] = max(rightMax[i + 1], heights[i + 1]);
        // cout << rightMax[i] << ",";
    }
    // cout << rightMax[n - 1] << ",";
    int waterTrapped = 0;
    for(int i = 0; i < n; i++){
        int currWater = min(leftMax[i], rightMax[i]) - heights[i];
        if(currWater > 0){
            waterTrapped += currWater;
        }
    }
    cout << "water trapped = " << waterTrapped << endl;
    return waterTrapped;
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

    // Brute Force Approach - 1   -->  Time complexity O(n^3)
        int arr2[] = {2, -3, 6, -5, 4, 2};
        int n2 = sizeof(arr2) / sizeof(int);
        maxSubarraySum1(arr2, n2);

    // Brute Force Approach - 2   -->  Time complexity O(n^2)   
        int arr3[] = {2, -3, 6, -5, 4, 2};
        int n3 = sizeof(arr3) / sizeof(int);
        maxSubarraySum1(arr3, n3);

    // Kadane's Algorithm (DP)   --> Time complexity O(n) 
        int arr4[] = {2, -3, 6, -5, 4, 2};
        int n4 = sizeof(arr4) / sizeof(int);
        maxSubarraySum3(arr4, n4);

// Buy & Sell Stocks   --->  Time complexity O(n)
    /* 
    prices = {7, 1, 5, 3, 6, 4};
    if we are selling on 
    sell = {7, 1, 5, 3, 6, 4};
    so best buy is
    best buy = {+∞, 7, 1, 1, 1, 1};

    profit = {-∞, -6, 4, 2, 5, 3};

    Ans is 5
    */
    int prices[6] = {7, 1, 5, 3, 6, 4};
    int n5 = sizeof(prices) / sizeof(int);

    maxProfit(prices, n5);

// Trapping Rainwater  --->  Time complextiy O(n)
    /*
    height = [4, 2, 0, 6, 3, 2, 5]
    Find amount of water trapped.

                ███
                ███
                ███
    ███         ███         ███
    ███         ███         ███
    ███         ███ ███     ███
    ███ ███     ███ ███ ███ ███
    ███ ███     ███ ███ ███ ███
────────────────────────────────────────────
     4   2   0   6   3   2   5
    
    * bar needs a valley to trap water i.e. larger the bars on both sides.
    * min of (left largest & right largest) bars gives trapped water.
    
    left max = [-∞, 4, 4, 4, 6, 6, 6]
    right max = [6, 6, 6, 5, 5, 5, -∞]
    */
   int heights[7] = {4, 2, 0, 6, 3, 2, 5};
   int n6 = sizeof(heights) / sizeof(int);
   trap(heights, n6); 
    return 0;
}