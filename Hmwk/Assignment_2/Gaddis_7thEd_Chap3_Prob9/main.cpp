/* 
 * File:   Gaddis_7thEd_Chap3_Prob9
 * Author: Shen Jin
 * Created on July 1, 2014, 10:44 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Defined Libraries

//Global Constants

// Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    float loan, ins, gas, oil, maint;
    float mon, ann;
    // mon = monthly cost
    // ann = annual cost
    
    //Output
    //Prompt the user
    cout << "Please enter the monthly cost(with two decimal) for the\n"
            "following expenses incurred from operating you automobile." << endl;
    
    cout << "Loan Payment: $";
    cin >> loan;
    
    cout << "Insurance: $";
    cin >> ins;
    
    cout << "Gas: $";
    cin >> gas;
    
    cout << "Oil: $";
    cin >> oil;
     
    cout << "Maintenance: ";
    cin >> maint;
    
    //Calculations
    mon = loan + ins + gas + oil + maint;
    ann = mon * 12;
    
    cout << "Total Monthly Cost: $" << fixed 
         << showpoint << setprecision(2) << mon << endl;
    cout << "Total Annual Cost: $" << ann << endl;
    
            
    
    return 0;
}

