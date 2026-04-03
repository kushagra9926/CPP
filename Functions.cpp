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

int sum(int a , int b){
    int sum = a + b;
    return sum;
}
int diff(int a , int b){
    int diff = a - b;
    return diff;
}

int main(){
    sayHello();  //function call
    int s = sum(2,4);   // 2,4 are arguments.
    int d = diff(5,3);
    cout << "sum = " << s << endl;
    cout << "diff = " << d << endl;
    return 0;
}
