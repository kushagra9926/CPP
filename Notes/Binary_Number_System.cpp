# include <iostream>
using namespace std;

// Binary to Decimal:
     // Question: Convert 10010 to decimal representation.
          // Solution:
               /*
               1     0     0     1     0
              2^4   2^3   2^2   2^1   2^0
          -----------------------------------
              16  +  0  +  0  +  2  +  0

               = 18   // Ans.
              */ 

     // In Binary Number preceeding zeros have no value. For ex: 00001 , 001 will both be considered as 1 only.

// Decimal to Binary: 
     // Question: Convert 18 to Binary representation.
          // Solution: 
               /*                _
               2 | 18      0    / \  
              ---|---          / | \
               2 | 9       1     |
              ---|---            |
               2 | 4       0     |
              ---|---            |
               2 | 2       0     |
              ---|---            | 
                 | 1  ___________|

               10010  // Ans.
               */

// Decimal to Binary(0 to 16):

     /*
     1  ----->        1  
     2  ----->      1 0
     3  ----->      1 1
     4  ----->    1 0 0
     5  ----->    1 0 1
     6  ----->    1 1 0
     7  ----->    1 1 1   
     8  ----->  1 0 0 0 
     9  ----->  1 0 0 1
     10 ----->  1 0 1 0
     11 ----->  1 0 1 1
     12 ----->  1 1 0 0 
     13 ----->  1 1 0 0
     14 ----->  1 1 0 1 
     15 ----->  1 1 1 0
     16 ----->  1 1 1 1
     */

// Data Type Modifiers: Alter the meaning of existing data types.
     
     /*
     long        >= 4 bytes (more than int)
     short       2 bytes
     signed      signed int is same as int
     unsigned    can only store non-negative numbers
     long long   same as long long int
     */

// Convert from Binary to Decimal (Code):

void binToDec(int binNum){
     int n = binNum;
     int decNum = 0;
     int pow = 1; // 2^0 2^1 2^2

     while(n > 0){
          int lastDigit = n % 10;
          decNum += lastDigit * pow;
          pow = pow * 2;
          n = n / 10;
     }

     cout << decNum << endl;
}

// Convert from Decimal to Binary (Code):

void decToBin(int decNum) {
     int n = decNum;
     int pow = 1;   //10^0 10^1 10^2...
     int binNum = 0;

     while(n > 0){
          int rem = n % 2;
          binNum += rem * pow;
          n = n / 2;
          pow = pow * 10;
     }

     cout << "binary of " << decNum << " = " << binNum << endl;
}
int main(){
     binToDec(101);
     decToBin(4);
     return 0;
}