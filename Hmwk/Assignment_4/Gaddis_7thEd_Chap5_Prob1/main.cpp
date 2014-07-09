/* 
 * File:   Gaddis_7thEd_Chap5_Prob1
 * Author: Shen Jin
 * Created on July 8, 2014, 1:26 PM
 */

//System Library
#include <iostream>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    //Initialization
    int num = 1;
    int total=0;
    int n;
    
    //Get the inputs
    cout << "Give me a positive integer value." << endl;
    cout << "I'll tell you the sum of all numbers starting from 1." << endl;
    cin >> n;
    
    for (num=1; num <=n; num++)
    {
        total += num;
    }
    cout << "The sum of all the numbers is " << total << endl;
    
    return 0;
}

