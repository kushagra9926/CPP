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

int main(){
    sayHello();  //function call

    return 0;
}
