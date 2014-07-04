/* 
 * File:  Gaddis_7thEd_Chap4_Prob3
 * Author: Shen Jin
 * Created on July 4, 2014, 3:30 PM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    int day, month, year;
    int prod1; // Product of day and month
    int prod2; // Product of month and year
    
    //Prompt the user
    cout << "Type in a date by specifying the day, month, and year\n"; 
    cout << "all in two digits, then you will find out if it's a magic date!\n"; 
    cin >> day;
    cin >> month;
    cin >> year;
    
    //Display user input data
    cout << "You entered: " << day << "/" << month << "/" << year << endl;
    
    //Calculation
    prod1 = day * month;
    prod2 = month * year;
    
    //Display the result
    if (prod1 == prod2)
    {
        cout << "It's a Magic Date!!" << endl;
    }
    else
    {
        cout << "Sorry, it's not a Magic Date." << endl;
    }
            
    return 0;
}

