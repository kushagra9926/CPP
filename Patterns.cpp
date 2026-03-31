#include <iostream>
using namespace std;

int main(){

// Nested Loop: Loop inside a loop.

// Question: Print  1 1 1 1  using loop.
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

// Question: Print pattern  * * * *  using loop
//                          * * *
//                          * *
//                          * 

    // Solution: 
        int n3 = 8;
        for(int i = 1; i <= n3; i++){
            for(int j = n3; j >= i; j--){
                cout << "*" << " ";
            }
            cout << endl;
        }

// Print Half Pyramid pattern  1        
//                             1 2
//                             1 2 3
//                             1 2 3 4

    // Solution: 
        int n4 = 8;
        for(int i = 1; i <= n4; i++){
            for(int j = 1; j <= i; j++){
                cout << j << " ";
            }
            cout << endl;
        }
// Print Character Pyramid pattern  A
//                                  B C
//                                  D E F
//                                  G H I J

    // Solution: 
        int n5 = 4;
        char ch = 'A';
        for(int i = 1; i <= 4; i++){
            for(int j = 1; j <= i; j++){
                cout << ch << " ";
                ch++;
            }
            cout << endl;
        }
// Print Hollow Rectangle pattern  * * * * *
//                                 *       *
//                                 *       *
//                                 * * * * * 

    // Solution: 
        int n6 = 4;
        for(int i = 1; i <= n6; i++){
            cout << "*" << " ";
            for(int j = 1; j <= n6 - 1; j++){
                if(i == 1 || i == n6){
                    cout << "*" << " ";
                }else{
                    cout << " " << " ";
                }
            }
            cout << "*" << endl;
        }
// Print the pattern     *
//                     * *
//                   * * *
//                 * * * *

    // Solution: 
        int n7 = 8;
        for(int i = 1; i <= n7; i++){
            for(int j = 1; j <= n7; j++){
                if(j <= n7 - i){
                    cout << " " << " ";
                }else{
                    cout << "*" << " ";
                }
            }
            cout << endl;
        }
// Print Floyd's Triangle  1
//                         2 3
//                         4 5 6
//                         7 8 9 10
//                         11 12 13 14 15

//  Solution: 
        int n8 = 5;
        int num = 1;
        for(int i = 1; i <= n8; i++){
            for(int j = 1; j <= i; j++){
                cout << num << " ";
                num++; 
            }
            cout << endl;
        }
// Print Diamond pattern      *
//                          * * *
//                        * * * * *
//                      * * * * * * * 
//                      * * * * * * *
//                        * * * * *
//                          * * *
//                            *

    // Solution: 
        int n9 = 4;
        // Upper Pyramid
        for(int i = 1; i <= n9; i++){
            for(int j = 1; j <= n9 - i; j++){
                cout << " " << " ";
            }
            for(int k = 1; k <= 2 * i - 1; k++){
                cout << "*" << " ";
            }
            cout << endl;
        }
        // Lower Pyramid
        for(int i = n9; i >= 1; i--){
            for(int j = 1 ; j <= n9 - i; j++){
                cout << " " << " ";
            }
            for(int k = 1; k <= 2 * i - 1; k++){
                cout << "*" << " ";
            }
            cout << endl;
        }


        
    return 0;
}