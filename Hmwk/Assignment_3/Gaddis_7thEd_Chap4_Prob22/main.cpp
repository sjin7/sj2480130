/* 
 * File:   Savitch_8thEd_Chap1_Prob22
 * Author: Shen Jin
 * Created on July 7, 2014, 12:29 AM
 */

//System Library
#include <iostream>
#include <iomanip>

using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    //Rate per minute at different time of the day
    const float r1 = 1.2e-1f, r2 = 5.5e-1f, r3 = 3.5e-1f;
    //Declare Input Variables
    float time; // The starting time for the calls
    int min; // How many minutes the call lasted
    
    //Declare Output Variable
    float cost; 
    
    //Get the starting time and the time length of the call
    cout << "What time did the call started?" << endl;
    cin >> time;
    cout << "How many minutes was the call for?" << endl;
    cin >> min;
    
    //Set the decimal places for output
    cout << fixed << showpoint << setprecision(2) << endl;
    
    //Use static_cast<int> to subtract the integer part of a float
    if (time > 24.00 || time < 0 || time-static_cast<int>(time) > 0.59)
    {
        cout << "Invalid Entry for the time." << endl;
    }
    else if (time>=0.00 && time<=6.59)
    {
        cost = min * r1;
        cout << "Cost: &" << cost << endl;
    }
    else if (time>=7.00 && time<=19.00)
    {
         cost = min * r2;
         cout << "Cost: &" << cost << endl;
    }
    else 
    {
         cost = min * r3;
         cout << "Cost: &" << cost << endl;
    }
   
    return 0;
}

