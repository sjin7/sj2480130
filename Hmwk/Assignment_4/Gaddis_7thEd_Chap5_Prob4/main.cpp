/* 
 * File:   Gaddis_7thEd_Chap5_Prob1
 * Author: Shen Jin
 * Created on July 9, 2014, 12:14 AM
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
    //Initialization
    int minIncr = 5; //Every 5min
    float cal = 3.9; // Burns 3.9 calories per min
    int stT = 10; //Starts to increase at 10min
    int edT = 30; //Ends at 30min
    float totC = 39.0; // 39 calories were burnt in 10min
    int num; //Number of minutes   
    
    //Set numeric output formatting
    cout << fixed << showpoint << setprecision(1) << endl;
    cout << "Minutes Ran        Calories Bunrt" << endl;
    cout << "-------------------------------------" << endl;
    
    for (num=stT; num<=edT; num+=minIncr)
    {
        totC += num * cal;
        cout << num << setw(25) << totC << endl;
    }
    return 0;
}

