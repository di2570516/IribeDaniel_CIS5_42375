/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on April 1st, 2018, 8:59 PM
 * Purpose:  Displays the characters for the ASCII codes 0 - 127
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int counting,
            a;
    counting = 15;      //Counts when 16 chars has been made on line
    
    //Initial Variables
    for(int a = 0; a < 127; ++a) //Index of char is 0 - 127
        
    
    //Map/Process Inputs to Outputs
        if (counting > 0){
            std::cout << char(a) << " "; // print it as a char
            counting = counting - 1;    //keeps track of when line has 16
            
        }else
        {   counting = 15;
            std::cout << std::endl;     //Forces next code to a new line
            std::cout << char(a) << " "; // print it as a char
        }
    
    //Exit program!
    return 0;
}