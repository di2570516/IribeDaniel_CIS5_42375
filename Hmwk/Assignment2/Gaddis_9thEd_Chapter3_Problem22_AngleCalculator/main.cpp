/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 11th, 2018, 9:14 PM
 * Purpose:  Displays the sine, cosine, and tangent of an angle.
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>    //Sine, Cosine, Tangent
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
#define pi 3.14159
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    double  sine,            //Sine
            cosine,         //Cosine
            tangent,       //Tangent
            angle;        //Angle
            
    //Initial Variables
    cout << "This program will calculate the sine, cosine, and tangent of an angle.";
    cout << "\nPlease enter an angle, entered in radians: ";
    cin >> angle;
    
    //Map/Process Inputs to Outputs
    sine = sin(angle);
    cosine = cos(angle);
    tangent = tan(angle);
    
    //Display Outputs
    cout << setprecision(4) << fixed;
    cout << "\nSine = " << sine << endl;
    cout << "Cosine = " << cosine << endl;
    cout << "Tangent = " << tangent << endl;
    
    //Exit program!
    return 0;
}