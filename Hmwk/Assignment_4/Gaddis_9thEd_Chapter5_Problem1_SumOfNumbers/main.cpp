/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on April 1st, 2018, 3:06 PM
 * Purpose:  Sums all of the integers up to the user's entered integer
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int numbr,      //Number to be entered by the user
            sum;    //The sum of all of the integers
    
    //Initial Variables
    cout << "This program will get the sum of all of the integers up to the "
            "integer entered.\n";
    cout << "Please enter a positive integer value: ";
    cin >> numbr;
    while (numbr < 0)
    {
        cout << "ERROR: Negative numbers will not work.\n";
        cout << "Please enter only a positive integer value: ";
        cin >> numbr;
    }
    for (int count = 1; count <= numbr; count++)
    {
        sum += count;   //Sums all of the integers calculated
    }
    
    //Map/Process Inputs to Outputs
    cout << "The sum of all values is: " << sum << endl;

    //Exit program!
    return 0;
}