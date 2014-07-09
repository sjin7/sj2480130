/* 
 * File:   Gaddis_7thEd_Chap5_Prob6
 * Author: Shen Jin
 * Created on July 9, 2014, 11:21 AM
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

    //Dreclare Input Variables
    int speed; //Speed in mph
    int hour; //How many hours
    
    //Initialization
    int num = 1; // Starting from 0 hour
    
    //Declare Output Variables
    int miles; // Distance Traveled 
    
    //Get the inputs
    cout << "How many hours did you drive?" << endl;
    cin >> hour;
    cout << "What was you speed(mph)?" << endl;
    cin >>speed;
    
    cout << "Hour         Distance(mile)" << endl;
    cout << "---------------------------" << endl;
    for (num; num <=hour; num++)
    {
        miles = num * speed;
        cout << num << setw(15) << miles << endl;
    }
   
    return 0;
}

