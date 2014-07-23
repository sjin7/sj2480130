/* 
 * File:   Gaddis_7thEd_Chap6_Prob8
 * Author: Shen Jin
 * Created on July 23, 2014, 12:47 PM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes
void coinToss();

//Execution Starts Here!
int main(int argc, char** argv) {

    unsigned short t;                   //For t times the coin will be tossed
    cout << "How many times woudl you like to toss the coin?" << endl;
    cin >> t;
    
    for(int i=1; i<=t; i++){
        coinToss();
    }
    
    return 0;
}
void coinToss(){
    
     unsigned short side;
    //Generate a random side of the coin
     side=rand()%2+1; //1 through 2
     
     //Output the result
     if(side==1){
         cout << "Heads" << endl;
     }
     else{
         cout << "Tails" << endl;
     }
}
