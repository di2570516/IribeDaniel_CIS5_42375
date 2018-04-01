/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 27, 2018, 10:55 PM
 * Purpose:  Calculates weight in newtons
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float mass,           //User's mass to be input
            wght;         //Weight to be converted from user's mass
    
    //Initial Variables
    cout << "This program will convert the mass of an object to display it's "
            "weight." << endl;
    cout << "Please input the mass to be converted: ";
    cin >> mass;
    
    //Map/Process Inputs to Outputs
    wght = mass * 9.8;      //9.8 is default set by the formula
    
    //Display Outputs
    if (mass > 1000)
        cout << "This object is too heavy to be converted.";
    else if (mass < 10)
        cout << "This object is too light to be converted." << endl;
    else
        cout << "The weight of this object is: " << wght << endl;
    
    //Exit program!
    return 0;
}