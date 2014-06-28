/* 
 * File:   Gaddis_7thEd_Chap3_Prob3
 * Author: Shen Jin
 * Created on June 28, 2014, 3:20 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Defined Libraries

//Global Constants

// Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    float t1, t2, t3, t4, t5;
    float avg;
    
    cout << "This program will calculate the average of your 5 scores.\n";
    
    cout << "Test 1: ";
    cin >> t1;
    
    cout << "Test 2: ";
    cin >> t2;
    
    cout << "Test 3: ";
    cin >> t3;
    
    cout << "Test 4: ";
    cin >> t4;
    
    cout << "Test 5: ";
    cin >> t5;
    
    //Calculation
    avg = (t1 + t2 + t3 + t4 + t5) / 5;
    
    cout << "Average: " 
         << fixed << setprecision(1) << showpoint 
         << avg << endl;   

    
    
            
    return 0;
}

