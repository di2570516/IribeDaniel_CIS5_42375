/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 19th, 2018, 9:48 PM
 * Purpose:  Determines which number is smaller or larger between 2 inputs
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int num1,   //First number to be entered
        num2;   //Second number to be entered
    
    //Initial Variables
    cout << "Please enter two numbers.\n";
    cout << "1st Number: ";
    cin >> num1;
    cout << "2nd Number: ";
    cin >> num2;
    
    //Map/Process Inputs to Outputs
    num1 > num2 ? num1 = num2 : num1 < num2;
            
    //Display Outputs
    cout << "The smaller number is " << num1 <<
            " and the bigger number is " << num2 << endl;
    //Exit program!
    return 0;
}