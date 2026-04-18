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
    int x;
    int *ptr;
    x = 7;
    ptr = &x;
    cout << *ptr;

// Question 2: What will be the output of the following code: 
    int x = 1, y = 2, z = 3;
    multipleBy2(x, y, z);
    cout << x << y << z << "\n";
// Question 3: What will be the output of the following code: 
    int a = 32;
    int *ptr1 = &a;

    char ch = 'A';
    char &cho = ch;

    cho += a;
    *ptr1 += ch;
    cout << a << ", " << ch << endl;
    
    return 0;
}
