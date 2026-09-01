#include <iostream>
using namespace std;

// Question 2: 
void multipleBy2(int &a, int &b, int&c){
    a *= 2;
    b *= 2;
    c *= 2;
}

int main(){
// Question 1: What will be the output of the following code:
    int x1;
    int *ptr;
    x1 = 7;
    ptr = &x1;
    cout << *ptr << "\n";
    // Ans: Ouput --> 7

// Question 2: What will be the output of the following code: 
    int x = 1, y = 2, z = 3;
    multipleBy2(x, y, z);
    cout << x << y << z << "\n";
    // Ans: Output --> 246

// Question 3: What will be the output of the following code: 
    int a = 32;
    int *ptr1 = &a;

    char ch = 'A';
    char &cho = ch;
    
    cho += a;     // Here cho = cho + a ---> 65 + 32 = 97 (a) and cho is in char so, cho = a and hence ch = a.
    *ptr1 += ch;  // Here *ptr1 = *ptr1 + ch ---> 32 + 97 = 129 so here *ptr1 = 129 and hence a = 129.
    cout << a << ", " << ch << endl; 
    // Ans: Output --> 129, a
    return 0;
}
