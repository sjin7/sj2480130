/* 
 * File:   Gaddis_7thEd_Chap3_Prob1
 * Author: Shen Jin
 * Created on June 28, 2014, 2:28 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Defined Libraries

//Global Constants

// Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    float fultk, miles, mpg;
    
    cout << "This program will help you calculate your MPG for your car.\n";
    
    cout << "How many gallons of gas can your car hold?\n";
    cout << "Full-tank: ";
    cin >> fultk;
    
    cout << "How many miles can your car run with full tank of gas?\n";
    cout << "Miles: ";
    cin >> miles;
    
    //Calculation
    mpg = miles / fultk;
    cout << fixed << setprecision(2) << "MPG: " << mpg << endl;
    
    return 0;
}

