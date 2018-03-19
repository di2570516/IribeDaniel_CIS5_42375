/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 4th, 2018, 6:39 PM
 * Purpose:  Calculates and displays an employees annual pay
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   payAmount=2200,  //Holds the amount of pay every 2 weeks
            payPeriods=26, //Holds the number of pay periods per year
            annualPay;  //Holds the employee's total pay
            
    //Map/Process Inputs to Outputs
    annualPay = payAmount * payPeriods;
    
    //Display Outputs
    cout << "Biweekly Pay =  " <<payAmount<< "$" <<endl;
    cout << "Weeks/year = " <<payPeriods<< "" <<endl;
    cout << "Annual pay = " <<annualPay<< "$" <<endl;
    
    //Exit program!
    return 0;
}