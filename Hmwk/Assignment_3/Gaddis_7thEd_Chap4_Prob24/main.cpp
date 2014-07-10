/* 
 * File:   Gaddis_7thEd_Chap4_Prob24
 * Author: Shen Jin
 * Created on July 7, 2014, 10:46 AM
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
    float hour; // Hours used in a month    
    char package; //type of package
    
    //Declare Output Variable
    float houR; // The extra hours used on top of what's included in the pack
    float cost; //Total cost of the month
    float save; // How much the user could've saved if it were a different pack
    
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
            if (hour>12.5 && hour <=774 )
            {
            houR = hour - h1;
            cost = rate1 + houR * r1;
            save = cost - rate2;
            cout << "You could've saved $" << save 
                 << " if you had packageB." << endl;
            }
            else 
            {
                cout << endl;
            }
            break;
        case 'B':
            if (hour>25 && hour <=774 )
            {
            houR = hour - h2;
            cost = rate2 + houR * r2;
            save = cost - rate3;
            cout << "You could've saved $" << save 
                 << " if you had packageC." << endl;
            }
            else
            {
                cout << endl;
            }
            break;
        case 'C' :            
            cout << endl;
            break;
        default:
            cout << "Invalid Entry." << endl;
            
    }
    return 0;
}

