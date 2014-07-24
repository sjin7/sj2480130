/* 
 * File:   Gaddis_7thEd_Chap6_Prob6
 * Author: Shen Jin
 * Created on July 23, 2014, 12:17 AM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes
float kineticEnergy(float m, float v);

//Execution Begins Here!
int main(int argc, char** argv) {
    float m;            //mass
    float v;            //velocity
    cout << "What is the mass of the object(kilogram)?" << endl;
    cin >> m;
    cout << "What is the velocity (meters/second)?" << endl;
    cin >> v;
    
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "The Kinetic Energy of this moving object is "
         << kineticEnergy(m,v) << "kg/(m^2/s^2)" << endl;
    
    return 0;
}

float kineticEnergy(float m, float v){
    
    float ke;
    
    ke = m * v * v /2;
    
    return ke;
}

