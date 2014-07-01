/* 
 * File:   Gaddis_7thEd_Chap3_Prob8
 * Author: Shen Jin
 * Created on July 1, 2014, 10:22 AM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Defined Libraries

//Global Constants

// Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    float perc = 80e-2f, cost, ins;
    // cost = the replacement cost 
    // ins = minimum insurance
            
    cout << "What would be the replacement cost for your home?" << endl;
    cin >> cost;
   
    //Calculation
    ins = cost * perc;
    cout << "We suggest that the minimum amount of insurance"
            "you should purchase is " << ins << "." << endl;
    

    return 0;
}

