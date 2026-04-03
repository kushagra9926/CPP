#include <iostream>
#include <cmath>
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
        int sum_digit(int n){
            int sum_digit = 0;
            int num = n;
            while(num > 0){
                int last_digit = num % 10;
                sum_digit += last_digit;
                num = num / 10;
            }
            return sum_digit;
        }
// Question 3: Write a function which takes 2 numbers as parameters(a & b) and outputs: a^2 + b^2 + 2*ab.
    // Solution:
        int output(int a, int b){
            return pow(a, 2) + pow(b, 2) + 2 * a * b;
        }
// Question 4: Write a function that prints the largest of 3 numbers.
    // Solution: 
        int max_num(int a, int b, int c){
            if(a >= b && a >= c){
                return a;
            }
            else if(b >= c){
                return b;
            }else{
                return c;
            }
        }
// Question 5: Write a function that accepts a character (ch) as parameters & returns the character that occurs after ch in the English alphabet. Eg: input = ‘c’, return value = ‘d’. Note: for ch = ‘z’, return ‘a’.
    // Solution:
        char next_char(char a){
            if(a == 'Z'){
                return 'A';
            }else{
                return a + 1;
            }  
        }

int main(){
    // 1) 
        cout << isPalin(121) << endl;
        cout << isPalin(321) << endl;

    // 2)
        cout << sum_digit(12345) << endl;
    
    // 3)
        cout << output(2, 3) << endl;

    // 4)
        cout << max_num(5, 6, 2) << endl;

    // 5)
        cout << next_char('Z') << endl;
    return 0;
}
