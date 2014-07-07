/* 
 * File:   Gaddis_7thEd_Chap4_Prob25
 * Author: Shen Jin
 * Created on July 7, 2014, 11:35 AM
 */

//System Library
#include <iostream>
#include <iomanip>

using namespace std;

//User Defined Libraries

//Global Constants
//Rates for different packages
float rate1 = 9.95, rate2 = 14.95, rate3 = 19.95;
//Rates for the "overtime" for the first two packages
float r1 = 2.00, r2 = 1.00;
//Hours included in first two packages
int h1 = 10, h2 = 20;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Input Variables
    int hour; // Hours used in a month
    char package; //type of package
    char month; //The month picked by the user
    
    //Declare Output Variable
    float cost; //Total cost of the month
    
    //Set decimal places for the outputs
    cout << fixed << setprecision(2) << showpoint << endl;
    
    //Get the outputs
    cout << "What type of package do you have?" << endl;
    cin >> package;
    cout << "Which month did you want to calculate?" << endl;
    cin >> month;
    cout << "How many hours did you use this month?" <<endl;
    cin >> hour;

    //Result
    switch(package)
    {
        case 'A':
            if (month=="Jan" || month=="Mar" || month=="May" || month=="Jul"
                    || month=="Aug" || month=="Oct" || month=="Dec")
            {
            if (hour>10 && hour <=774 )
            {
            cost = rate1 + (hour - h1) * r1;
            cout << "Cost: $" << cost << endl;
            }
            else if (hour<=10)
                cout << "Cost: $" << rate1 << endl;                      
            else
                cout << "Invalid Hours." << endl
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
            cout << "Cost: $" << cost << endl;
    }
    
    return 0;
}

