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

int main(){
    int n;
    cin >> n;
    int arr[n];
    string s = "madam";
    for(int i = 0; i < n; i++) cin >> arr[i];
    sum1(n);
    cout << sum2(n) << endl;
    cout << factorial(n) << endl;
    cout << p(0, s) << endl;
    f(0, arr, n);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}