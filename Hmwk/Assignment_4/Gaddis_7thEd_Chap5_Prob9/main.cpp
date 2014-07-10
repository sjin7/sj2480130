/* 
 * File:   Gaddis_7thEd_Chap5_Prob1
 * Author: Shen Jin
 * Created on July 9, 2014, 1:05 PM
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
    int floor; //The floor number
    int numFl; //How many floors in this hotel
    int rooms; //Rooms this floor has in total
    int totR; // Total rooms in this hotel
    int occu; //Rooms that are occupied
    int totO; //Total rooms occupied
    float percent; //The percentage of rooms that are occupied
    
    //Get the number of floors
    cout << "How many floors does this hotel have in total?" << endl;
    cin >> numFl;
    
    
    for (floor=1; floor<=numFl; floor++)
    {
        if(floor==13)
        {
            floor=14;
        }
        //Get the number of rooms on each floor
        cout << "How many rooms on floor" << floor << "?" << endl;
        cin >> rooms;
        //Get the number of rooms that are occupied
        cout << "How many rooms are occupied?" << endl;
        cin >> occu;
        totR += rooms;
        totO += occu;
     }
     //Calculation for percentage of occupancy
    percent = static_cast<float>(totO) / static_cast<float>(totR) * 100;
        cout << "There are " << totR << " rooms, and "
                << totO << " are occupied which is "  <<
                percent << "%, therefore, there are "
                << totR-totO << " rooms that are unoccupied." << endl;
    
    
    
            return 0;
}

