/* 
 * File:   Gaddis_7thEd_Chap3_Prob4
 * Author: Shen Jin
 * Created on June 28, 2014, 3:37 PM
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

    //Declare Variables
    string M1, M2, M3;
    float R1, R2, R3;
    float avg;
    
    cout << "This program will calculate the average \n"
            "rainfall for any three months.\n";
    
    cout << "First Month: "; 
    cin >> M1;
    cout << "Rainfall(in): ";
    cin >> R1;
    
    cout << "------------------\n";
    
    cout << "Second Month: ";
    cin >> M2;
    cout << "Rainfall(in): ";
    cin >> R2;
    
    cout << "------------------\n";
    
    cout << "Third Month: ";
    cin >> M3;
    cout << "Rainfall(in): ";
    cin >> R2;
    
    cout << "------------------\n";
     
     //Calculation
    avg = (R1 + R2 + R3) /3;
    cout <<fixed << showpoint << setprecision(2) << endl;  
    cout << "The average rainfall for " 
         << M1 << ", " << M2 << " and " << M3
         << " is " << avg << "." << endl;
             
    return 0;
}

