#include <iostream>
using namespace std;

int main(){

// Question 1: Write a C++ program to get a number from the user and print whether it's positive, negative or zero.
    // Solution: 
        float num;
        cout << "Enter a number: ";
        cin >> num;

        if(num < 0){
            cout << "Number is negative." << endl;
        }else if(num > 0){
            cout << "Number is positive." << endl;
        }else{
            cout << "Number is zero." << endl;
        }

// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*

// Question 2: Write a C++ program that takes a year from the user and print whether that year is a leap year or not.
// Hint: A leap year is exactly divisible by 4 except for century years (years ending with 00). The century year is a leap year only if it 
//       is perfectly divisible by 400. Eg: 1999 is not a leap year 2000 is a leap year 2004 is a leap year.
    
    // Solution: 
        int year;
        cout << "Enter a year: ";
        cin >> year;
        
        if (year % 4 == 0 && year % 100 != 0){
            cout << "Year is Leap." << endl;
        }else if (year % 100 == 0 && year % 400 == 0){
            cout << "Year is Leap." << endl;
        }else{
            cout << "Year is not a Leap year." << endl;
        }

// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*
        
// Question 3: What will be the value of x & y in the following program:   
//              int main(){
//                  int a = 63 , b = 36;
//                  bool x = (a < b)? true : false;
//                  int y = (a > b)? a : b;
//                  cout << x << "," << y << endl;
//                  return 0;
//               }

    // Solution: 
        int a = 63, b = 36;
        bool x = (a < b)? true : false;
        int y = (a < b)? a : b;
        cout << x << "," << y <<endl;  // Ans: x = 0 & y = 36

// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*

// Question 4: What’ll be the output of the program:
//             int main(){
//                  int p = 5;
//                  if (++p * 5 <= 25) {
//                      cout << "Hello\n";
//                  } else { 
//                      cout << "Bye\n";
//                  }
//                  return 0;
//               }

    // Solution:
        int p = 5;
        if (++p * 5 <= 25) {
            cout << "Hello \n"; 
        }else {
            cout << "Bye \n";
        }                               // Ans: Bye

// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*

// Question 5: For any 3 digit number check whether it’s an Armstrong number or not. Armstrong number is a number that is equal to the 
//             sum of cubes of its digits. Eg: 371 is an armstrong number. 3*3*3 + 7*7*7 + 1*1*1 = 371.

    // Solution: 
        int n;
        cout << "Enter any three digit number: ";
        cin >> n;

        int number = n;

        int dig1 = number % 10;
        number /= 10;
        int dig2 = number % 10;
        number /= 10;
        int dig3 = number % 10;
        
        if (dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3 == n){
            cout << n << " " << "Number is Armstrong." << endl;
        }else{
            cout << n << " " << "Number is not Armstrong." << endl;
        }
// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*

// Bonus: Read up about the difference between typedef (keyword), macros & const(keyword) in C++.

    // Solution: In C++, typedef is a keyword used to create an alias (another name) for an existing data type. It doesn’t create a 
    //           new type—it just gives a new name to an existing one to make code easier to read and maintain.
        typedef int myInt;
        myInt q = 10;   // same as: int q = 10;
        cout << q; 
    
    return 0;
}

 
