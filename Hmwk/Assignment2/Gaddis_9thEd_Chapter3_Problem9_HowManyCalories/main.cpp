/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 11th, 2018, 10:38 PM
 * Purpose:  Asks how many cookies were eaten and reports how many calories were
 *           consumed
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int bag = 30;       //Amount of cookies in a bag
    int servs = 10;     //Servings
    int serv1 = 300;    //Calories per serving
    int cookies;        //Amount of cookies to be entered
    int calories;
    //Initial Variables
    cout << "Please input how many cookies were eaten: ";
    cin >> cookies;
    cout << endl;
    
    //Map/Process Inputs to Outputs
    calories = cookies*100;
            
    //Display Outputs
    cout << "Amount of calories consumed = " << calories << endl;
    //Exit program!
    return 0;
}