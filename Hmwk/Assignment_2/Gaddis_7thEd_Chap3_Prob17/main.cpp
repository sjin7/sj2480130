/* 
 * File:   Gaddis_7thEd_Chap3_Prob17
 * Author: Shen Jin
 * Created on July 1, 2014, 10:44 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//User Defined Libraries

//Global Constants

// Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    //Input
    float LoanAmt, IntRate;
    
    //Output
    float Payment, Payback, IntPay;
    unsigned int N;// N = number of payments
    
    //Prompt the user
    cout << "What is the total loan amount?";
    cin >> LoanAmt;
    cout << "What is the monthly interest rate?";
    cin >> IntRate;
    cout << "How many payment?";
    cin >> N;
    
    //Calculation
    IntRate*=(1.0f/12/100); //Convert interest rate to percent/monthly
    float temp = pow(1 + IntRate, N);
    Payment = IntRate * temp * LoanAmt / (temp - 1);
    Payback = Payment * N;
    IntPay = Payback - LoanAmt;
    
    //Set Decimal 
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "Loan Amount:           $" << LoanAmt << endl;
    cout << "Monthly Interest Rate:  " << IntRate << endl;
    cout << "Number of Payments:     " << N << endl;
    cout << "Monthly Payment :      $" << Payment << endl;
    cout << "Amount Paid Back:      $" << Payback << endl;
    cout << "Interest Paid:         $" << IntPay << endl;
    
    return 0;
}

