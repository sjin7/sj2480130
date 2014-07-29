/* 
 * File:   Gaddis_7thEd_Chap7_Prob1
 * Author: Shen Jin
 * Created on July 25, 2014, 4:31 PM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    const int SIZE=10;
    float array[SIZE];
    float small,large;
   
    for(int i=0;i<SIZE;i++){
            cout<<"Value "<<i+1<<":";
            cin>>array[i];
    }
    
    small=array[0];
    large=array[0];
    for(int i=0;i<SIZE;i++){
            if(array[i]<small)
                    small=array[i];
            if(array[i]>large)
                    large=array[i];
    }

    cout<<"The largest value:"<< large << endl;
    cout<<"The smallest value:"<< small << endl;
    return 0;
}

