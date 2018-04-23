/* 
 * File:   main.cpp
 * Author: Daniel Iribe
 * Created on March 11th, 2018, 8:22 PM
 * Purpose:  A simple word game program
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <string>
using namespace std;//namespace I/O stream library created

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string name;        //Name to be entered
    int age;         //Age to be entered
    string city;        //City to be entered
    string college;     //College to be entered
    string profession;  //Profession to be entered
    string animal;      //Animal to be entered
    string petname;     //Pet name to be entered
    
    //Initial Variables
    cout << "This is a simple Word Game!" << endl;
    cout << "\nPlease enter your name: ";
    getline(cin, name);
    cout << "Please enter your age: ";
    cin >> age;
    cin.ignore();
    cout << "\nPlease enter the name of a city: ";
    getline(cin, city);
    cout << "Please enter the name of a college: ";
    getline(cin, college);
    cout << "Please enter a profession: ";
    getline(cin, profession);
    cout << "Please enter a type of animal: ";
    getline(cin, animal);
    cout << "Please enter a pet's name: ";
    getline(cin, petname);
    
    //Map/Process Inputs to Outputs
    
    //Display Outputs
    cout << "There once was a person named " << name << " who lived in a city "
            "called " << city << ". At the age of " << age << ", " << name <<
            " went to college at " << college << ". " << name <<
            " graduated and went to work as a " << profession <<
            ". Then, " << name << " adopted a(n) " << animal << " named "
            << petname << ". They both lived happily ever after!";
    //Exit program!
    return 0;
}