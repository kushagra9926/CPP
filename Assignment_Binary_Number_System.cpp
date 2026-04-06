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
        
        int main(){
            binToDec(111111);
            binToDec(10110); 
            binToDec(10011); 
            binToDec(110010); 
            return 0;
        }