/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 11th, 2018, 11:09 PM
 * Purpose:  Converts US Dollars to Japanese Yen and Euros
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //used for setprecision
using namespace std;//namespace I/O stream library created

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
#define YEN_PER_DOLLAR 106.65;
#define EUROS_PER_DOLLAR 0.81;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    double ydollar;     //Dollar amount to conver to Yen
    double edollar;     //Dollar amount to conver to Euros
    double yconv;       //Yen conversion amount
    double econv;       //Euros conversion amount
    
    //Initial Variables
    cout << "This program calculates and converts exchange rates between "
            "the USD to Yen as well as USD to Euros." << endl;
    cout << "Please enter a dollar amount to convert to Yen: ";
    cin >> ydollar;
    cout << "Please enter a dollar amount to convert to Euros: ";
    cin >> edollar;
    
    //Map/Process Inputs to Outputs
    yconv = ydollar * YEN_PER_DOLLAR;
    econv = edollar * EUROS_PER_DOLLAR;
    
    //Display Outputs
    cout << "\nExchange rates" << endl;
    cout << "----------------" << endl;
    cout << setprecision(2) << fixed;
    cout << ydollar << " Dollar = " << yconv << endl;
    cout << edollar << " Dollar = " << econv << endl;
    //Exit program!
    return 0;
}