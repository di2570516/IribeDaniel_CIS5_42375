/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 11th, 2018, 6:20 PM
 * Purpose:  Calculates a theater's gross and net box office profit for a night
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <string>
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
    string  name;               //Movie Name
    int     adulsold, chilsold; //Tickets sold
    double  adultick = 10.00;
    double  chiltick = 6.00;
    double  gross, net, amount;
    
    //Initial Variables
    cout << "Please enter the name of the movie: ";
    getline(cin, name);
    cout << "Please enter the amount of adult tickets sold: ";
    cin >> adulsold;
    cout << "Please enter the amount of child tickets sold: ";
    cin >> chilsold;
    
    //Map/Process Inputs to Outputs
    gross = (adulsold*adultick)+(chilsold*chiltick);
    net = gross*.2;
    amount = gross - net;
    
    //Display Outputs
    cout << setprecision(2) << fixed;
    cout << "\nMovie Name: " << setw(31) << "\"" << name << "\"" << endl;
    cout << "Adult Tickets Sold:" << setw(28) << adulsold << endl;
    cout << "Child Tickets Sold:" << setw(28) << chilsold << endl;
    cout << "Gross Box Office Profit: " << setw(18) << "$" << gross << endl;
    cout << "Net Box Office Profit: " << setw(20) << "$" << net << endl;
    cout << "Amount Paid to Distributor: " << setw(15) << "$" << amount << endl;

    //Exit program!
    return 0;
}