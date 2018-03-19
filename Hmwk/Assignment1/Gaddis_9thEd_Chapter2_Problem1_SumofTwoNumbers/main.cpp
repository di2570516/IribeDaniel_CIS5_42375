/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 4th, 2018, 5:32 PM
 * Purpose:  Calculate and display the sum of two numbers
 */

//System Libraries
#include <iostream>
using namespace std;

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float   int1 = 50,  //Integer 1 = 50
            int2 = 100, //Integer 2 = 100
            total;      //Total sum
    
    // Calculate the total
    total = int1 + int2;
    
    //Output data
    cout << "Integer 1 = " <<int1<< " " << endl;
    cout << "Integer 2 = " <<int2<< " " << endl;
    cout << "Total = " <<total<< " " << endl;
    //Exit stage right!
    return 0;
}