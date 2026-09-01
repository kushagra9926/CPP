#include <iostream>
using namespace std;

int main(){

// Question 1: Print the 0-1 Triangle Pattern for n = 5;   1
//                                                         0 1
//                                                         1 0 1
//                                                         0 1 0 1
//                                                         1 0 1 0 1

    // Solution: 
        int n1 = 5;
        for(int i = 1; i <= n1; i++){
            for(int j = 1; j <= i; j++){
                if(i % 2 != 0){
                    if(j % 2 != 0){
                        cout << 1 << " ";
                    }else{
                        cout << 0 << " ";
                    }
                }else{
                    if(j % 2 != 0){
                        cout << 0 << " "; 
                    }else{
                        cout << 1 << " ";
                    }
                }
            }
            cout << endl;
        }

// Question 2: Print the Rhombus Pattern for n = 5.         * * * * *
//                                                        * * * * * 
//                                                      * * * * * 
//                                                    * * * * *
//                                                  * * * * *

    // Solution:
        int n2 = 5;
        for(int i = 1; i <= n2; i++){
            for(int j = 1; j <= n2 - i; j++){
                cout << " " << " ";
            }
            for(int k = 1; k <= n2; k++){
                cout << "*" << " ";
            }
            cout << endl;
        }
// Question 3: Print the Palindromic Pattern with Numbers for n = 5.         1
//                                                                         2 1 2
//                                                                       3 2 1 2 3
//                                                                     4 3 2 1 2 3 4
//                                                                   5 4 3 2 1 2 3 4 5

    // Solution: 
        int n3 = 5;
        for(int i = 1; i <= n3; i++){
            for(int j = 1; j <= n3 - i; j++){
                cout << " " << " ";
            }
            for(int k = i; k >= 1 ; k--){
                cout << k << " ";
            }
            for(int l = 1; l <= i - 1; l++){
                cout << l + 1 << " "; 
            }
            for(int m = 1; m <= n3 - 1; m++){
                cout << " " << " "; 
            }
            cout << endl;
        }
    return 0;
}