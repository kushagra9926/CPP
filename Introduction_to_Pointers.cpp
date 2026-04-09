#include <iostream>
using namespace std;

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

// Deference Operator: Gets the value of the variable pointed by any pointer.
//      * operator lets us directly access & modify the value of variable.
        int *ptr = &a;
        cout << ptr << "\n";
        cout << *ptr << "\n";

        *ptr = 20;
        cout << a << "\n";
    return 0;
}
