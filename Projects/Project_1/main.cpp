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
char type;                      //Type of bet chosen by the player
unsigned short spin;            //How many times the player wants it to spin
unsigned short numBet;          //The number bet
unsigned short num;             //The actual number off the spins
char choice;                    //The player bet on even or odd number 
bool co;                        //The color that gives off by the spin
char color;                     //The color of the number bet
char range;                     //The range of the number bet
float bank;                     //The original total that the player has
float bet;                      //The amount bet
float amnt;                     //The amount the player have after game
char again;                     //If the player wants to play again
bool invalid;

//Arrays for case B -- color bet
int red[18]={1,3,5,7,9,12,14,16,18,19,21,23,25,27,30,32,34,36};
int black[18]={2,4,6,8,10,11,13,15,17,20,22,24,26,28,29,31,33,35};

//Set the random number seed
srand(static_cast<unsigned short>(time(0)));   

do{                                  //Would you like to play again{    
    cout << "How many times would you like to spin?" << endl;
    cin >> spin;
    for(int i=1; i<=spin; i++){     //Spin the wheel for times defined by user
    
        do{
            invalid=false;
            //Menu
            cout << "Type A if you want to bet on a number. " << endl;
            cout << "Type B if you want to bet on a colors red or black." << endl;
            cout << "Type C if you want to bet whether the number is odd or even." <<endl;
            cout << "Type D if you want to bet on a dozen of numbers by ranging."<< endl;
            cin >> type;
            cout << "How much total do you have? " << endl;
            cin >> bank;
            cout << "How much would you like to bet?" << endl;
            cin >> bet;

            //Determine the random number
            num=rand()%36+1;

            switch(type){
                case 'A': 
                case 'a':{          
                    cout << "Which number would you like to bet from 1-36?" << endl;           
                    cin >> numBet;                         //Get user input
                    if(numBet<0 || numBet>36)
                    {
                        cout << "Please pick a number 1-36." << endl;
                    }

                    cout << setw(8) << "Number" << setw(15) << "Your Pick" << endl;
                    cout << "----------------------------" << endl;
                    cout << setw(6) << num << setw(12) << numBet << endl;
                    cout << fixed << showpoint << setprecision(2) << endl;
                    if(numBet == num)
                    {             
                        amnt = bank - bet + bet * 36;         //Calculation
                        cout << "Congratulations! You won $" << bet * 36 << endl; 
                        cout << "Now you have $" << amnt << endl << endl;
                    }
                    else
                    {
                        amnt = bank - bet;                    //Calculation
                        cout << "Sorry, you lost $" << bet << endl;
                        cout << "Now you have $" << amnt << endl;
                        cout << "Good luck on your next spin!" << endl << endl;
                    } 
                    break;
                }
                case 'B':
                case 'b':{         
                    cout << "Would you like to bet on black or red?" << endl;
                    cin >> color;
                    co=rand()%2;
                    cout << setw(8) << "Color" << setw(15) << "Your Pick" << endl;
                    cout << "----------------------------" << endl;
                    cout << setw(6) << co << setw(12) << color << endl;
                    cout << fixed << showpoint << setprecision(2) << endl;
                    if(color=='black' && co==1)
                    { 
                        amnt = bank - bet + bet * 2;                    //Calculation
                        cout << "Congratulations! You won $" << bet * 2 << endl;
                        cout << "Now you have $" << amnt<< endl;
                    }
                    else if(color=='red' && co==0)
                    {
                        amnt = bank - bet + bet * 2;                    //Calculation
                        cout << "Congratulations! You won $" << bet * 2 << endl;
                        cout << "Now you have $" << amnt<< endl;
                    }
                    else
                    {
                        cout << "Sorry, you lost $" << bet << endl;
                        cout << "Now you have $" << bank - bet << endl;
                        cout << "Good luck on your next spin!" << endl << endl;
                    }
                    break;
                }
                case 'C':
                case 'c': {
                    cout << "Would you like to place your bet on E(even) "
                            "or O(odd)?" << endl;
                    cin >> choice;

                    cout << setw(8) << "Number" << setw(15) << "Your Pick" << endl;
                    cout << "----------------------------" << endl;
                    cout << setw(6) << num << setw(12) << choice << endl;
                    cout << fixed << showpoint << setprecision(2) << endl;
                    if(num%2==0 && (choice == 'E'|| choice == 'e'))
                    { 
                        amnt = bank - bet + bet * 2;                 //Calculation
                        cout << "Congratulations! You won $" << bet * 2 << endl;
                        cout << "Now you have $" << amnt<< endl;
                    }          
                    else if(num%2==1 && (choice == 'O'||choice == 'o'))
                    {
                        amnt = bank - bet + bet * 2;                //Calculation
                        cout << "Congratulations! You won $" << bet * 2 << endl;
                        cout << "Now you have $" << amnt<< endl << endl;
                    }
                    else
                    {
                        cout << "Sorry, you lost $" << bet << endl;
                        cout << "Now you have $" << bank - bet << endl;
                        cout << "Good luck on your next spin!" << endl << endl;
                    }
                    break;
            }
                case 'D':
                case 'd':{
                    cout << "Which dozen of number would you like to bet on?" << endl;
                    cout << "First:1-12; Second:13-24; Third: 25-36" << endl;
                    cin >> range;

                    cout << setw(8) << "Number" << setw(15) << "Your Pick" << endl;
                    cout << "----------------------------" << endl;
                    cout << setw(6) << num << setw(12) << range << endl;
                    cout << fixed << showpoint << setprecision(2) << endl;
                    if((num>=1 && num<=12) && range=='First')
                    {
                        amnt = bank - bet + bet * 3;                 //Calculation
                        cout << "Congratulations! You won $" << bet * 3 << endl;
                        cout << "Now you have $" << amnt<< endl << endl;
                    }
                    else if((num>=13 && num<=24) && range=='Second')
                    {
                        amnt = bank - bet + bet * 3;                 //Calculation
                        cout << "Congratulations! You won $" << bet * 3 << endl;
                        cout << "Now you have $" << amnt<< endl << endl;
                    }
                    else if((num>=25 && num<=36) && range=='Third')
                    {
                        amnt = bank - bet + bet * 3;                //Calculation
                        cout << "Congratulations! You won $" << bet * 3 << endl;
                        cout << "Now you have $" << amnt<< endl << endl;
                    }
                    else
                    {
                        cout << "Sorry, you lost $" << bet << endl;
                        cout << "Now you have $" << bank - bet << endl;
                        cout << "Good luck on your next spin!" << endl << endl;
                    }
                    break;
                }
                default:
                    cout << "Please choose from A, B, C and D." << endl << endl;
                    invalid=true;
            } // The end of switch case
        }while(invalid==true);
    }//The end of for loop
        cout << "Would you like to play again? Type Y for yes "
            "or any other letter for no." << endl;
        cin >> again;         
}while(again=='Y' || again=='y'); //End of do-while loop
 

return 0;
}

