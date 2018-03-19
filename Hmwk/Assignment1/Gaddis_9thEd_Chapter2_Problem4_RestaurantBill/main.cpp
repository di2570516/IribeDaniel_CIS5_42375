/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 4th, 2018, 6:14 PM
 * Purpose:  Computes the tax and tip on a restaurant bill and displays
 *           the total
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   cost = 88.67f,   //Cost of the meal
            tax = .0675f,    //Tax percentage on the meal
            tip = .2f,       //Tip percentage on meal cost
            tottax,         //Total tax amount of meal cost
            tottip,         //Total tip amount of meal cost
            totcost;        //Total cost of meal
    
    //Map/Process Inputs to Outputs
    tottax = tax * cost;
    tottip = tip * cost;
    totcost = tottip + tottax + cost;
    
    //Display Outputs
    cout << "Cost of the meal = " <<cost<< "$" <<endl;
    cout << "Tax amount = " <<tottax<< "$" <<endl;
    cout << "Tip amount = " <<tottip<< "$" <<endl;
    cout << "Total Bill = " <<totcost<< "$" <<endl;
    
    //Exit program!
    return 0;
}