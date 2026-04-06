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