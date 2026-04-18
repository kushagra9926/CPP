#include <iostream>
using namespace std;

// Pass by value:
        void changeA(int p){
                p = 20;
                cout << p << "\n";
        }

// Pass by reference using Pointer:
        void changea(int *ptr){
                *ptr = 20;
                cout << *ptr << "\n";
        }

// Pass by reference using Reference variables:
        void changeM(int &param){
                param = 20;
                cout << param << "\n";
        }


int main(){

// Hexadecimal: These number become address of memory location. Hexadecimal numbers have base 16 [0 to 9, a(10), b(11), c(12), d(13), e(14), f(15)].

// Address of Operator: '&' gives address of a variable.
    // For ex: 
        int a = 10;
        cout << &a << "\n";   // output: 0x61ff0c

// Pointers: A special variable that stores address of another variable.
        /*
        int *ptr = &a;
        float *ptr = &b;
        char *ptr = &c;
        int **ptr2 = &ptr;
        */
        int *ptr1 = &a;
        cout << &a << " = " << ptr1 << "\n";

        float pi = 3.14;
        float *ptr2 = &pi;

        cout << sizeof(ptr1) << "\n";
        cout << sizeof(ptr2) << "\n";

// Deference Operator: Gets the value of the variable pointed by any pointer.
//      * operator lets us directly access & modify the value of variable.
        int *ptr = &a;
        cout << ptr << "\n";
        cout << *ptr << "\n";

        int **pptr = &ptr;
        cout << &ptr << " = " << pptr << "\n";

        *ptr = 20;
        cout << a << "\n";

// Null Pointer: We assign NULL value to a pointer to show that it doesn't point to any location.

        int *ptr3 = NULL;
        cout << ptr3 << "\n";
        // cout << *ptr3 << "\n";   // segmentation fault. "code stops running."
        
    // Deferencing null ptr is not possible as it'll result in error.

// Passing Arguments: 
        /*
        Pass by value:
                When parameter is a copy of actual argument variable in memory.
        */
        int p = 10;
        changeA(p);
        cout << p << "\n";
        /*
        Pass by reference (pass by address):
                When we pass the reference of argument to the function.
        */
       
        // Pass by reference using Pointer:
        int q = 10;
        changea(&q);

        cout << q << "\n";

// Reference variable: Reference variable is an alternate name(alias) of already existing variable.
        /*
        int a = 5;
        int &b = a;
        b = 25; 

        cout << b << "\n";      // output: 25
        cout << a << "\n";      // output: 25

        a & b refers to the same location in memory
        */

        // Pass by reference using Reference variable:
        int m = 10;
        changeM(m);
        cout << m << "\n";

// Practice Question: What will ptr2 point to in the following code:
        /*
        int x = 5, y = 10;
        int *ptr1 = &x, *ptr2 = &y;
        ptr2 = ptr1;
        */

    return 0;
}
