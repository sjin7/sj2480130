/* 
 * File:  Assignment_6
 * Author: Shen Jin
 * Created on July 25, 2014, 4:38 PM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
     //Declare Variables for Menu
    unsigned short problemN;
    char again;
    do{
        cout << "Choose a problem from 1-10." << endl;
        cin >> problemN;
        
        switch(problemN){
            case 1:{//Gaddis_7thEd_Chap7_Prob1
                const int SIZE=10;
                int array[SIZE];
                int small,large;

                for(int i=0;i<SIZE;i++){
                        cout<<"Value "<<i+1<<":";
                        cin>>array[i];
                }

                small=array[0];
                large=array[0];
                for(int i=0;i<SIZE;i++){
                        if(array[i]<small)
                                small=array[i];
                        if(array[i]>large)
                                large=array[i];
                }

                cout<<"The largest value:"<< large << endl;
                cout<<"The smallest value:"<< small << endl;
                break;
            }
            case 2:{//Gaddis_7thEd_Chap7_Prob2
                float avg = 0; //average rainfall
                float total = 0; //the total rainfall
                float low; //the lowest rainfall
                float high; // the highest rainfall
                string lowestMonth; // the name of the month that has the lowest rainfall
                string highestMonth; // the name of the month that has the highest rainfall
                string monthNames[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
                //string array holds the name of all 12 months
                float monthlyTotals[12]; // the rainfall in an array given by user
                char again; //char for restarting the program if user chooses Y/y

                do{
                        cout << "Please enter the rainfall inches for all the months:" << endl;

                        //positive number validation as instructed by book
                        for (int i = 1; i <= 12; i++){
                                cout << monthNames[i] << ": ";
                                cin >> monthlyTotals[i];

                                while (monthlyTotals[i] < 0){
                                        cout << "Please enter a positive number for " << monthNames[i] << endl;
                                        cin >> monthlyTotals[i];
                                }
                        }	

                        //for loop i is set to 0 and i is less than 12
                        for (int i=1; i <=12; i++){
                                total = total + monthlyTotals[i]; //adds the total rainfall for the months
                        }

                        //Averages out the total rainfall and divide it by the number of months
                        avg = total / 12;

                        //Highest and Lowest months of rainfall [0]
                        high = monthlyTotals[0];
                        highestMonth = monthNames[0];
                        low = monthlyTotals[0];
                        lowestMonth = monthNames[0];

                        for (int i=1; i<=12; i++){
                                if (monthlyTotals[i] > high) {
                                        high = monthlyTotals[i]; 
                                        highestMonth = monthNames[i];
                                }
                                if (monthlyTotals[i] < low){
                                        low = monthlyTotals[i];
                                        lowestMonth = monthNames[i];
                                }
                        }	

                        //Set numeric output formatting
                        cout << fixed << showpoint << setprecision(2);
                        //displays the total rainfall and average in inches,
                        //displays the lowest and highest month as well as their respective total of rainfall from lowest to highest
                        cout << "The total rainfall throughout the year was " << total << " inches." << endl;
                        cout << "The average rainfall for the entire year is " << avg << " inches." << endl;
                        cout << "The month with the lowest rainfall is " << lowestMonth << ", with a total of "<< low <<" inches." << endl;
                        cout << "The month with the highest rainfall is " << highestMonth << ", with a total of "<< high <<" inches." << endl;

                        //setting the values back to 0 if the user decides to run the program once more.
                        avg = 0;
                        total = 0;
                        low = 0;
                        high = 0;
                        highestMonth;
                        lowestMonth;

                        cout << "\nWould you like to run the program again? (Y/N) ";
                        cin >> again;
                        cout << endl;
                }while(again=='y' || again=='Y'); // The end of while loop
                break;
            }
            case 3:{
                break;
            }
            case 4:{
                break;
            }
            case 5:{
                break;
            }
            case 6:{
                break;
            }
            case 7:{
                break;
            }
            case 8:{
                break;
            }
            case 9:{
                break;
            }
            case 10:{
                break;
            }
            default:{
                cout << "Choose a problem from 1-10." << endl;
            }
        }// The end of switch cases
        cout << "Would you like to run another problem?" << endl;
        cin >> again;
    }while(again=='Y' || again=='y');
    return 0;
}

