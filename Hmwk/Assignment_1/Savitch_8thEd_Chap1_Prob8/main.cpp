/* 
 * File:   Savitch_8thED_Chap1_Prob8
 * Author: Shen Jin
 * Created on June 25, 2014, 2:37 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    int quart, dime, nikl, cent;
    cent = quart * 25 + dime * 10 + nikl * 5;
    
    cout << "This program will help you calculate the change you have"
            "into cents.\n";
    
    cout << "Quarters: \n";
    cin >> quart;
    
    cout << "Dimes: \n";
    cin >> dime;
    
    cout << "Nickels: \n";
    cin >> nikl;
    
    cout << "You have ";
    cout << cent;
    cout << " cents in total." << endl;
    
    
    
    
    
    return 0;
}

