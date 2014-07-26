/* 
 * File:  Assignment_6
 * Author: Shen Jin
 * Created on July 25, 2014, 4:38 PM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
     //Declare Variables for Menu
    unsigned short problemN;
    char again;
    do{
        cout << "Choose a problem from 1-10." << endl;
        cin >> problemN;
        
        switch(problemN){
            case 1:{//Gaddis_7thEd_Chap7_Prob1
                const int SIZE=10;
                int array[SIZE];
                int small,large;

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
                break;
            }
            case 2:{
                break;
            }
            case 3:{
                break;
            }
            case 4:{
                break;
            }
            case 5:{
                break;
            }
            case 6:{
                break;
            }
            case 7:{
                break;
            }
            case 8:{
                break;
            }
            case 9:{
                break;
            }
            case 10:{
                break;
            }
            default:{
                cout << "Choose a problem from 1-10." << endl;
            }
        }// The end of switch cases
        cout << "Would you like to run another problem?" << endl;
        cin >> again;
    }while(again=='Y' || again=='y');
    return 0;
}

