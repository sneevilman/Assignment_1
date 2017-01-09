/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Jan 9, 2017 1:21 AM
 * Purpose:  Total Purchase
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here


//Function Prototypes Here

//Program Execution Begins Here
int main () {
    //Declare and process variables
    float itm1 = 15.95,
            itm2 = 24.95,
            itm3 = 6.95,
            itm4 = 12.95,
            itm5 = 3.95,
            tax = 7.0e-2f,
            total;
   
    //Process/Calculations Here
    total = (itm1+itm2+itm3+itm4+itm5)*(1+tax);
    
    //Output Located Here
            cout<<fixed<<setprecision(2)<<endl;
            cout<<"Item 1: $"<<itm1<<endl;
            cout<<"Item 2: $"<<itm2<<endl;
            cout<<"Item 3: $"<<itm3<<endl;
            cout<<"Item 4: $"<<itm4<<endl;
            cout<<"Item 5: $"<<itm5<<endl;
            cout<<"Sales Tax:"<<tax*100<<"%"<<endl;
            cout<<"Subtotal: $"<<total<<endl;

    //Exit
    return 0;
}

