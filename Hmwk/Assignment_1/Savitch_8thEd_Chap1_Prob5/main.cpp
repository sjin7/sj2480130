/* 
 * File:   Savitch_8thEd_Chap1_Prob5
 * Author: Shen Jin
 * Created on June 25, 2014, 1:09 AM
 */

#include <iostream>

using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables and Calculation
    int num1, num2;
    int sum = num1 + num2;
    int prod = num1 * num2;
    
    cout << "Please provide two integers.\n";
    cin >> num1;
    cin >> num2;
    cout << "Sum: ";
    cout << sum << endl; //Using endl as "Enter" to separate lines
    cout << "Product: ";
    cout << prod << endl; 
    
    cout << "End of the Program.\n";
            

    return 0;
}

