/* 
 * File:   Gaddis_7thEd_Chap5_Prob22
 * Author: Shen Jin
 * Created on July 9, 2014, 10:42 PM
 */

//System Library
#include <iostream>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //This program will display squares with
    //user input dimension
    //The squares are formed by letter "X"
    
    //Declare Variables
    int length; // The length of the side
    cout << "What would you like the length of the side to be?" << endl;
    cin >> length;
    
    if (length<0 || length>15)
        cout << "Invalide Entry." << endl;
    
    for (int i=1; i<=length; i++)
    {
//        for (int j=1; j=i; j++)
//        {
        cout << "X";
//        }
       
    }
     cout << endl;
    return 0;
}

