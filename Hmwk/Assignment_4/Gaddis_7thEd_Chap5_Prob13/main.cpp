/* 
 * File:   Gaddis_7thEd_Chap5_Prob22
 * Author: Shen Jin
 * Created on July 10, 2014, 11:12 AM
 */

//System Library
#include <iostream>

using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //This program will output the largest and 
    //the smallest number that the user input
    
    //Declare Variables
    int min;
    int max=0;  // Initialization
    int x;      //User input
    
    
    cout << "Enter a series of integers." << endl;
    cout << "Enter -99 when you want to end the series." << endl;
       
    do
    {  
        cin >> x;
        if (x > max)
        {
            max = x;           
        }
        if (x < min && x != -99 && x!=0)
        {
            min = x;           
        }
 
    }while(x!=-99);
    
    cout << "The largest number is " << max << endl;
    cout << "The smallest number is " << min << endl;
    return 0;
}

