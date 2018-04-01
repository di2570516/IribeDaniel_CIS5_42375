/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 19th, 2018, 10:56 PM
 * Purpose:  Converts seconds into minutes, hours, or days.
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
    const int MIN = 60,     //Minutes in seconds
              HOUR = 3600,  //Hours in seconds
              DAY = 86400;  //Days in seconds
    
    int secs,        //To hold seconds input
            SECMIN,  //Seconds translated into minutes
            SECHOUR, //Seconds translated into Hours
            SECDAY;  //Seconds translated into Days
    
    //Initial Variables
    cout << "Please enter a number of seconds to be translated into minutes, "
            "hours, or days\n";
    cin >> secs;
    
    //Map/Process Inputs to Outputs
    SECMIN = secs / MIN;
    SECHOUR = secs / HOUR;
    SECDAY = secs / DAY;
    
    //Display Outputs
    if (secs >= DAY)
        cout << "The number of day(s) is " << SECDAY << endl;
    else if (secs >= HOUR)
        cout << "The number of hours is " << SECHOUR << endl;
    else if (secs >= MIN)
        cout << "The number of minutes is " << SECMIN << endl;
    else if (secs < MIN)
        cout << "The number of seconds is " << secs << endl;
    
    //Exit program!
    return 0;
}