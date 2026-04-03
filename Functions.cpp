#include <iostream>
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
int product(int a, int b){
    int product = a * b;
    return product;
}
bool isEven(int a){
    if(a % 2 == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    sayHello();  //function call
    int s = sum(2,4);   // 2,4 are arguments.
    int d = diff(5,3);
    cout << "sum = " << s << endl;
    cout << "diff = " << d << endl;

// Question: WAF to find the product of 2 numbers a & b.
    // Solution:
        int p = product(2, 5);
        cout << "product = " << p << endl;

// Question: WAF to print if a number is odd or even.
    // Solution: 
        cout << isEven(20) << endl;

    return 0;
}
