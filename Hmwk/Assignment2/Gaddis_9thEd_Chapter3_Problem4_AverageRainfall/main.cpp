/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 11th, 2018, 5:21 PM
 * Purpose:  Calculates the average rainfall for three months
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
#include <string>
using namespace std;//namespace I/O stream library created

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string month1, month2, month3;
    double rain1, rain2, rain3, avg;
    
    //Initial Variables
    cout << "This program will calculate the average rainfall (in inches) ";
    cout << "for three seperate months.\n";
    cout << "\nPlease enter the first month: ";
    cin >> month1;
    cout << "Next enter the amount of rain (in inches) that fell: ";
    cin >> rain1;
    cout << "\nPlease enter the second month: ";
    cin >> month2;
    cout << "Next enter the mount of rain (in inches) that fell: ";
    cin >> rain2;
    cout << "\nPlease enter the third month: ";
    cin >> month3;
    cout << "Next enter the amount of rain (in inches) that fell: ";
    cin >> rain3;
    
    //Map/Process Inputs to Outputs
    avg = (rain1 + rain2 + rain3) / 3;
    
    //Display Outputs
    cout << "\nThe average rainfall for ";
    cout << setprecision(2) << fixed;
    cout << month1 << ", " << month2 << ", and ";
    cout << month3 << " is " << avg << " inches.";
    
    //Exit program!
    return 0;
}