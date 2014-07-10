/* 
 * File:   Gaddis_7thEd_Chap5_Prob23
 * Author: Shen Jin
 * Created on July 9, 2014, 10:07 PM
 */


//System Library
#include <iostream>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //This program will display sone patterns by
    //using for-loops
    
    cout << "Pattern A" << endl;
    for (int i=1; i<=10; i++)
    {
        for (int j=1; j<=i; j++)
        {
        cout << "*";        
        }
        cout << endl;
    }
    
    cout << "  " << endl;
    cout << "Pattern B" << endl;
    for (int i=10; i>=1; i--)
    {
        for (int j=1; j<=i; j++)
        {
        cout << "*";        
        }
        cout << endl;
    }
    
    

    return 0;
}

