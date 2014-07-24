/* 
 * File:   Gaddis_7thEd_Chap6_Prob15
 * Author: Shen Jin
 * Created on July 24, 2014, 6:44 AM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Defined Libraries

//Global Constants
float CVS = 1.0e-2f; //The conversion for percentage

//Function Prototypes
void population(float, float, float, float);

//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare Variables
    float n;          //New population size
    float p;          //Previous population size
    float b;          //Birth Rate
    float d;           //Death Rate
    unsigned short yr; //Number of years to display
    
    cout << "What is the starting size of a population?" << endl;
    cin >> p;
    //Using while loop for validation
    while(p<2){
        cout << "Invalid Entry. The starting size has to be more than 2." <<endl;
        cin >> p;
    }
    cout << "What is the annual birth rate?" << endl;
    cin >> b;
    while(b<0){
        cout << "Invalid Entry. Please enter a positive birth rate." << endl;
        cin >> b;
    }
    cout << "What is the annual death rate?" << endl;
    cin >> d;
    while(d<0){
        cout << "Invalid Entry. Please enter a positive death rate." << endl;
        cin >> d;
    }
    cout << "What is the number of years to display?" << endl;
    cin >> yr;
    while(yr<1){
        cout << "Invalid Entry. Please enter more than 1 year." << endl;
        cin >> yr;
    }
    
    //Diaplay Result
    cout << "Starting Population" << setw(15) << "Birth Rate" << setw(15)
         << "Death Rate" << setw(20) << "Number of Years" << setw(18)
         << "New Population" << endl;
    for (int i=0; i<=85; i++){
        cout << "-";
    }cout << endl;
    cout << fixed << showpoint << setprecision(2);
    for(int i=1; i<=yr; i++){
        cout << setw(10) << p << setw(20) << b << setw(17) << d 
             << setw(17) << i << setw(17) << population << endl;
        p = p + b*CVS*p - d*CVS*p;
    }
    
    return 0; 
}
void population(float n, float p, float b, float d){
    
    n = p + b*CVS*p - d*CVS*p;
}
    
                                                  

