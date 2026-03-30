#include <iostream>
using namespace std;

int main(){

// Nested Loop: Loop inside a loop.

// Question: Print  1 1 1 1 using loop.
//                  2 2 2 2
//                  3 3 3 3
//                  4 4 4 4

    // Solution: 
        // 1) Outer loop: no of Rows
        // 2) Inner loop: no of Columns/ each rows
        // 3) Work in inner loop (each row) i print
        
        int n1 = 4;
        // outer loop
        for(int i = 1; i <= n1; i++){
            // inner loop
            for(int j = 1; j <= n1; j++){
                // work
                cout << i << " ";
            }
            cout << endl;
        }
// Question: Print Star pattern  *       using loop.
//                               * *
//                               * * *
//                               * * * *

    // Solution: 
        // 1) outer loop --> Rows (i) , n times (1 to n)
        // 2) inner loop --> columns i times (1 to i)
        // 3) print *
        
        int n2 = 8;
        for(int i = 1; i <= n2 ; i++){
            for(int j = 1; j <= i; j ++){
                cout << "*" << " ";
            }
            cout << endl;
        }
    return 0;
}