/* 
 * File:   Gaddis_7thEd_Chap3_Prob6
 * Author: Shen Jin
 * Created on July 1, 2014, 1:06 AM
 */

//System Libraries
#include <iostream>


using namespace std;

//User Defined Libraries

//Global Constants

// Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    float ppw = 9.2, totalW, palW; //ppw = pound per widget
                                   //totalW = total weight
                                   //palW = pallet weight
    int numw; //numw = number of widgets

    cout << "How many pounds does the pallet weigh itself?" << endl;
    cout << "Pallet Weight: ";
    cin >> palW;
    
    cout << "What is the total weight with the widgets?" << endl;
    cout << "Total Weight: ";
    cin >> totalW;
    
    //Calculation
    numw = (totalW - palW) / 9.2;
    cout << "Therefore, there are total of " << numw
            << " widgets stacked on the pallet." << endl;
    
    return 0;
}

