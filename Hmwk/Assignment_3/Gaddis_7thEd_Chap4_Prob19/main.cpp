/* 
 * File:   Gaddis_7thEd_Chap4_Prob19
 * Author: Shen Jin
 * Created on July 4, 2014, 3:02 PM
 */

//System Level libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Defined Libraries

//Global Constants
float speed1 = 258.0,
      speed2 = 331.5,
      speed3 = 972.0,
      speed4 =1270.0;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variable
    //Input
    int sec;
    int choice; // Input 1-4 from menu
    float D; //Distance traveled
    
    //Constants for choice
    const int no2 = 1,
              air = 2,
               he = 3,
                h = 4;
    
    //Set up menu and collect choice
    cout << "Choose of the four gases and input the time it takes to travel,\n";
    cout << "then you will see the distance." << endl;
    cout << "1. Carbon Dioxide." << endl;
    cout << "2. Air." << endl;
    cout << "3. Helium." << endl;
    cout << "4. Hydrogen." << endl;
    cin >> choice;
    
    switch (choice)
    {
        case no2:
            cout << "Time(sec) : ";
            cin >> sec;
              if (sec<0 || sec >30)
        {
            cout << "Please give a value in between 0s and 30s."<< endl;
        }
              else
              {
            D = sec * speed1;
            cout << "Distance: " << D << "m" << endl;
              }
            break;
        case air:
            cout << "Time(sec) : ";
            cin >> sec;
              if (sec<0 || sec >30)
        {
            cout << "Please give a value in between 0s and 30s."<< endl;
        }
              else
              {
            D = sec * speed2;
            cout << "Distance: " << D << "m" << endl;
              }
            break;
        case he:
            cout << "Time(sec) : ";
            cin >> sec;
              if (sec<0 || sec >30)
        {
            cout << "Please give a value in between 0s and 30s."<< endl;
        }
              else
              {
            D = sec * speed3;
            cout << "Distance: " << D << "m" << endl;
              }
            break;
        case h:
            cout << "Time(sec) : ";
            cin >> sec;
              if (sec<0 || sec >30)
        {
            cout << "Please give a value in between 0s and 30s."<< endl;
        }
              else
              {
            D = sec * speed4;
            cout << "Distance: " << D << "m" << endl;
              }
            break;
        default:
            cout << "Invalid Entry." << endl;
    }
    
    return 0;
}

