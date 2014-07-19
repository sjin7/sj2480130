/* 
 * File:   Project 1 Roulette
 * Author: Shen Jin
 * Created on July 14, 2014, 1:13 PM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //This is a program of Roulette
    //Introduction of the game rules
    cout << "Roulette is a casino game named after a French " << endl;
    cout << "diminutive for little wheel. " << endl;
    cout << "This program is a simplified roulette game." << endl;
    
    //Declare Variables
    char type; //Type of bet chosen by the player
    unsigned short spin; //How many times the player wants it to spin
    unsigned short numBet; //The number bet
    unsigned short num; //The actual number off the spins
    char even, odd; 
    char blk, red; //The color of the number bet
    char low, med, high; //The range of the number bet
    float bank; //The original total that the player has
    float bet; //The amount bet
    float amnt; // The amount the player have after game
    char again; //If the player wants to play again
    
    //Set the random number seed
    srand(time(0));
    
    do
    {
    do
    {
    cout << "How many times would you like it to spin?" << endl;
    cout << "Input 0 if you want to end the game now." << endl;
    cin >> spin;
   
    //Menu
    cout << "Type A if you want to bet on a number. " << endl;
    cout << "Type B if want to bet on a colors red or black." << endl;
    cout << "Type C if want to bet whether the number is odd or even." << endl;
    cin >> type;
    switch(type)
    {
        case 'A' : 
        case 'a' : 
             cout << "How much total do you have? " << endl;
             cin >> bank;
              
    for(int i=0; i<=spin; i++)
    {
             cout << "How much would you like to bet?" << endl;
             cin >> bet;
             cout << "Which number would you like to bet from 1-36?" << endl;
             cin >> numBet;
             num=rand()%36+1;
             cout << setw(8) << "Number" << setw(15) << "Your Pick" << endl;
             cout << "----------------------------" << endl;
             cout << setw(6) << num << setw(12) << numBet << endl;
             cout << fixed << showpoint << setprecision(2) << endl;
             if(numBet == num)
             {
                 //Calculation
                 amnt += bank - bet + bet * 36;
                 cout << "Congratulations! You won $" << bet * 36 << endl; 
                 cout << "Now you have $" << amnt << endl;
             }
             else
             {
                 //Calculation
                 amnt = bank - bet;
                 cout << "Sorry, you lost the bet for this spin." << endl;
                 cout << "Now you have $" << amnt << endl;
                 cout << "Good luck on your next spin!" << endl << endl;
             } 
    } // The end of for loop for case A
            break;
        case 'B':
        case 'b' : 
            break;
        case 'C':
        case 'c' : 
            break;
        default:
            cout << "Please choose from A, B, and C." << endl;
    }
     }while(spin !=0); // End of inner do-while loop
       cout << "Would you like to play again?" << endl;
       cin >> again;        
    }while(again == 'Y'); //End of outer do-while loop
        
    
    return 0;
}

