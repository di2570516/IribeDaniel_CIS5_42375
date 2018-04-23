/* 
 * File:   main.cpp
 * Author: Dniel Iribe
 * Created on April 19, 2018, 10:45 PM
 * Purpose:  Project 1
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv)
{
    //Declare Variables
    const int minVal = 1;       //Minimum value for this Blackjack test
    const int maxVal = 11;      //Maximum value for this Blackjack test
    int dcard1;                 //Dealer's 1st Card Pull
    int dcard2;                 //Dealer's 2nd Card Pull
    int dcardn;                 //Dealer's New Card Pull
    int pcard1;                 //Player's 1st Card Pull
    int pcard2;                 //Player's 2nd Card Pull
    int pcard3;                 //Player's 3rd Card Pull
    int pcard4;                 //Player's 4th Card Pull
    int pcard5;                 //Player's 5th Card Pull
    int choice = 0;             //Player's Hit or Stand choice
    int dtotal;                 //Dealer's total card count
    int ptotal;                 //Player's total card count
    
    //Initialize Variables
    unsigned seed = time(0);        //Seeding based on System's time
    srand(seed);                    //Srandom seeded via system's time
    
    //Process/Map inputs to outputs
    dcard1 = (rand() % (maxVal - minVal + 1)) + minVal;      //Formula for srand card pull
    dcard2 = (rand() % (maxVal - minVal + 1)) + minVal;      //Formula for srand card pull
    pcard1 = (rand() % (maxVal - minVal + 1)) + minVal;      //Formula for srand card pull
    pcard2 = (rand() % (maxVal - minVal + 1)) + minVal;      //Formula for srand card pull

    //Output data
    cout << "The dealer's first 2 cards are: " << endl;
    cout << "-----------------------------" << endl;
    cout << dcard1 << endl;
    cout << dcard2 << endl;
    dtotal = dcard1 + dcard2;
    cout << "The dealer's card total is: " << dtotal << endl;
    cout << "\nThe player's first 2 cards are: " << endl;
    cout << "-----------------------------" << endl;
    cout << pcard1 << endl;
    cout << pcard2 << endl;
    ptotal = pcard1 + pcard2;
    cout << "Your card total = " << ptotal << endl;
    if (ptotal == 21)
        cout << "BLACKJACK! YOU WIN!" << endl;
    else
    {
        cout << "\nWould you like to Hit or Stand? (Hit = 1, Stand = 0)" << endl;
        cin >> choice;
        if (choice == 1)
        {
            pcard3 = (rand() % (maxVal - minVal + 1)) + minVal;      //Formula for srand card pull
            ptotal = ptotal + pcard3;
            cout << "Your current card total = " << ptotal << endl;
            if (ptotal > 21)
                cout << "You've Busted. You lose." << endl;
            else
            {
                cout << "\nWould you like to Hit or Stand? (Hit = 1, Stand = 0)" << endl;
                cin >> choice;
                if (choice == 1)
                {
                    pcard4 = (rand() % (maxVal - minVal + 1)) + minVal;  //Formula for srand card pull
                    ptotal = ptotal + pcard4;
                    cout << "Your current card total = " << ptotal << endl;
                    if (ptotal > 21)
                        cout << "You've Busted. You lose." << endl;
                    else
                    {
                        cout << "\nWould you like to Hit or Stand (Hit = 1, Stand = 0)" << endl;
                        cin >> choice;
                        if (choice == 1)
                        {
                            pcard5 = (rand() % (maxVal - minVal +1)) + minVal;   //Formula for srand card pull
                            ptotal = ptotal + pcard5;
                            cout << "Your current card total = " << ptotal << endl;
                            if (ptotal > 21)
                                cout << "You've Busted. You lose." << endl;
                        }
                        else
                        {
                            cout << "\nYou have kept your total card count: " << ptotal << endl;
                        }
                    }
                }
                else
                {
                    cout << "\nYou have kept your total card count: " << ptotal << endl;
                }
            }
        }
        else
        {
            cout << "\nYou have kept your total card count: " << ptotal << endl;
        }
    }
    if (ptotal > 21)
        cout << "\nSorry. You have lost. The game is over." << endl;
    else
    {
        while (dtotal < 17)
        {
            dcardn = (rand() % (maxVal - minVal +1)) + minVal;   //Formula for srand card pull
            dtotal = dtotal + dcardn;
            cout << "\nThe new dealer's card total is: " << dtotal << endl;
        }
        if (dtotal > 21)
            cout << "\mThe dealer has busted! You win!" << endl;
        else
        {
            if (ptotal > dtotal)
                cout << "\n-----------------------------------------------------\n"
                        "Your card count is higher than the dealer's. You win!" << endl;
            else if (dtotal > ptotal)
                cout << "\n-----------------------------------------------------\n"
                        "Your card count is lower than the dealer's. You lose." << endl;
            else
                cout << "\n----------------------------------\n"
                        "Both card counts are equal. Push." << endl;
        }
    }
    //Exit stage right!
    return 0;
}