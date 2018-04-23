/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on April 1st, 2018, 9:09 PM
 * Purpose: Displays rise in ocean levels over the next 25 years
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int year;
    float ocnrise;
    ocnrise = 1.5;
    
    //Initialize Variables
    cout << "Ocean rise in MM       Year" << endl;
    std::cout << std::endl;
    
    //Process/Map inputs to outputs
    while(year < 26){
         if(year % 2 == 0){
         cout << ocnrise << "                 " << year;
        }else
        {
         cout << ocnrise << "                  " << year;   
    
        }
         ocnrise = ocnrise + 1.5; //rises by 1.5mm  
        std::cout << std::endl;
        year = year+1;
     }
    
    //Output data
    
    //Exit stage right!
    return 0;
}