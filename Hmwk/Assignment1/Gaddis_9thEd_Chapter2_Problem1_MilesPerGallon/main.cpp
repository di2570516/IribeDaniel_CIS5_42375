/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 4th, 2018, 7:20 PM
 * Purpose:  Calculates the number of miles/gallon the car gets
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   gallons,    //Gallons of Gasoline
            miles,      //Miles traveled
            mpg;        //Miles per gallon
    
    //Initial Variables
    gallons = 15;       //15 Gallons of Gasoline
    miles = 375;        //375 Miles
    
    //Map/Process Inputs to Outputs
    mpg = miles/gallons;
    
    //Display Outputs
    cout << "Gallons of Gasoline in car = " <<gallons<< endl;
    cout << "Miles traveled before refueling = " <<miles<< endl;
    cout << "Miles Per Gallon in car = " <<mpg<< endl;
    
    //Exit program!
    return 0;
}