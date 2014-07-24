/* 
 * File:   Gaddis_7thEd_Chap6_Prob21
 * Author: Shen Jin
 * Created on July 23, 2014, 11:42 PM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes
bool isPrime(int num);

//Execution Starts Here!
int main(int argc, char** argv) {
//Declare Variables
    int num;
    //Get user input
    cout << "Type in a number and this program will tell" << endl;
    cout << "you if that is a prime number." << endl;
    cin >> num;
    if(isPrime(num)){
        cout << "It is a prime!" << endl;
    }
    else{
        cout << "It is not a prime." << endl;
    }
    return 0;
}
bool isPrime(int num){
     bool isPrime = true;
    if(num==1 || num==2){
        isPrime;
    }
    else{
        for(int i=2; i<num-1; i++){
            if(num % i == 0){
                isPrime = false;
                return isPrime;
            }
         }
    }
    return isPrime;
}
    
                      
