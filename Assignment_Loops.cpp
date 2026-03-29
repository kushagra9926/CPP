#include <iostream>
#include <cmath>
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

// Question 3: WAP to input a number and check whether the number is an Armstrong number or not.(Solve using three digit number.)
    // Solution: 
        int n3;
        cout << "Enter a number: ";
        cin >> n3;
        int sum = 0;
        while(n3 > 0){
            int digit = n3 % 10;
            sum += digit * digit * digit;
            n3 = n3 / 10; 
        }
        if(sum == n3){
            cout << "Number is Armstrong" <<endl; 
        }else{
            cout << "Number is not Armstrong" << endl; 
        }
        
// Question 4: For a positive N, WAP that prints all the prime numbers from 2 to N. (Assume N >= 2)
    // Solution: 
        int n4;
        cout << "Enter a number: ";
        cin >> n4;
        cout << "Prime Numbers are: "<< endl; 
        for(int i = 2; i <= n4; i++){
            int curr = i;
            bool isPrime = true;

            for(int j = 2; j <= sqrt(i); j++){
                if(curr % j == 0){
                    isPrime = false;
                }
            }
            if(isPrime){
                cout << curr << endl; 
            }
        }
// Question 5: For a positive N, WAP that prints the first N Fibonacci numbers.(series where each number is a sum of previous 2 numbers in the series.)
    // Solution: 
        int n5;
        cout << "Enter a number: ";
        cin >> n5;
        int a = 0;
        int b = 1;
        int c = 0;
        cout << a << " ";
        cout << b << " ";
        for(int i = 2; i < n5; i++){
            c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }

    return 0;
}