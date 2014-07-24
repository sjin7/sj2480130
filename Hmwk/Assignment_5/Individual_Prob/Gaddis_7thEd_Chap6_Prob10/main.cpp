/* 
 * File:   Gaddis_7thEd_Chap6_Prob10
 * Author: Shen Jin
 * Created on July 23, 2014, 1:03 PM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes
void getScore(float &);
void calcAverage(float &, float &, float &, float &, float &);
int findLowest(float &, float &, float &, float &, float &);

//Execution Starts Here!
int main(int argc, char** argv) {

    //Declare Variables
    float sc1, sc2, sc3, sc4, sc5;
    
    //Get the five scores
    cout << "1st Score: " << endl;
    getScore(sc1);
    cout << "2nd Score: " << endl;
    getScore(sc2);
    cout << "3rd Score: " << endl;
    getScore(sc3);
    cout << "4th Score: " << endl;
    getScore(sc4);
    cout << "5th Score: " << endl;
    getScore(sc5);
    
    //Output the average score
    calcAverage(sc1, sc2, sc3, sc4, sc5);
    
    return 0;
}
void getScore(float &score){
    
    cout << "Please enter your score(0-100)." << endl;
    cin >> score;
    while(score<0 || score>100){
        cout << "Invalid Entry. Please enter a score." << endl;
        cin >> score;
    }
}
int findLowest(float &sc1, float &sc2, float &sc3, float &sc4, float &sc5){
    
    float low;
    low = sc1;
    if(low>sc2) low=sc2;
    if(low>sc3) low=sc3;
    if(low>sc4) low=sc4;
    if(low>sc5) low=sc5;
    
    return low;
}
void calcAverage(float &sc1, float &sc2, float &sc3, float &sc4, float &sc5){
    
    float avg;
    float low = findLowest(sc1, sc2, sc3, sc4, sc5);
    avg = (sc1 + sc2 + sc3 + sc4 + sc5 - low)/4;
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "The average of all the scores with the lowest " << endl;
    cout << "being dropped is " << avg;
}
