#include <iostream>
using namespace std;

int main(){
// Constants: Variables that cannot be changed.
    const int n = 25; // must be initialized

// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*

// Typecasting: Conversion of data from one type to another.

    // Implicit Conversion (automatic/ type promotion): Done by compiler to avoid data loss.
        
        cout<<(10/3); //3
        cout<<(10/3.0); //3.3333
    
        // bool -> char -> int -> float -> double

    // Explicit Conversion (forced by the programmer):
        
        cout<< (int)('A') <<endl;  //65
        float PI = 3.14;
        cout<< (int)(PI) <<endl; //3
        cout<< ((float) 10/3) << endl; //3.3333
        cout<< (char)('A' + 1);  //B

// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*

// Practice Question: 
    // Question 1: Predict output of cout<<(bool)3 + 2;

        // Solution: 1) Boolean value of any non zero number is equal to 1. Hence answer is (1 + 2 = 3). 
                     
    // Question 2: Predict output of cout<<(23.5 + 2 + 'A');

        // Solution: Here according to this (bool -> char -> int -> float -> double) we can say that ans is (23.5 + 2 + 65 = 90.5).

// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*

// Operators: Symbols that tell compiler to perform some operations.
    
    // Types of Operators:
    //  1) Arithmetic Operators:
        // There are two types of Aritmetic Operators:
            // a) Binary: Addition(+), Subtraction(-), Multiply(*), Divide(/), Modulo(%).

            // b) Unary: Increment(++): a++ (update then use), Decrement(--): ++a (use then update).

    //  2) Assignment Operators: =, +=, -=, *=, /=.

    //  3) Relational Operators: >, <, >=, <=, ==, !=.

    //  4) Logical Operators: And(&&), Or(||), Not(!)
    //  5) Bitwise Operators
    return 0;
}

