/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 4th, 2018, 7:02 PM
 * Purpose:  Calculates and displays the Amounts in Sales for 5 items
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   item1,      //Item 1
            item2,      //Item 2
            item3,      //Item 3
            item4,      //Item 4
            item5,      //Item 5
            subtotal,   //Subtotal
            tax,        //Tax
            tottax,     //Total Tax
            totsale;    //Total Sale
    
    //Initial Variables
    item1 = 15.95;      //Price of Item 1
    item2 = 24.95;      //Price of Item 2
    item3 = 6.95;       //Price of Item 3
    item4 = 12.95;      //Price of Item 4
    item5 = 3.95;       //Price of Item 5
    tax = .07;          //7% Tax
    
    //Map/Process Inputs to Outputs
    subtotal = item1 + item2 + item3 +item4 + item5;
    tottax = tax * subtotal;
    totsale = tottax + subtotal;
    
    //Display Outputs
    cout << "Price of item 1 = " <<item1<< "$" <<endl;
    cout << "Price of item 2 = " <<item2<< "$" <<endl;
    cout << "Price of item 3 = " <<item3<< "$" <<endl;
    cout << "Price of item 4 = " <<item4<< "$" <<endl;
    cout << "Price of item 5 = " <<item5<< "$" <<endl;
    cout << "Subtotal = " <<subtotal<< "$" <<endl;
    cout << "Total Tax = " <<tottax<< "$" <<endl;
    cout << "Total Sale = " <<totsale<< "$" <<endl;
    
    //Exit program!
    return 0;
}