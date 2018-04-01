/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 19th, 2018, 10:14 PM
 * Purpose:  Converts Numbers into Roman Numerals
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
    int choice;
    
    //Initial Variables
    cout << "Please enter a number from 1 - 10.\n";
    cin >> choice;
    switch (choice)
    //Map/Process Inputs to Outputs
    {
        case 1: cout << "You entered I.\n";
        break;
        case 2: cout << "You entered II.\n";
        break;
        case 3: cout << "You entered III.\n";
        break;
        case 4: cout << "You entered IV.\n";
        break;
        case 5: cout << "You entered V.\n";
        break;
        case 6: cout << "You entered VI.\n";
        break;
        case 7: cout << "You entered VII.\n";
        break;
        case 8: cout << "You entered VIII.\n";
        break;
        case 9: cout << "You entered IX.\n";
        break;
        case 10: cout << "You entered X.\n";
        break;
        default:  cout << "You did not enter a number from 1 - 10!\n";
    }
    //Display Outputs
    
    //Exit program!
    return 0;
}