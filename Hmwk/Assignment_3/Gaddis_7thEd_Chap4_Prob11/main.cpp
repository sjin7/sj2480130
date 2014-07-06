/* 
 * File:   Savitch_8thEd_Chap1_Prob11
 * Author: Shen Jin
 * Created on July 6, 2014, 12:09 PM
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

    //Declare input variable
    int purch; // number of books purchased this month
    
    
    //Prompt the user
    cout << "How many books did you purchase this month?" << endl;
    cin >> purch;
    
    //Output the result
    if (purch == 0)
    {
        cout << "You earned 0 point." << endl;
    }
    else if (purch == 1)
    {
        cout << "You earned 5 points." << endl;
    }
    else if (purch == 2)
    {
         cout << "You earned 15 points." << endl;
    }
    else if (purch == 3)
    {
         cout << "You earned 30 points." << endl;
    }
    else if (purch >= 4)
    {
         cout << "You earned 60 points." << endl;
    }
    else
    {
        cout << "Invalid Entry." << endl;
    }
    return 0;
}

