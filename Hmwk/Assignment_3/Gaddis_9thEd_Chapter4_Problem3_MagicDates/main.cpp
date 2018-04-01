/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 19th, 2018, 10:39 PM
 * Purpose:  Determines if the day times the month equals the year
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
    int month,  //The users chosen month
        day,    //The users chosen day
        year;   //The users chosen year
    
    //Initial Variables
    cout << "This program determines whether or not your chosen year is magical.\n";
    cout << "Please enter a month (in numeric form): ";
    cin >> month;
    cout << "Please enter a day (in numberic form): ";
    cin >> day;
    cout << "Please enter a year(in two-digit form): ";
    cin >> year;
    if (month * day == year)
        
    //Map/Process Inputs to Outputs
        cout << year << " is magical!\n";
    else
        cout << year << " is normal.\n";

    //Display Outputs
    
    //Exit program!
    return 0;
}