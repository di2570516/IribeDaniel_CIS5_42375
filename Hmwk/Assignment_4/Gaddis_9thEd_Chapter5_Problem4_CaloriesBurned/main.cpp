/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on April 1st, 2018, 9:24 PM
 * Purpose:  Displays calories burned after 5 minute increments
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int mins;
    float clries;
    clries = 0;
    mins = 5;
    
    //Initialize Variables
    cout << "Calories burned            minutes" << endl;
    std::cout << std::endl;

    //Process/Map inputs to outputs
         while (mins < 31){
    
         cout << clries << "                       " << mins;
        clries = clries + 3.6; //3.6 cals per minute
        std::cout << std::endl;
        mins = mins+5;
     }

    //Output data
    
    //Exit stage right!
    return 0;
}