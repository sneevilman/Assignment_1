/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Jan 4, 2017 1:10 PM
 * Purpose:  Land Calculation
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here

const int CONVRSN = 43560;

//Function Prototypes Here

//Program Execution Begins Here
int main () {
    //Declare and process variables
    int nAcres,//Number of Acres
            nFt2;//Area in feet^2
    
    cout<<"This is a conversions program\n"
            "from number of Acres to Feet squared\n"
            "Input Number of Acres"<<endl;
    cin>>nAcres;
   
    //Process/Calculations Here
    nFt2=nAcres*CONVRSN;
    
    //Output Located Here
    cout<<"Feet Squared = "<<nFt2<<endl;

    //Exit
    return 0;
}

