/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on April 8th, 2018, 9:37 PM
 * Purpose:  This Program runs a Menu for different Problems
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int choice;     //Selection made by user
    
    while (true)
    {
        cout << "Please choose a number from the list below:" << endl;
        cout << "1. Sum of Numbers." << endl;
        cout << "2. Characters For The ASCII Codes" << endl;
        cout << "3. Ocean Levels" << endl;
        cout << "4. Calories Burned" << endl;
        cout << "5. Quit" << endl;
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "You've selected Problem 1." << endl;
                int numbr,      //Number to be entered by the user
                        sum;    //The sum of all of the integers
                //Initialize Variables
                cout << "This program will get the sum of all of the integers up to the "
                        "integer entered.\n";
                cout << "Please enter a positive integer value: ";
                cin >> numbr;
                while (numbr < 0)
                {
                    cout << "ERROR: Negative numbers will not work.\n";
                    cout << "Please enter only a positive integer value: ";
                    cin >> numbr;
                }
                for (int count = 1; count <= numbr; count++)
                {
                    sum += count;   //Sums all of the integers calculated
                }
                //Map/Process Inputs to Outputs
                cout << "The sum of all values is: " << sum << endl;
                break;
            case 2:
                cout << "You've selected Problem 2." << endl;
                //Declare Variables
                int counting,
                        a;
                counting = 15;      //Counts when 16 chars has been made on line
                //Initial Variables
                for(int a = 0; a < 127; ++a) //Index of char is 0 - 127
                //Map/Process Inputs to Outputs
                    if (counting > 0)
                    {
                        std::cout << char(a) << " "; // print it as a char
                        counting = counting - 1;    //keeps track of when line has 16
                    }
                    else
                    {
                        counting = 15;
                        std::cout << std::endl;     //Forces next code to a new line
                        std::cout << char(a) << " "; // print it as a char
                    }
                break;
            case 3:
                cout << "You've selected Problem 3." << endl;
                //Declare Variables
                int year;
                float ocnrise;
                ocnrise = 1.5;
                //Initialize Variables
                cout << "Ocean rise in MM       Year" << endl;
                std::cout << std::endl;
                //Process/Map inputs to outputs
                while(year < 26)
                {
                    if(year % 2 == 0)
                    {
                        cout << ocnrise << "                 " << year;
                    }
                    else
                    {
                        cout << ocnrise << "                  " << year;   
                    }
                    ocnrise = ocnrise + 1.5; //rises by 1.5mm  
                    std::cout << std::endl;
                    year = year+1;
                }
                break;
            case 4:
                cout << "You've selected Problem 4." << endl;
                //Declare Variables
                int mins;
                float clries;
                clries = 0;
                mins = 5;
                //Initialize Variables
                cout << "Calories burned            minutes" << endl;
                std::cout << std::endl;
                //Process/Map inputs to outputs
                while (mins < 31)
                {
                    cout << clries << "                       " << mins;
                    clries = clries + 3.6; //3.6 cals per minute
                    std::cout << std::endl;
                    mins = mins+5;
                }
                break;
            case 5:
                cout << "Now terminating the program." << endl;
                return 0;
            default:
                cout << "Error. Please select a number from the menu." << endl;
        }
    }
    //Exit stage right!
    return 0;
}