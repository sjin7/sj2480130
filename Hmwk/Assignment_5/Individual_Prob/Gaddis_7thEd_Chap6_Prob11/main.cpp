/* 
 * File:   Gaddis_7thEd_Chap6_Prob11
 * Author: Shen Jin
 * Created on July 23, 2014, 11:22 PM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes
void getJudgeData(float &);
void calcScore(float &, float &, float &, float &, float &);
int findLowest(float &, float &, float &, float &, float &);
int findHighest(float &, float &, float &, float &, float &);

//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare Variables
    float sc1, sc2, sc3, sc4, sc5;
    //Get the five scores
    cout << "1st Score: " << endl;
    getJudgeData(sc1);
    cout << "2nd Score: " << endl;
    getJudgeData(sc2);
    cout << "3rd Score: " << endl;
    getJudgeData(sc3);
    cout << "4th Score: " << endl;
    getJudgeData(sc4);
    cout << "5th Score: " << endl;
    getJudgeData(sc5);
    
    //Output the average
    calcScore(sc1, sc2, sc3, sc4, sc5);
    return 0;
}
void getJudgeData(float &score){
    cout << "Please enter your score(0-10)." << endl;
    cin >> score;
    while(score<0 || score>10){
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
int findHighest(float &sc1, float &sc2, float &sc3, float &sc4, float &sc5){
    float high;
    high = sc1;
    if(high<sc2) high=sc2;
    if(high<sc3) high=sc3;
    if(high<sc4) high=sc4;
    if(high<sc5) high=sc5;
    return high;
}
void calcScore(float &sc1, float &sc2, float &sc3, float &sc4, float &sc5){
    float avg;
    float low = findLowest(sc1, sc2, sc3, sc4, sc5);
    float high = findHighest(sc1, sc2, sc3, sc4, sc5);
    avg = (sc1 + sc2 + sc3 + sc4 + sc5 - low - high)/3;
    cout << fixed << showpoint << setprecision(1) << endl;
    cout << "The average of all the scores with the lowest and highest" << endl;
    cout << "being dropped is " << avg;
}