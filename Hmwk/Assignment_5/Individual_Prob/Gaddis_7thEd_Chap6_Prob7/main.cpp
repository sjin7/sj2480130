/* 
 * File:   Gaddis_7thEd_Chap6_Prob7
 * Author: Shen Jin
 * Created on July 23, 2014, 10:59 AM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes
void celsius(int f);

int main(int argc, char** argv) {
    
  //Output table
    cout << setw(5) <<  "Fahrenheit" << setw(10) <<  "Celsius" << endl;
    for(int i=0; i<=25; i++){
        cout << "-";
    }
    cout << endl;
    
     //Loop a table from 0 to 20
    for(int fahren=0; fahren <= 20; fahren++){
        cout << fixed << showpoint << setprecision(2);
        cout << setw(5) << fahren << setw(14);
        celsius(fahren);
    }
    return 0;
}

void celsius(int f){
   
    float cel;
    float temp = 9.0/5.0;     //Needs a decimal place
    cel= temp*(f - 32);
    cout << cel << endl;
}

