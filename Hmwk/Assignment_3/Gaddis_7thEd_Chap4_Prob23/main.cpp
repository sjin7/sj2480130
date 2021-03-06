/* 
 * File:   Gaddis_7thEd_Chap4_Prob23
 * Author: Shen Jin
 * Created on July 7, 2014, 1:30 AM
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
    
    //Declare Variables
    //Rates for different packages
    const float rate1 = 9.95, rate2 = 14.95, rate3 = 19.95;
    //Rates for the "overtime" for the first two packages
    const float r1 = 2.00, r2 = 1.00;
    //Hours included in first two packages
    const int h1 = 10, h2 = 20;

    //Declare Input Variables
    int hour; // Hours used in a month
    char package; //type of package
    
    //Declare Output Variable
    float cost; //Total cost of the month
    
    //Set decimal places for the outputs
    cout << fixed << setprecision(2) << showpoint << endl;
    
    //Get the outputs
    cout << "What type of package do you have?" << endl;
    cin >> package;
    cout << "How many hours did you use this month?" <<endl;
    cin >> hour;

    //Result
    switch(package)
    {
        case 'A':
            if (hour>=10 && hour <=774 )
            {
            cost = rate1 + (hour - h1) * r1;
            cout << "Cost: $" << cost << endl;
            }
            else 
            {
                cout << "Cost: $" << rate1 << endl;
            }
            break;
        case 'B':
            if (hour>20 && hour <=774 )
            {
            cost = rate2 + (hour - h2) * r2;
            cout << "Cost: $" << cost << endl;
            }
            else
            {
                cout << "Cost: &" << rate2 << endl;
            }
            break;
        case 'C' :
            cost = rate3;
            cout << "Cost: &" << rate3 << endl;
            break;
        default:
            cout << "Invalid Entry." << endl;
    }
    
    return 0;
}

