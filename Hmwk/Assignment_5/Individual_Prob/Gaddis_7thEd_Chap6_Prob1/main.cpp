/* 
 * File:   Gaddis_7thEd_Chap6_Prob1
 * Author: Shen Jin
 * Created on July 22, 2014, 11:38 AM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Defined Libraries

//Global Constants
float CVPC=1.0e-2f;

//Function Prototypes
int calculateRetail(float, int, float, bool);

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    float cost;                 //The wholesale cost
    int per;                    //The percentage
    float retail;               //The retail price
    bool invalid;

    //Set numeric output formatting
    cout << fixed << showpoint << setprecision(2) << endl;
    //Call the function
    cout << "The retail price for this item is $" 
         <<  calculateRetail(cost, per, retail, invalid)<< endl;
    
    return 0;
}

int calculateRetail(float cost, int per, float retail, bool invalid){
    
    do{
        invalid=false;
        cout << "What is the wholesale cost for this item?" << endl;
        cin >> cost;
        //Input validation
        if(cost<=0){
            invalid=true;
        }
        if(invalid==true){
            cout << "Invalid Entry. Please enter a positive price." << endl;
        }
     }while(invalid==true);
     
    do{
        invalid=false;
        cout << "What its markup percentage?" << endl;
        cin >> per;
        //Input Validation
        if(per<0){
            invalid=true;
        }
        if(invalid==true){
            cout << "Invalid Entry. Please enter a positive price." << endl;
        }
     }while(invalid==true);
    
    cout << "The cost for this item is $" << cost << "." << endl;
    cout << "With the markup percentage of " << per << "%" << endl;
   
    //Calculation
    retail = cost + cost*(static_cast<float>(per)*CVPC);
    
    return retail;
}

