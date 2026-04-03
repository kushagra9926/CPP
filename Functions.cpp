#include <iostream>
#include <cmath>
using namespace std;

// Functions: Block of code which runs when it is called.
        /* 
        returnType fName(){
        // do some work
        return someValue;  // optional 
        }
        
        fName();  //function call
        */

    // Forward Declaration: 
        /*
        Declaration: the function's name, return type, and parameters(if any)
        Definition: the body of the function.
        */

    //Scope: Area where a variable can be accessed or used. Two types: 1) Local Scope, 2) Global Scope.

// Function Overloading: Multiple functions with the same name but different parameters.
//                       Ex: We can define sum function multiple times by changing its parameters like int, decimal in compiler will understand when to consider which one. 

void sayHello(){
    cout << "Hello :) \n";
}

int sum(int a , int b = 1){  // Here we gave deffault value to second parameter when no value is assigned it'll take this value. Default value cannot be given to first parameter.
    int sum = a + b;
    return sum;
}
int diff(int a , int b){
    int diff = a - b;
    return diff;
}
// Question: WAF to find the product of 2 numbers a & b.
    // Solution:
        int product(int a, int b){
            int product = a * b;
            return product;
        }
// Question: WAF to print if a number is odd or even.
    // Solution: 
        bool isEven(int a){
            if(a % 2 == 0){
                return true;
            }else{
                return false;
            }
        }
// Question: WAF to print the factorial of a number, n.
    // Solution: 
        int factorial(int n){
            int fact = 1;
            for(int i = 1; i <= n; i++){
                fact = fact * i;
            }
            cout << "factorial(" << n << ") = " << fact << endl;
            return fact;   
        }
// Question: WAF to print if a number is prime or not.
    //Solution:
        bool isPrime(int n){
            if(n == 1){
                return false;
            }
            for(int i = 2; i <= sqrt(n); i++){
                if(n % i == 0){
                    return false;
                }
            }
            return true;
        }
// Question: WAF to find the binomial coefficient for a given n & r.
    // Solution: 
        int binCoeff(int n, int r){
            int val1 = factorial(n);
            int val2 = factorial(r);
            int val3 = factorial(n - r);

            int result = val1 / (val2 * val3);
            return result;
        }

int main(){
    sayHello();  //function call
    int s = sum(2,4);   // 2,4 are arguments.
    int d = diff(5,3);
    cout << "sum = " << s << endl;
    cout << "diff = " << d << endl;

    int p = product(2, 5);
    cout << "product = " << p << endl;
        
    cout << isEven(20) << endl;

    factorial(0);
    factorial(1);
    factorial(2);
    factorial(3);
    factorial(4);
    factorial(5);

    cout << isPrime(2) << endl;

    cout << binCoeff(4 , 2) << endl;
    return 0;
}
