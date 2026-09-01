#include <iostream>
using namespace std;
#define PI 3.14

int main(){
// Question 1: In a program, input the side of a square. You have to output the area of the square. Input: n (side), Output: n*n(area).
    
    float length; 
    
    cout<<"Enter the lenght of square: ";
    cin>>length;

    float square = length * length;
    cout<<"Input is: "<<length <<endl;
    cout<<"Output is: "<<square<<endl;

// Question 2: Enter cost of 3 items from the user (using float data type) - a pencil, a pen and an eraser. 
//             You have to output the total cost of the items back to the user as their bill. (Add on: You can also 
//             try adding 18%GST tax to the items in the bill as an advanced problem).

    float pencil_cost;
    float pen_cost;
    float eraser_cost;

    cout<<"Enter the cost of pencil: ";
    cin>> pencil_cost;

    cout<<"Enter the cost of pen: ";
    cin>> pen_cost;

    cout<<"Enter the cost of erasor: ";
    cin>> eraser_cost;

    float total_cost = pencil_cost + pen_cost + eraser_cost;
    float total_cost_gst = total_cost + (total_cost)* 0.18;

    cout<<"Total cost of the items are: "<<total_cost <<endl;
    cout<<"Total cost of the items with gst are: "<<total_cost_gst <<endl;

// Question 3: Build a Simple Interest Calculator. Input: principal(P), rate(R), time(T), Output:( P * R * T) / 100.

    float P;
    float R;
    float T;

    cout<<"Enter the Principal: ";
    cin>>P;

    cout<<"Enter the Rate: ";
    cin>>R;

    cout<<"Enter the Time: ";
    cin>>T;

    float result = ( P * R * T) / 100;
    cout<<"Output is: "<< result <<endl;

// Question 4: Write a program to calculate the area of a circle. Input: r (radius), Output: PI * r * r (area).

    float radius;

    cout<<"Enter radius of the circle: ";
    cin>>radius;

    float area = PI * radius * radius;

    cout<<"Radius of the circle is: "<<radius<<endl;
    cout<<"The are of circle is "<<area;
    return 0;
}