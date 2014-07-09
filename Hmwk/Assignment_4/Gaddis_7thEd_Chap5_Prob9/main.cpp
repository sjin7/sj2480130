/* 
 * File:   Gaddis_7thEd_Chap5_Prob1
 * Author: Shen Jin
 * Created on July 9, 2014, 1:05 PM
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
    int floor; //The floor number
    int numFl; //How many floors in this hotel
    int rooms; //Rooms this floor has in total
    int occu; //Rooms that are occupied
//    int num; // Floor number used for initialization
    float percent; //The percentage of rooms that are occupied
    
    //Get the number of floors
    cout << "How many floors does this hotel have in total?" << endl;
    cin >> numFl;
    
    for (floor=1; floor<=12; floor++)
    {
    //Get the number of rooms on each floor
    cout << "How many rooms on this floor?" << endl;
    cin >> rooms;
    for (floor=14; floor<=numFl; floor++)
    {
        //Get the number of rooms that are occupied
        cout << "How many rooms are occupied?" << endl;
        cin >> occu;
        
    }
    
    }
    
            return 0;
}

