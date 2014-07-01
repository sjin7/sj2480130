/* 
 * File:   Gaddis_7thEd_Chap3_Prob7
 * Author: Shen Jin
 * Created on July 1, 2014, 10:06 AM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Defined Libraries

//Global Constants

// Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    // Declare Variables
    int totalC = 40, spb = 10, cps = 300;
    // totalC = total cookies per bag
    // spb = servings per bag
    // cps = calories per serving
    int C, c;
    // C = number of cookies the user had
    // c = total calories consumed
    
    cout << "How many cookies did you eat?" << endl;
    cin >> C;
    
    //Calculation
    c = (spb* cps / totalC) * C;
    cout << "You just consumed " << c << " calories!" << endl;
    
    return 0;
}

