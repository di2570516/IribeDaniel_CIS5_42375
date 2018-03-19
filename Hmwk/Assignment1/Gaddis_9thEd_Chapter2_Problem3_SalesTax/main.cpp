/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 4th, 2018, 5:43 PM
 * Purpose:  Compute the total sales tax on a $95 purchase
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   purch,          //Purchase Price
            statetx,        //State Tax
            totstatetx,     //Total State Tax
            countrytx,      //Country Tax
            totcountrytx,   //Total Country Tax
            totaltx,        //Total Sales Tax
            totsale;        //Total Sale Amount
    
    //Initial Variables
    purch=95;       //Purchase = $95
    statetx=.04;    //State Tax = 4%
    countrytx=.02;  //Country Tax = 2%
    
    //Map/Process Inputs to Outputs
    totstatetx = statetx * purch;
    totcountrytx = countrytx * purch;
    totaltx = (totstatetx + totcountrytx);
    totsale = purch + totaltx;
    
    //Display Outputs
    cout << "Purchase = " <<purch<< "$" <<endl;
    cout << "Total State Tax = " <<totstatetx<< "$" <<endl;
    cout << "Total Country Tax = " <<totcountrytx<< "$" <<endl;
    cout << "Total Sales Tax = " <<totaltx<< "$" <<endl;
    cout << "Total Sale = " <<totsale<< "$" <<endl;
    
    //Exit program!
    return 0;
}