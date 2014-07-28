/* 
 * File:  Chap7_Prob4
 * Author: Shen Jin
 * Created on July 28, 2014, 6:48 AM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes
const int MONKEYS = 3; // number of monkeys
const int DAYS = 7;   //number of days of the year
void getFood(float arr[][DAYS], int rows); //function for the food each monkey have consumed, 2D array
void avgFood(float arr[][DAYS], int rows); //function for the average amonut of food between the 3 monkies
void leastAmount(float arr[][DAYS], int rows); //function for the least amount of food consumed, by which monkey and which day
void greatestAmount(float arr[][DAYS], int rows); //function for the greatest amount of food consumed by which monkey and which day

//Execution Begins Here!
int main(int argc, char** argv) {
   // declarations
        float food[MONKEYS][DAYS]; //2D array for the food variable, for 3 MONKEY for row, for 7 days DAYS for column
        cout << "Please enter the amount of (lbs) the monkeys have consumed.\n\n";
        getFood(food, MONKEYS);
        cout << "Report:\n";
        avgFood(food, MONKEYS);
 
        // get least amount in that week.
        leastAmount(food, MONKEYS);
        // get greatest amount in that week.
        greatestAmount(food, MONKEYS);

        //Exit stage right
    return 0;
}
void getFood(float arr[][DAYS], int rows){ //function to store the 
        for (int nRows = 0; nRows < rows; nRows++){
                cout << "Monkey " << (nRows + 1) << "\n";
                for (int nCols = 0; nCols < DAYS; nCols++){
                        cout << " Day " << (nCols + 1) << ": ";
                        cin >> arr[nRows][nCols];
                        // validate.
                        while (arr[nRows][nCols] < 0){
                                cout << "ERROR: food cannot be lower than 0, try again: ";
                                cin >> arr[nRows][nCols];
                        }
                }
                // separate the fields.
                cout << endl;
        }
}
 
//*******************************************************************
// avgFood function
// Gets the average food each monkey eats during the week. It
// will then show a message on the screen.
//*******************************************************************
void avgFood(float arr[][DAYS], int rows){
        double total = 0;       // accumulator.
 
        cout << "Average food a day for " << MONKEYS;
        cout << " monkeys: ";
 
        for (int nRows = 0; nRows < rows; nRows++){
                for (int nCols = 0; nCols < DAYS; nCols++)
                        total += arr[nRows][nCols];
        }
 
        // set formatting.
        cout << fixed << setprecision(2);
        cout << (total / MONKEYS) << " pounds.\n" << endl;
}
 
//*******************************************************************
// leastAmount function
// Get from each monkey the least amount of food eaten
// during the week.
//*******************************************************************
void leastAmount(float arr[][DAYS], int rows){
        for (int nRows = 0; nRows < rows; nRows++){
                float least = arr[0][0];
                int day = 0;    // accumulator.
                for (int nCols = 0; nCols < DAYS; nCols++){
                        if (arr[nRows][nCols] < least){
                                least = arr[nRows][nCols];
                                day += (nCols + 1);
                        }
                }
                cout << "On day " << day;
                cout << " monkey " << (nRows + 1);
                cout << " ate the least amount of food.\n";
        }
        // empty line
        cout << endl;  
}
 
//*******************************************************************
// greatestAmount function
//
//*******************************************************************
void greatestAmount(float arr[][DAYS], int rows){
        for (int nRows = 0; nRows < rows; nRows++){
                float greatest = arr[0][0];
                int day = 0;    // accumulator.
                for (int nCols = 0; nCols < DAYS; nCols++){
                        if (arr[nRows][nCols] > greatest) {
                                greatest = arr[nRows][nCols];
                                day += (nCols + 1);
                        }
                }
                cout << "On day " << day;
                cout << " monkey " << (nRows + 1);
                cout << " ate the greatest amount of food.\n";
        }
        // empty line
        cout << endl; 
        
}



