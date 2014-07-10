/* 
 * File:   Gaddis_7thEd_Chap5_Prob13
 * Author: Shen Jin
 * Created on July 10, 2014, 1:36 PM
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
    int num;           //User input number
    
    cout << "Guess a number." << endl;
    
    do
    {
        cin >> num;
        cout << "Number: " << num << endl;  
        if (num<27)
        {
            cout << "Too Low! Try Again" << endl;
        }
        if (num>27)
        {
            cout << "Too High! Try Again" << endl;
        }
    }while(num!=27);
        cout << "You got it right! " << endl;
    
    return 0;
}

