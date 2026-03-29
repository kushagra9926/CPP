#include <iostream>
using namespace std;

int main(){

// for loop:
    // Syntax: for (initialisation; condition; updation) { // do some work }    // Loop runs while conditon is true.

    // iterate: run
    // iteration: single run
    // iterator: loop variable

// Print n natural numbers:
    int n;
    cout << "Enter your n: ";
    cin >> n;
    
    for(int i = 1; i<=n; i++) {
        cout << i << " ";

    }
    cout << endl;  

// Print sum of n natural numbers:
    int n1;
    cout << "enter your number: ";
    cin >> n1;

    int sum = 0;
    for(int i = 1; i<=n ;i++) {
        sum += i;
    }
    cout << "sum = " << sum << endl;
     
// while loop:
    int i = 1;  // init
    while(i < 50){
        cout << i <<" ";
        i++;    // updation
    }
    cout << endl;

// Print the Square pattern using for loop:
    // Solution: 
        for(i = 1; i <= 4; i++){
            cout << "* * * *" << endl;
        }
        
// Print number n to 1 using for loop:
    // Solution:
        int n2;
        cout << "enter your number: ";
        cin >> n2;

        for(i = n2; i >= 1; i--){
            cout << i << endl; 
        }

// Print the sum of digit of a number using while loop. n = 10829.
    // Solution: 
        int n3 = 10829;
        int sum1 = 0;

        while(n3 > 0){
            int digit_1 = n3 % 10;
            sum1 += digit_1;
            n3 = n3 / 10;
        }
        cout << "Sum of digit is: " << sum1;

// Print the sum of odd digits of a number using while loop.
    // Solution:
        //  let n = 29456,      9,5 odd;    digit = 6   digit % 2 != 0 then sum += digit  else  
        int n4;
        cout << "Enter your number: ";
        cin >> n4;

        int sum_odd = 0;
        int sum_even = 0;
        
        while(n4 > 0){
            int digit_2 = n4 % 10;
            if(digit_2 % 2 != 0){
                sum_odd += digit_2;
            }
            else{
                sum_even += digit_2;
            }
            n4 = n4 / 10;
        }
        cout << "Sum of odd digit is: " << sum_odd << endl;
        cout << "Sum of even digit is: " << sum_even << endl;

// Print the digit of the given number in reverse using while loop. (n = 10829)
    // Solution:
        // Method - 1
        int n5 = 10829;
        int reverse_1 = 0;
        cout << "Reverse number is: ";
        while(n5 > 0){
            int digit_3 = n5 % 10;
            reverse_1 = digit_3;
            n5 = n5 / 10;
            cout << reverse_1; 
        }
        cout << endl;
        // Method - 2
        int n6 = 10829;
        int reverse_2 = 0;

        while(n6 > 0){
            int digit_4 = n6 % 10;
            reverse_2 = reverse_2 * 10 + digit_4;
            n6 = n6 / 10;
        }
        cout << "Reverse number is: " << reverse_2;
// Reverse a given number and print the result.
    // Solution:
        // Method - 1
        int n7;
        cout << "Enter a number: ";
        cin >> n7;
        int reverse_3 = 0;
        cout << "Reverse number is: ";

        while(n7 > 0){
            int digit_5 = n7 % 10;
            reverse_3 = digit_5;
            n7 = n7 / 10;
            cout << reverse_3;
        }
        cout << endl;

        // Method - 2
        int n8;
        cout << "Enter a number: ";
        cin >> n8;
        int reverse_4 = 0;
        
        while(n8 > 0){
            int digit_6 = n8 % 10;
            reverse_4 = reverse_4 * 10 + digit_6;
            n8 = n8 / 10;
        }
        cout << "Reverse number is: "<< reverse_4 << endl;

// do-while loop:
    // Syntax: do {// do some work} while(condition);       // works gets done atleast once irrespective of condition.
    
        // Example:
            int p = 1;
            
            do{
                cout << p << endl;
                p++;
            }while(p > 10);              // Output: 1.

// Break Statement: To exit the loop.
        int q = 1;

        while(q < 10){
            if( q == 3){
                break;
            }
            cout << q << endl;
            q ++;                            // Output: 1 , 2
        }

// Practice Question: WAP where user can keep entering numbers till they enter a multiple of 10.
    // Solution:
        int num;

        do{
            cout << "Enter a number: ";
            cin >> num;

            if(num % 5 == 0){
                break;
            }
            cout << num;
        }while(true);

// Continue Statement: To skip a iteration.
    // Example: 
        for(int i = 1; i < 10; i++){
            if(i == 3){
                continue;
            }
            cout << i << endl;
        }
// Practice question: WAP to show numbers entered by user except multiples of 10.
    // Solution:
        int t;
        for(int i = 1; i > 0; i++){
            cout << "Enter a number: ";
            cin >> t;

            if(t % 10 == 0){
                continue;
            }
            cout << t << endl;
        }
    return 0;

}