/* 
 * File:   Gaddis_7thEd_Chap6_Prob5
 * Author: Shen Jin
 * Created on July 22, 2014, 11:35 PM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes
float fallingDistance(float d, int t);
//Execution Begins Here!
int main(int argc, char** argv) {

    float d;
    
for(int t=0; t<+10; t++){
    
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "For " << t << " seconds, the falling distance is "
         <<fallingDistance(d, t) << " meters." << endl;
    
}     
    return 0;
}

float fallingDistance(float d, int t){
    float g = 9.8;     //Gravity
 
    //Calculation
    d = g * (t * t) / 2;
    
    return d;
}

