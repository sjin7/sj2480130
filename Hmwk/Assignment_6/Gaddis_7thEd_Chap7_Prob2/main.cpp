/* 
 * File:   Gaddis_7thEd_Chap7_Prob2
 * Author: Shen Jin
 * Created on July 25, 2014, 5:01 PM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes
float avg(float array[12]);
float high(float array[12]);
float low(float array[12]);
void getRain(float );

//Execution Starts Here!
int main(int argc, char** argv) {
    const int SIZE=12;
    float array[SIZE];
    
    cout << "Please enter the rainfall for 12 months." << endl;
    //Call function
    
    
    return 0;
}
void getRain(float array[12]){
    for(int i=1; i<=12; i++){
        cout << "Month " << i << ": ";
        cin >> array[i];
    }
}
