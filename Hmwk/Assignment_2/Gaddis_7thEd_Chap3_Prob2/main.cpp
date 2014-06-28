/* 
 * File:   Gaddis_7thEd_Chap3_Prob2
 * Author: Shen Jin
 * Created on June 28, 2014, 2:46 PM
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
    int A, B, C;
    float income;
    
    cout << "How many tickets for each class of seats were sold?\n";
    cout << "Class A: ";
    cin >> A;
    cout << "Class B: ";
    cin >> B;
    cout << "Class C: ";
    cin >> C;
    
    //Calculation
    income = A*15 + B*12 + C*9;
    
    cout << "The amount of income generated from ticket \n"
            "sales is $" << fixed << setprecision(2) << showpoint 
            << income << "." << endl;
    
    return 0;
}

