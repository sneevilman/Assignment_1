/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Jan 9, 2017 1:08 AM
 * Purpose:  Annual Pay
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here


//Function Prototypes Here

//Program Execution Begins Here
int main () {
    //Declare and process variables
    float payAmnt=2200.0, //Amount of pay employee earns
            payPrds=26, //Number of pay periods/year
            annlPay; //Total annual pay
   
    //Process/Calculations Here
    annlPay=payAmnt*payPrds;
    
    //Output Located Here
    cout<<"This year you earned $"<<annlPay;

    //Exit
    return 0;
}

