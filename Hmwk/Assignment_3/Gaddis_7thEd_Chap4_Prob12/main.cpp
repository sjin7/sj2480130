/* 
 * File:   Gaddis_7thEd_Chap4_Prob12
 * Author: Shen Jin
 * Created on July 7, 2014, 11:35 AM
 */

//System Library
#include <iostream>
#include <iomanip>

using namespace std;

//User Defined Libraries

//Global Constants
float monthly = 10.00;//Monthly charge for having an account
float rate1 = 1e-1f, rate2 = 8e-2f, rate3 = 6e-2f, rate4 = 4e-2f;
float extra = 15.00;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Input Variable
    float bgBal; // Beginning Balance
    int check; // Number of checks
    
    //Declare Output Variable
    float fee; // Service fee
    
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "What is the beginning balance of your account?" << endl;
    cin >> bgBal;
    if(bgBal < 0)
       cout << "Your account is overdrawn." << endl;
    else if (bgBal>0 && bgBal<400)
        
    
    cout << "How many checks did you used?" <<endl;
    cin >> check;
    if (check<20 && check>0)
    {
        fee = monthly + rate1 * check;
        cout << "Service Fee: $" << fee << endl;
    }
    else if (check>=20 && check<=39)
    {
        fee = monthly + rate2 * check;
        cout << "Service Fee: $" << fee << endl;
    }
    else if (check>=40 && check<=59)
    {
        fee = monthly + rate3 * check;
        cout << "Service Fee: $" << fee << endl;
    }
    else if (check>=60)
    {
        fee = monthly + rate4 * check;
        cout << "Service Fee: $" << fee << endl;
    }
    else
        cout << "Invalid Entry." << endl;
    return 0;
}

