// Hashing: It is a technique used in Data Structures to store and retrieve data quickly.
/*
Inside main when data type is int array can only go till 10^6 and outside main array can be defined till 10^7.

When data type is Boolean the array inside main can do till 10^7 and outside main array can be defined till 10^8.

When Map is used: 
    if arr = {1, 2, 3, 1, 3, 2, 12}

    here we will use loop and then
    we know that when we define map without value it stores the value as zero for that key.
    so we stores instead of zero to 1.
    then is that key repeat than its value get increases in map

    mpp[arr[i]]++

    Time Complexity: 
    In all three cases it is 
    O(logN)

When Unordered_map is used:

    Time complexity: 
    in average and best case = O(1)

    but in worst case = O(N)  Here worst case happen due to internal collisons

## Most of the time use unordered_map but if it gives time limit exceeded then switch to map.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    // If we have to find the count of the element in an array.

    // // Number Hashing
    // int n1;
    // cin >> n1;
    // int arr[n1];
    // for(int i = 0; i < n1; i++){
    //     cin >> arr[i];
    // }

    // // precompute
    // int hash1[13] = {0};
    // for(int i = 0; i < n1; i++){
    //     hash1[arr[i]] += 1;
    // }

    // int q1;
    // cin >> q1;
    // while(q1--){
    //     int num;
    //     cin >> num;
    //     // fetch
    //     cout << hash1[num] << endl;
    // }

    // Character Hashing
    // string s1;
    // cin >> s1;
    
    // // pre compute
    // int hash2[26] = {0};
    // for(int i = 0; i < s1.size(); i++){
    //     hash2[s1[i] - 'a']++;
    // }

    // int q2;
    // cin >> q2;
    // while(q2--){
    //     char c;
    //     cin >> c;
    //     // fetch
    //     cout  << hash2[c - 'a']<< endl;
    // }

    // // In the previous example only small alphabets are asked, but if all characters are to be used then
    // string s2;
    // cin >> s2;
    
    // // pre compute
    // int hash3[256] = {0};
    // for(int i = 0; i < s2.size(); i++){
    //     hash3[s2[i]]++;
    // }

    // int q3;
    // cin >> q3;
    // while(q3--){
    //     char c;
    //     cin >> c;
    //     // fetch
    //     cout  << hash3[c]<< endl;
    // }

    // Using Map 
    // int n2;
    // cin >> n2;
    // int arr[n2];

    // for(int i = 0; i < n2; i++){
    //     cin >> arr[i];
    // }

    // // pre compute
    // map<int, int> mpp2;
    // for(int i = 0; i < n2; i++){
    //     mpp[arr[i]]++;
    // }
    
    // // // iterate in the map
    // // for(auto it : mpp2){
    // //     cout << it.first << "->" << it.second << endl;
    // // }

    // int q3;
    // cin >> q3;
    // while(q3--){
    //     int num;
    //     cin >> num;
    //     // fetch
    //     cout << mpp2[num]<< endl;
    // }

    // Unordered Map
    int n3;
    cin >> n3;
    int arr[n3];

    for(int i = 0; i < n3; i++){
        cin >> arr[i];
    }

    // pre compute
    unordered_map<int, int> mpp2;
    for(int i = 0; i < n3; i++){
        mpp2[arr[i]]++;
    }
    
    // // iterate in the map
    // for(auto it : mpp2){
    //     cout << it.first << "->" << it.second << endl;
    // }

    int q4;
    cin >> q4;
    while(q4--){
        int num;
        cin >> num;
        // fetch
        cout << mpp2[num]<< endl;
    }
    return 0;
}
