/* 
 * File:   main.cpp
 * Author: Caeleb Moeller
 * Created on Jan 9, 2017 1:34 AM
 * Purpose:  Distance per Tank of Gas
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here


//Function Prototypes Here

//Program Execution Begins Here
int main () {
    //Declare and process variables
    int tankGln = 20;    //amount of gallons in a full tank
    float mpgT = 23.5,   //average MPG in town
            mpgH = 28.9, //average MPG on highway
            distT,       //distance on full tank in town
            distH;       //distance on full tank on highway
    
    //Process/Calculations Here
    distT = mpgT*tankGln;
    distH = mpgH*tankGln;
    
    //Output Located Here
    cout<<"The distance traveled in town on a full tank of gas\n"
            "is "<<distT<<" miles."<<endl;
    cout<<"The distance traveled on the highway on a full tank\n"
            "of gas is "<<distH<<" miles."<<endl;

    //Exit
    return 0;
}

