#include <iostream>
using namespace std;

int main(){

// Question 1: WAP to find the Factorial of a number entered by the user.
    // Solution: 
        int n1;
        cout << "Enter a number: ";
        cin >> n1;
        int factorial = 1;
        for(int i = 1; i <= n1; i++){
            factorial *= i;
        }
        cout << "factorial is: "<< factorial << endl;

// Question 2: WAP to print the multiplication table of a number, entered by the user.
    // Solution: 
        int n2;
        cout << "Enter a number: ";
        cin >> n2;
        cout << "Multiplication table of "<< n2 <<" is: " << endl;
        for(int i = 1; i <= 10; i++){
            cout << n2 * i << endl;
        }

// Question 3: WAP to input a number and check whether the number is an Armstrong number or not.(a positive integer equal to the sum of its own digits, each raised to the power of the total number of digits.)
    // Solution: 
        
// Question 4: For a positive N, WAP that prints all the prime numbers from 2 to N. (Assume N >= 2)
// Question 5: For a positive N, WAP that prints the first N Fibonacci numbers.(series where each number is a sum of previous 2 numbers in the series.)
    return 0;
}