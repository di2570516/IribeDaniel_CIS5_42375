/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 4th, 2018, 6:47 PM
 * Purpose:  Calculates and displays the rise of the ocean level
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   risingoceanlevel,   //The ocean level measured in millimeters
            multiply5,          //5* Multiplier
            multiply7,          //7* Multiplier
            multiply10,         //10* Multiplier
            oceanlevelyr5,      //The ocean level in 5 years
            oceanlevelyr7,      //The ocean level in 7 years
            oceanlevelyr10;     //The ocean level in 10 years
    
    //Initial Variables
    risingoceanlevel = 1.5;     //Yearly ocean level rise in millimeters
    multiply5 = 5;              //5 Value added
    multiply7 = 7;              //7 Value added
    multiply10 = 10;            //10 Value added
    
    //Map/Process Inputs to Outputs
    oceanlevelyr5 = risingoceanlevel * multiply5;
    oceanlevelyr7 = risingoceanlevel * multiply7;
    oceanlevelyr10 = risingoceanlevel * multiply10;
            
    //Display Outputs
    cout << "Ocean levels rise in 5 years = " <<oceanlevelyr5<< "millimeters" <<endl;
    cout << "Ocean levels rise in 7 years = " <<oceanlevelyr7<< "millimeters" <<endl;
    cout << "Ocean levels rise in 10 years = " <<oceanlevelyr10<< "millimeters" <<endl;
    
    //Exit program!
    return 0;
}