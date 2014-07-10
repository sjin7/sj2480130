/* 
 * File:   Savitch_8thEd_Chap1_Prob16
 * Author: Shen Jin
 * Created on July 7, 2014, 1:56 AM
 */

//System Library
#include <iostream>
#include <iomanip>

using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Input Variables
    int cal; // number of calories
    int fatgram; // number of fat gram
    int fatcal; // calories from the fat
    int fatgram = 9; //One gram of fat has 9 calories
    
    //Declare Output Variables
    int total; // Total calories
    float per; // Percentage of calories from fat
    int per_out; // The display of the interest percentage
    
    
    //Get the inputs
    cout << "How many calories are there in one serving? " << endl;
    cin >> cal;
    cout << "How many fat grams are there in one serving?" << endl;
    cin >> fatgram;
    
    //Calculation
    fatcal = fatgram * 9;
    total = cal + fatcal;
    per = float(fatcal) / float(total);
    per_out = per * 100;
   
    if (fatcal>cal || cal<0 || fatgram<0)
    {
        cout << "Invalid. The program will not give the right result." << endl;
    }
     if (per < 0.3)
    {
        cout << "The fat calories percentage: " << per_out << "%" <<endl;
        cout << "This food is low in fat!" << endl;
    }
    else
    {
         cout << "The fat calories percentage: " << per_out<< "%" <<endl;
    }
  
    
    return 0;
}

