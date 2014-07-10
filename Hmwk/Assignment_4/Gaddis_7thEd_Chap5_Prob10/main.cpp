/* 
 * File:   Gaddis_7thEd_Chap5_Prob10
 * Author: Shen Jin
 * Created on July 9, 2014, 9:43 PM
 */

//System Library
#include <iostream>
#include <iomanip>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    const int month = 12; //There are 12 months in a year
    int year;//User input the number of years
    int yr; // Initial
    int totMon; //Total months in this calculation
    float rain; //The rainfall
    float totRain; //Total rainfall of all months
    float avg; //The average monthly rainfall
    
   //Get the number of years 
   cout << "What is the period(in years) would you like to calculate?" << endl;
   cin >> year;
   
   if (year<1)
   {
       cout<< "Invalid Entry." << endl;
   }
   for (int yr=1; yr<=year; yr++)
   {
       cout <<"Please enter the rainfalls for year" << yr << endl;
       if  (rain<0)
           cout <<"Invalid Entry." << endl;
       for (int mon=1; mon<=month; mon++)
       {
           cout << "What is the rainfall(in inches) for month" << mon 
                << " ?" << endl;
           cin >> rain;
           totRain += rain;
       }
   }
   
   //Calculation
   totMon = year * 12;
   avg = totRain / static_cast<float>(totMon);
   
   cout << "In " << totMon << " months, the total rainfall is " 
        << fixed << showpoint << setprecision(2) 
        << totRain << "in, and the average monthly rainfall is "
        << fixed << showpoint << setprecision(2) 
        << avg << "in per month." << endl;
   
    return 0;
}

