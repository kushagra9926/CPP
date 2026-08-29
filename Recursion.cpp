#include <bits/stdc++.h>
using namespace std; 
// Sum of N natural numbers
int total = 0;
int i = 1;
void sum1(int n){
    if (i > n) {
        cout << total << endl; 
        return ;
    }
    total = total + i;
    i++;
    sum1(n);
}

// Or
int sum2(int n){
    if(n == 0) return 0;
    return n + sum2(n-1);
}

// Factorial     

int factorial(int n){
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
// TC: O(N) & SC: O(N)

// Reverse a array

void f(int i, int arr[], int n){
    if (i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    f(i+1, arr, n);
}

// Check is the string is palindrome
bool p(int i, string &s) {
    if (i >= s.size() / 2) return true;
    if (s[i] != s[s.size() - i - 1]) return false;
    p(i + 1, s);
}

// Multiple Recursion Calls

// 1) Fibbonachi

int fib(int n){
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
} 
/*
                         fib(5)
                       /        \
                  fib(4)        fib(3)
                 /    \         /    \
            fib(3)   fib(2)  fib(2)  fib(1)
            /   \     /  \    /  \
        fib(2) fib(1) fib(1) fib(0) fib(1) fib(0)
        /   \
    fib(1) fib(0)

T(n) = O(2ⁿ) exponectial
*/

// Print Subsequence (It is a sequence obtained by deleting some elements from a string/array without changing the order of the remaining elements.)
/*
                                      []
                                   /     \
                                 /         \      
                               /             \
                            [3]                 []
                         /      \              /    \
                     [3,1]      [3]          [1]       []
                     /   \      /   \       /   \     /   \
                [3,1,2] [3,1]  [3,2] [3]  [1,2] [1]  [2]  []


                         []
                       /    \
                    take    skip
                     3        3
                    /          \
                 take/skip   take/skip
                    1            1
                   /              \
                take/skip       take/skip
                   2                2

    Time Complexity: O(n × 2ⁿ)
    Space Complexity: O(n)
 */


 void PrintF(int ind, vector<int> &ds, int arr[], int n){
    if (ind == n){
        for(auto it : ds){
            cout << it << " ";
        }
    if (ds.size() == 0){
        cout << "{}";
    }
        cout << endl;
        return;
    }
    // take or pick the particular index into the subsequence
    ds.push_back(arr[ind]);
    PrintF(ind+1, ds, arr, n);
    ds.pop_back();

    // not pick, or not take condition, this element is not added to your subsequence
    PrintF(ind+1, ds, arr, n);

 }

 // Printing Subsequences whose sum is K
void PrintS(int ind, vector <int> &ds, int s, int sum, int arr[], int n){
    if(ind == n){
        if(s == sum){
            for(auto it: ds){
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    ds.push_back(arr[ind]);
    s += arr[ind];
    PrintS(ind+1, ds, s, sum, arr, n);
    ds.pop_back();
    s -= arr[ind];
    PrintS(ind+1, ds, s, sum, arr, n);
}
// If to print only one answer.
bool PrintS1(int ind, vector <int> &ds, int s, int sum, int arr[], int n){
    if(ind == n){
        if(s == sum){
            for(auto it: ds){
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        else return false;
    }

    ds.push_back(arr[ind]);
    s += arr[ind];
    if(PrintS1(ind+1, ds, s, sum, arr, n) == true) {
        return true;
    }
    ds.pop_back();
    s -= arr[ind];
    if(PrintS1(ind+1, ds, s, sum, arr, n) == true){
        return true;
    }
    return false;
}

// If to print the count whose sum is 2
int PrintS2(int ind, int s, int sum, int arr[], int n){
    if(ind == n){
        //condition satisfied 
        if(s == sum){
            return 1;
        }
        //condition not satisfied
        else return 0;
    }

    s += arr[ind];
    int l = PrintS2(ind+1, s, sum, arr, n) ;
    s -= arr[ind];
    int r = PrintS2(ind+1, s, sum, arr, n);
    return l + r;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    string s = "madam";
    for(int i = 0; i < n; i++) cin >> arr[i];
    sum1(n);
    cout << fib(5) << endl;
    cout << sum2(n) << endl;
    cout << factorial(n) << endl;
    cout << p(0, s) << endl;
    f(0, arr, n);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;


    int arr1[] = {1, 2, 1};
    int n1 = 3;
    int sum = 2;
    vector<int> ds;
    PrintF(0, ds, arr1, n1);
    PrintS(0, ds, 0, sum, arr1, n1);
    PrintS1(0, ds, 0, sum, arr1, n1);
    cout << PrintS2(0, 0, sum, arr1, n1) << endl;; 
    return 0;
}