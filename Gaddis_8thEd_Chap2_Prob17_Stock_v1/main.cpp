/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Jan 4, 2017
 * Purpose:  Stock Price Problem
 */

#include <iostream>

const unsigned char PERCENT=100;

using namespace std;
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    unsigned short nShares=750; //Number of shares
    unsigned char stkPrc=35;   //units of dollars/share
    unsigned char commiss=2;    //percent commission
    unsigned short stkPaid, comPaid, totPaid;
    
    //Process/Calculations Here
    stkPaid=stkPrc*nShares;
    comPaid=stkPaid*commiss/PERCENT;
    totPaid=stkPaid+comPaid;
    
    //Output Located Here
    cout<<"Number of Shares:  "<<nShares<<endl;
    cout<<"Price/Stock:      $"<<static_cast<int>(stkPrc)<<endl;
    cout<<"Commission:        "<<static_cast<int>(commiss)<<"%"<<endl;
    cout<<"\n";
    cout<<"Price of Stocks = $"<<stkPaid<<endl;
    cout<<"Commission Paid = $"<<comPaid<<endl;
    cout<<"Total Paid =      $"<<totPaid<<endl;

    //Exit
    return 0;
}

