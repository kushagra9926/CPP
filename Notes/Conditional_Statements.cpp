#include <iostream>
using namespace std;

int main(){
// Practice Question: Print the largest of two number:
    // Solution: 
        float a;
        cout<<"Enter first number: ";
        cin>> a;

        float b;
        cout<<"Enter second number: ";
        cin>> b;
        
        if (a > b){
            cout<<a<<endl;
        }
        else{
            cout<<b<<endl;
        }

// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*

// Practice Question: Print if number is odd or even:
    // Solution:
        int c;
        cout<<"Enter a number: ";
        cin>> c;

        if (c % 2 == 0){
            cout<<"Number is Even"<<endl;
        }
        else{
            cout<<"Number is Odd"<<endl;
        }

// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*

// Practice Question: Create an Income Tax Calculator.
//                    income < 5L  -> 0% tax
//                    income between 5 - 10L -> 20% tax
//                    income > 10L  -> 30% tax

    // Solution: 
        int income;
        float tax;

        cout<<"Enter your income: ";
        cin>> income;

        if (income < 5){
            tax = 0;    // 0% tax
            cout<<"Your tax is: "<<tax<<endl;
        }
        else if(income < 10 && income > 5){
            tax = 0.2 * income; // 20% tax
            cout<<"Your tax is: "<<tax<<endl;
        }
        else{
            tax = 0.3 * income; //30% tax
            cout<<"Your tax is: "<<tax<<endl;
        }

// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*

// Practice Question: Print the largest of 3 numbers:

    // Solution:
        float n1;
        cout<<"Enter first number: ";
        cin>> n1;

        float n2;
        cout<<"Enter second number: ";
        cin>> n2;

        float n3;
        cout<< "Enter third number: ";
        cin>> n3;
        
        if(n1 > n2 && n1 > n3){
            cout<< "Largest number is: "<<n1<<endl;
        }
        else if(n2 > n1 && n2 > n3){
            cout<< "Largest number is: "<<n2<<endl;
        }
        else{
            cout<<"Largest number is: "<<n3<<endl;
        }

// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*
    
// Ternary Operator: (variable = condition? statement1 : statement2;)
        bool isAdult; //1, 0
        int age;
        cout << "Enter age: ";
        cin >> age;

        isAdult = age >= 18? true : false;

// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*

// Switch Statement: 
        int day;
        cout<<"Enter a day: ";
        cin>>day;

        switch(day){
            case 1 : cout << "Monday" << endl;
                    break;
            case 2 : cout << "Tuesday" << endl;
                    break;
            case 3 : cout << "Wednesday" << endl;
                    break;
            case 4 : cout << "Thursday" << endl;
                    break;
            case 5 : cout << "Friday" << endl;
                    break;
            case 6 : cout << "Saturday" << endl;
                    break;
            case 7 : cout << "Sunday" << endl;
                    break;
            default : cout << "Inalaid Day" << endl;   
        }

// ------------------------* ------------------------* ------------------------* ------------------------* ------------------------* ------------------------*

// Practice Question: Build a calculator using Switch for the 4 basic arithmetic operators (+, -, *, /)
    // Solution:
        int a, b;
        char op;

        cout << "enter a: ";
        cin >> a;
        cout << "enter b: ";
        cin >> b;
        cout << "enter operator : ";
        cin >> op;

        //Calculator
        if(op == '+'){
            cout << "a + b = " << (a + b) << endl;
        } else if(op == '-'){
            cout << "a - b = " << (a - b) << endl;
        } else if(op == '*'){
            cout << "a * b = " << (a * b) << endl;
        } else if(op == '/'){
            cout << "a / b = " << (a / b) << endl;
        } else{
            cout << "Invalid Operator";
        }

        //Switch
        switch(op){
            case '+' : cout << "a + b = " << (a + b) << endl;
                        break;
            case '-' : cout << "a - b = " << (a - b) << endl;
                        break; 
            case '*' : cout << "a * b = " << (a * b) << endl;
                        break; 
            case '/' : cout << "a / b = " << (a / b) << endl;
                        break; 
            default : cout << "Invalid Operator";
        }


    return 0;
}