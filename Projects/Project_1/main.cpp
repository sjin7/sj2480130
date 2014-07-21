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
void question(float &bank, float &bet);
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
string color;                   //The color of the number bet
string range;                   //The range of the number bet
float bank;                     //The original total that the player has
float bet;                      //The amount bet
float amnt;                     //The amount the player have after game
char again;                     //If the player wants to play again
bool invalid;

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
            
            //Determine the random number
            num=rand()%36+1;

            switch(type){
                case 'A': 
                case 'a':{      
                    question(bank, bet);
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
                    question(bank, bet);
                    do{
                        invalid=false;
                    cout << "Would you like to bet on black(B) or red(C)?" << endl;
                    cin >> color;
                    if(color.length()!=1){
                        invalid=true;
                    }
                    if(color[0]!= 'r' && color[0]!= 'R' && color[0]!= 'b' && color[0]!= 'B'){
                        invalid=true;
                    }
                    if(invalid==true){
                        cout << "Invalid Entry" << endl;
                    }
                    }while(invalid == true);
                    co=rand()%2;
                    cout << setw(8) << "Color" << setw(15) << "Your Pick" << endl;
                    cout << "----------------------------" << endl;
                    if(co==0){
                        cout << setw(6) << "red" << setw(12) << color << endl;
                    }
                    else{
                        cout << setw(6) << "black" << setw(12) << color << endl;
                    }
                    cout << fixed << showpoint << setprecision(2) << endl;
                    if((color[0]=='b' || color[0] =='B') && co==1)
                    { 
                        amnt = bank - bet + bet * 2;                    //Calculation
                        cout << "Congratulations! You won $" << bet * 2 << endl;
                        cout << "Now you have $" << amnt<< endl;
                    }
                    else if((color[0]=='r' || color[0] =='R') && co==0)
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
                    question(bank, bet);
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
                    question(bank, bet);
                    do{
                        invalid=false;
                        cout << "Which dozen of number would you like to bet on?" << endl;
                        cout << "1:1-12; 2:13-24; 3: 25-36" << endl;
                        cin >> range;

                        if(range.length()!=1){
                            invalid=true;
                        }
                        if(range[0]<'1' || range[0]>'3' ){
                            invalid=true;
                        }
                        if(invalid==true){
                            cout << "Invalid Entry" << endl;
                        }
                    }while(invalid == true);
                    cout << setw(8) << "Number" << setw(15) << "Your Pick" << endl;
                    cout << "----------------------------" << endl;
                    cout << setw(6) << num << setw(12) << range << endl;
                    cout << fixed << showpoint << setprecision(2) << endl;
                    if((num>=1 && num<=12) && range[0]=='1')
                    {
                        amnt = bank - bet + bet * 3;                 //Calculation
                        cout << "Congratulations! You won $" << bet * 3 << endl;
                        cout << "Now you have $" << amnt<< endl << endl;
                    }
                    else if((num>=13 && num<=24) && range[0]=='2')
                    {
                        amnt = bank - bet + bet * 3;                 //Calculation
                        cout << "Congratulations! You won $" << bet * 3 << endl;
                        cout << "Now you have $" << amnt<< endl << endl;
                    }
                    else if((num>=25 && num<=36) && range[0]=='3')
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
void question(float &bank, float &bet){
    cout << "How much total do you have? " << endl;
            cin >> bank;
            cout << "How much would you like to bet?" << endl;
            cin >> bet;
}

