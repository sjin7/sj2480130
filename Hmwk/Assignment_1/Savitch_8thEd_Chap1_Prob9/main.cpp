/* 
 * File:   Savitch_8thEd_Chap1_Prob9
 * Author: Shen Jin
 * Created on June 25, 2014, 10:36 PM
 */

#include <iostream>

using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    cout << "This program will calculate how far(in ft) an object would "
            "fall(freefall) according to the time(in seconds) you enter \n";
    
    int T, D, a;
    a = 32;
    //T for time
    //D for distance
    //a for acceleration
    
    cout << "Time: ";
    cin >> T;
    
    //Calculation
    D = (a * T * T)/2;
    
    cout << "The object would drop ";
    cout << D;
    cout << "ft for ";
    cout << T;
    cout << "s.\n";
    
            
    return 0;
}

