/* 
 * File:   Gaddis_7thEd_Chap3_Prob5
 * Author: Shen Jin
 * Created on June 30, 2014, 1:35 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//User Defined Libraries

//Global Constants

// Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    // Declare Variables
    string movie;
    int AdT, ChT;
    float gross, net, distr;
    
    cout << "Movie Name: ";
    cin >> movie;
    
    cout << "Adult Tickets Sold: ";
    cin >> AdT;
    
    cout << "Child Tickets Sold: ";
    cin >> ChT;
    
    //Calculation
    gross = AdT * 6 + ChT * 3;
    cout << "Gross Box Office Profit: $" << fixed << setprecision(2)
         << showpoint << gross << endl;
    
    //Calculation
    net = gross * 0.20;
    cout << "Net Box Office Profit: $" << net << endl;
    
    //Calculation
    distr = gross - net;
    cout << "Amount Paid to Distributor: $" << distr << endl;
    
    
            
    return 0;
}

