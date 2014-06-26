/* 
 * File:   Savitch_8thED_Chap1_Prob8
 * Author: Shen Jin
 * Created on June 25, 2014, 2:37 PM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    int quart, dime, nik, cent; //Declaration
    
    cout << "This program will help you calculate the change you have"
            "into cents.\n";
    
    //Prompt user
    cout << "Quarters: "; 
    cin >> quart;
    
    cout << "Dimes: ";
    cin >> dime;
    
    cout << "Nickels: ";
    cin >> nik;
    
    //Calculation
    cent = quart * 25 + dime * 10 + nik * 5; 
    cout << "You have ";
    cout << cent;
    cout << " cents in total." << endl;
    
    
    return 0;
}

