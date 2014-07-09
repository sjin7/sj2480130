/* 
 * File:   Gaddis_7thEd_Chap5_Prob1
 * Author: Shen Jin
 * Created on July 8, 2014, 11:59 PM
 */

//System Library
#include <iostream>
#include <iomanip>

using namespace std;

//User Defined Libraries

//Global Constants
float r = 1.5; // The ocean level raises by 1.5ml/yr

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    //Initialization
    int stYr = 1; // Starting year
    int edYr = 25; // Ending year
    float totR = 0; // Total raise of the ocean level
    int num; // Number of years
    
    //Set numeric output formatting
    cout << fixed << showpoint << setprecision(1) << endl;
    cout << "Year             Ocean Level Increase(ml)" << endl;
    cout << "-----------------------------------------" << endl;
    
    for (num=stYr; num<=edYr; num++)
    {
        totR +=r;
        cout << num << setw(20) << totR << endl;
    }
    
    return 0;
}

