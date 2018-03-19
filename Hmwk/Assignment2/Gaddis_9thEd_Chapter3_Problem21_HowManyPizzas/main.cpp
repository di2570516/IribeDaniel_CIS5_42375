/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 12th, 2018, 8:40 PM
 * Purpose:  Calculates and displays the number of slices that can be taken
 *           from a pizza.
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>    //Calculations
#include <iomanip>  //Used to manipulate data
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
#define pi 3.14159      //Pi
#define slicarea 14.125 //Area for 1 slice
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   diam,           //Diameters to be entered
            r,              //Radius
            slicenumb,      //Number of slices
            pplslice = 4,   //Slices per person
            people,        //Number of people per pizza
            pizzas,         //Number of pizzas to be ordered
            areap;          //Area of pizza to be calculated
    
    //Initial Variables
    cout << "This program calculates how many pizzas will be ordered for your party.";
    cout << "\nPlease enter how many people are attending: ";
    cin >> people;
    cout << "Please enter the diameter of the pizza in inches: ";
    cin >> diam;
    
    //Map/Process Inputs to Outputs
    r = diam / 2;                   //Formula for radius
    areap = pi * (r*r);             //Formula for Area of pizza
    slicenumb = areap / slicarea;   //Formula for number of pizza slices
    pizzas = (pplslice*people) / slicenumb;  //Formula for number of pizzas to be ordered
    
    //Display Outputs
    cout << setprecision (1) << fixed;
    cout << "\nThe number of pizzas to be purchased is: " << pizzas <<
            endl;
    
    //Exit program!
    return 0;
}