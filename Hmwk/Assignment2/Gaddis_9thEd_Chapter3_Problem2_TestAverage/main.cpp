/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 11th, 2018, 4:49 PM
 * Purpose:  A program that asks for five test scores and calculates the average
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std;//namespace I/O stream library created

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    double score1, score2, score3, score4, score5, avg;

    //Initial Variables
    cout << "Enter the first test score: ";
    cin >> score1;
    cout << "Enter the second test score: ";
    cin >> score2;
    cout << "Enter the third test score: ";
    cin >> score3;
    cout << "Enter the fourth test score: ";
    cin >> score4;
    cout << "Enter the fifth test score: ";
    cin >> score5;
    
    //Map/Process Inputs to Outputs
    avg = (score1 + score2 + score3 + score4 + score5) / 5;
            
    //Display Outputs
    cout << "\nThe average is\n";
    cout << setprecision(1) << fixed;
    cout << avg << endl;
    
    //Exit program!
    return 0;
}