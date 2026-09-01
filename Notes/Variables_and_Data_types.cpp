// Boilerplate code in c++:
#include <iostream>
#include <iomanip>     // For that float and double example.
#define PI 3.14
using namespace std;

int main() {
    cout<<"Hello world \n";      // semicolon (;) are like fullstop in cpp.     
    cout<< PI<<endl;                   // "\n" or ">>endl" is used to change the line.
    
// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*

// How does a code run?
// code.cpp(source code) -------> compiler -------> code.exe(executable file) -------> "Hello world"(output)

// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*

// Preprocessor Directive: 
// 1) All preprocessor directive starts with #.

// 2) "#include <iostream>" this is the preprocessor directive here.

// 3) Header file required pre-written code that's is required to execute our program. Eg - iostream, vector etc.
//    because they contain code of the cout, cin etc which are used direct to show output and take inpute repectively.

// 4) They are also used to define "macros" like (#define PI 3.14). Then wherever PI is used it will take the value 3.14. For ex: added above.

// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*

// Namespace: 
// 1) It is used to differentiate between different libraries used in C++. For ex: A, B, C are different libraries in which A contains a
//    function draw() --> circle while B contains a function draw() --> square, So now if you use draw function any where in the code compiler
//    will get confused which to use. Because of which conflict arises and to avoid such conflicts we use namespace.

// 2) Standard C++ Namespace is called std.

// 3) EX: If different cout are defined then to use particular one we define it like (std::cout << ;) it will use cout defined in std one.

// 4) cout is defined in "iostream" but it is declared in namespace.

// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*

// Run code in Terminal window:
// 1) Command "ls" is used to check files in folder.
// 2) To check compiler version use "g++ --version".
// 3) To run compiler use "g++ file_name".
// 4) To run executable file use "./a.exe"

// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*

// Data Types:
// 1) Primitive:
//              a) Integer(int) 4Bytes
//              b) Character(char) 1Byte
//              c) Boolean (bool) 1Byte
//              d) Floating Point (float) 4Byte
//              e) Double Floating Point (double) 8bytes

// 2) Non-Primitive:
//              a) String
//              b) Array etc.

// 1 Byte = 8 bits

    int ag = 25;
    int marks = -200;
    char grade = 'A';
    bool isAdult = true;
    float PI1 = 3.14159265359;
    double PI2 = 3.14159265359;

    cout<<"PI1 = "<<PI1<<endl;        //It shows the output "PI1 = 3.14159"
    cout<<"PI2 = "<<PI2<<endl;        //It shows the output "PI2 = 3.14159"

    cout<<setprecision(12)<<"PI1 = "<<PI1<<endl;  //It shows the output "PI1 = 3.14159274101"
    cout<<setprecision(12)<<"PI2 = "<<PI2<<endl;  //It shows the output "PI2 = 3.14159265359"

    cout<<ag<<" "<<marks<<" "<<grade<<" "<<isAdult<<endl;
    cout<<"size of int = "<<sizeof(int)<<endl;
    cout<<"size of char = "<<sizeof(char)<<endl;
    cout<<"size of bool = "<<sizeof(bool)<<endl;

// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*

// Input in C++:
    int age;  //garbage value
    cout<<"Enter a value : ";
    cin>>age;

    cout<<"Your age is: "<<age<<endl;

    // To find sum of two numbers by taking input:
        int a;
        int b;

        cout<<"Enter first value: ";
        cin>>a;

        cout<<"Enter second value: ";
        cin>>b;

        cout<<"Sum of two number is: "<<a + b;

    return 0;                 // return 0; means the code end it is the ending statement 
}

// ------------------------* ------------------------* ----------END------------* ------------------------* ------------------------* ------------------------*
