/* 
 * File:   Gaddis_7thEd_Chap4_Prob4
 * Author: Shen Jin
 * Created on July 4, 2014, 3:46 PM
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
    int W1, W2; //Width
    int L1, L2; //Length
    int A1, A2;// Area of two different triangles
    
    //Prompt the user
    cout << "Please give values to dimensions of two triangles." << endl;
    cout << "Width: ";
    cin >> W1;
    cout << "Length: ";
    cin >> L1;
    cout << "Width: ";
    cin >> W2;
    cout << "Length: ";
    cin >> L2;
    
    //Calculation
    A1 = W1 * L1;
    A2 = W2 * L2;
    
    //Show results
    if (A1 > A2)
    {
        cout << "The first triangle has larger area." << endl;
    }
    else if (A1 < A2)
    {
        cout << "The second triangle has larger area." << endl;
    }
    else
    {
        cout << "They have the same area." << endl;
    }
    
    return 0;
}

