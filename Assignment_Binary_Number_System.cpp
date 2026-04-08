#include <iostream>
using namespace std;

// Question 1: Convert the following binary numbers in to decimal forms:
    // ●111111
    // ●10110
    // ●10011
    // ●110010

    // Solution: 
        void binToDec(int binNum){
            int n = binNum;
            int decNum = 0;
            int pow = 1;  

            while(n>0){
                int lastDigit = n % 10;
                decNum += lastDigit * pow;
                n = n / 10;
                pow *= 2;
            }
            cout << decNum << endl;
        }
        
// Question 2: Convert the following decimal numbers in to binary forms: 
    // ●25
    // ●49
    // ●31
    // ●88

    // Solution:
        void decToBin(int decNum){
            int n = decNum;
            int pow = 1;
            int binNum = 0;

            while(n > 0){
                int rem = n % 2;
                binNum += rem * pow;
                n = n / 2;
                pow = pow * 10;
            }
            cout << "binary of " << decNum << " = " << binNum << endl;
        }

// Question 3: Following are the rules of adding 2 binary digits: 
    // 0+0=0, carry=0
    // 1+0=1, carry=0
    // 0+1=1, carry=0
    // 1+1=0, carry=1 
    /*
    So, in math if 2 + 3 = 5, in binary it looks like
        
        1 0
      + 1 1
       -----
       1 0 1
    */
    
    // Using this method, try to add these 2 numbers (63 & 22) in their binary form and verify that the binary output is equal to the decimal value 85.

    // Solution: 
        /*
        Binary of 63 = (1 1 1 1 1 1) & 22 = (1 0 1 1 0)  
        When we add these binary numbers, calculation is as follows: 

        1 1 1 1      // carry
        1 1 1 1 1 1
      +   1 0 1 1 0
       -------------
      1 0 1 0 1 0 1    =  85
      
        */
        

        int main(){
            binToDec(111111);
            binToDec(10110); 
            binToDec(10011); 
            binToDec(110010); 

            decToBin(25);
            decToBin(49);
            decToBin(31);
            decToBin(88);

            return 0;
        }