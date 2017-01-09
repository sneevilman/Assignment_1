/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Jan 7, 2017, 5:55 AM
 * Purpose:  Write a C++ program that reads in two integers and then 
 *           outputs both their sum and their product
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here


//Function Prototypes Here

//Program Execution Begins Here
int main () {
    //Declare and process variables
    int num1, num2, sum, prodct;
    
    cout<<"This program finds the sum and product\n"
            "of two numbers inputted by the user.\n"
            "Please input two numbers"<<endl;
    cin>>num1>>num2;
   
    //Process/Calculations Here
    sum = num1 + num2;
    prodct = num1 * num2;
    
    //Output Located Here
    cout<<"The sum is "<<sum<<endl;
    cout<<"The product is "<<prodct<<endl;
    

    //Exit
    return 0;
}

