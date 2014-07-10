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

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Input Variable
    float bgBal; // Beginning Balance
    int check; // Number of checks
    const float monthly = 10.00;//Monthly charge for having an account
    const float rate1 = 1e-1f, rate2 = 8e-2f, rate3 = 6e-2f, rate4 = 4e-2f;
    const float extra = 15.00;
    
    //Declare Output Variable
    float fee; // Service fee
    
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "What is the beginning balance of your account?" << endl;
    cin >> bgBal;           
    cout << "How many checks did you used?" <<endl;
    cin >> check;
    
    if(bgBal < 0)
       cout << "Your account is overdrawn." << endl;   
    
    if (check<20 && check>0)
    {
        if (bgBal > 400)
        {
        fee = monthly + rate1 * check;
        cout << "Service Fee: $" << fee << endl;
        }
        else
        {
        fee = monthly + rate1 * check;
        fee+=extra;
        cout << "Service Fee: $" << fee << endl;
        }
    }
    else if (check>=20 && check<=39)
    {
       if (bgBal > 400)
        {
        fee = monthly + rate2 * check;
        cout << "Service Fee: $" << fee << endl;
        }
        else
        {
        fee = monthly + rate1 * check;
        fee+=extra;
        cout << "Service Fee: $" << fee << endl;
        }
    }
    else if (check>=40 && check<=59)
    {
        if (bgBal > 400)
        {
        fee = monthly + rate3 * check;
        cout << "Service Fee: $" << fee << endl;
        }
        else
        {
        fee = monthly + rate1 * check;
        fee+=extra;
        cout << "Service Fee: $" << fee << endl;
        }
    }
    else if (check>=60)
    {
       if (bgBal > 400)
        {
        fee = monthly + rate4 * check;
        cout << "Service Fee: $" << fee << endl;
        }
        else
        {
        fee = monthly + rate1 * check;
        fee += extra;
        cout << "Service Fee: $" << fee << endl;
        }
    }
    else
        cout << "Invalid Entry." << endl;
    return 0;
}

