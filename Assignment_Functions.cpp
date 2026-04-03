#include <iostream>
using namespace std;

// Question 1: Write a function to check if a number is a palindrome in C++. (121 is a palindrome, 321 is not)
    // Solution:  // 
        bool isPalin(int n){
            int reverse_num = 0;
            int num = n;
            while(num > 0){
                int last_digit = num % 10;
                reverse_num = reverse_num * 10 + last_digit;
                num = num / 10;
            }
            if(reverse_num == n){
                return true;
            }else{
                return false;
            }
            
        }
// Question 2: Write a function to calculate the sum of digits of a number.
    // Solution:
// Question 3: Write a function which takes 2 numbers as parameters(a & b) and outputs: a^2 + b^2 + 2*ab.
    // Solution:
// Question 4: Write a function that prints the largest of 3 numbers.
    // Solution: 
// Question 5: Write a function that accepts a character (ch) as parameters & returns the character that occurs after ch in the English alphabet. Eg: input = ‘c’, return value = ‘d’. Note: for ch = ‘z’, return ‘a’.
    // Solution:

int main(){
    // 1) 
        cout << isPalin(121) << endl;
        cout << isPalin(321) << endl;

    return 0;
}
