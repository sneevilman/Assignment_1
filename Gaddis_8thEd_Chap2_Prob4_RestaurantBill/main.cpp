/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Jan 8, 2017 11:08 PM
 * Purpose:  Tip, tax and total on bill
 * */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here


//Function Prototypes Here

//Program Execution Begins Here
int main () {
    //Declare and process variables
    float mChrg=88.67, //Price of meal before tax/tip
          tax=6.75e-2f, tip = 2.0e-1f, 
          taxAmnt, tipAmnt, billTtl;
   
    //Process/Calculations Here
    taxAmnt = mChrg*tax;
    tipAmnt = mChrg*tip;
    billTtl = mChrg+taxAmnt+tipAmnt;
    
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"The price of the meal is $"<<mChrg<<endl;
    cout<<"The tax amount is $"<<taxAmnt<<endl;
    cout<<"The tip amount is $"<<tipAmnt<<endl;
    cout<<"The total price of the bill is $"<<billTtl<<endl;

    //Exit
    return 0;
}

