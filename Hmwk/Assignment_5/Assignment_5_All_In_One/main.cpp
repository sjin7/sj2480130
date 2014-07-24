/* 
 * File:   Assignment_5_Gaddis_7thEd_Chap6
 * Author: Shen Jin
 * Created on July 23, 2014, 10:08 PM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Defined Libraries

//Global Constants
float CVS = 1.0e-2f; //The conversion for percentage case1 case10

//Function Prototypes
int calculateRetail(float, int, float, bool); //case1
float getSales(string name); //case2
void findHighest(float sale_1, float sale_2, float sale_3, float sale_4);//case2
float fallingDistance(float d, int t);//case3
float kineticEnergy(float m, float v);//case4
void celsius(int f);//case5
void coinToss();//case6
void getScore(float &); //case7
void calcAverage(float &, float &, float &, float &, float &);//case7
int findLowest(float &, float &, float &, float &, float &);//case7
void getJudgeData(float &);//case8
void calcScore(float &, float &, float &, float &, float &);//case8
int findLowest(float &, float &, float &, float &, float &);//case8
int findHighest(float &, float &, float &, float &, float &);//case8
bool isPrime(int num);//case9
float population(float, float, float, float);//case10


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables for Menu
    unsigned short problemN;
    char again;
    do{
        cout << "Choose a problem from 1-10." << endl;
        cin >> problemN;

        switch(problemN){
            case 1:{//Gaddis_7thEd_Chap6_Prob1
            //Declare Variables
            float cost;                 //The wholesale cost
            int per;                    //The percentage
            float retail;               //The retail price
            bool invalid;

            //Set numeric output formatting
            cout << fixed << showpoint << setprecision(2);
            //Call the function
            cout << "The retail price for this item is $" 
                 <<  calculateRetail(cost, per, retail, invalid)<< endl;
                break;
            }
            case 2:{//Gaddis_7thEd_Chap6_Prob3
                // Declare Variables
                float sale_1;
                float sale_2;
                float sale_3;
                float sale_4;

                sale_1 = getSales("Northeast");
                sale_2 = getSales("Southeast");
                sale_3 = getSales("Northwest");
                sale_4 = getSales("Southwest");

                findHighest(sale_1, sale_2, sale_3, sale_4);    
                break;
            }
            case 3:{//Gaddis_7thEd_Chap6_Prob5
                float d;
                for(int t=0; t<=10; t++){
                    cout << fixed << showpoint << setprecision(2) << endl;
                    cout << "For " << t << " seconds, the falling distance is "
                         <<fallingDistance(d, t) << " meters." << endl;
                }//The end of for loop     
                break;
            }
            case 4:{//Gaddis_7thEd_Chap6_Prob6
                float m;            //mass
                float v;            //velocity
                cout << "What is the mass of the object(kilogram)?" << endl;
                cin >> m;
                cout << "What is the velocity (meters/second)?" << endl;
                cin >> v;

                cout << fixed << showpoint << setprecision(2) << endl;
                cout << "The Kinetic Energy of this moving object is "
                     << kineticEnergy(m,v) << "kg/(m^2/s^2)" << endl;
                break;
            }
            case 5:{//Gaddis_7thEd_Chap6_Prob7
                //Output table
                cout << setw(5) <<  "Fahrenheit" << setw(10) <<  "Celsius" << endl;
                for(int i=0; i<=25; i++){
                    cout << "-";
                }cout << endl;          

                 //Loop a table from 0 to 20
                for(int fahren=0; fahren <= 20; fahren++){
                    cout << fixed << showpoint << setprecision(2);
                    cout << setw(5) << fahren << setw(14);
                    celsius(fahren);
                }//The end of for loop
                break;
            }
            case 6:{//Gaddis_7thEd_Chap6_Prob8
                unsigned short t;                   //For t times the coin will be tossed
                cout << "How many times woudl you like to toss the coin?" << endl;
                cin >> t;
                for(int i=1; i<=t; i++){
                    coinToss();
                }//The end of for loop
                break;
            }
            case 7:{//Gaddis_7thEd_Chap6_Prob10
                //Declare Variables
                float sc1, sc2, sc3, sc4, sc5, score;
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
                break;
            }
            case 8:{// Gaddis_7thEd_Chap6_Prob11
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
                break;
            }
            case 9:{//Gaddis_7thEd_Chap6_Prob21
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
                break;
            }
            case 10:{//Gaddis_7thEd_Chap6_Prob15
                //Declare Variables
                float n;           //New population size
                float p;           //Previous population size
                float b;           //Birth Rate
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

                //Display Result
                cout << "Starting Population" << setw(15) << "Birth Rate" << setw(15)
                    << "Death Rate" << setw(20) << "Number of Years" << setw(18)
                    << "New Population" << endl;
                for (int i=0; i<=85; i++){
                    cout << "-";
                }cout << endl;
                for(int i=1; i<=yr; i++){
                    cout << fixed << showpoint << setprecision(2);
                    cout << setw(10) << p << setw(20) << b << setw(17) << d 
                        << setw(17) << i << setw(17) << population(n, p, b, d) << endl;
                    p = p + b*CVS*p - d*CVS*p;
                }
                break;
            }
            default:{
                cout << "Choose a problem from 1-10." << endl;
            }
        } //The end of swith case
        cout << "Type Y if you like to run another problem." << endl;
        cout << "Type any other letter if not." << endl;
        cin >> again;
    }while(again=='Y' || again=='y'); //The end of outer do-while loop
    
    return 0;
}
int calculateRetail(float cost, int per, float retail, bool invalid){
    do{
        invalid=false;
        cout << "What is the wholesale cost for this item?" << endl;
        cin >> cost;
        //Input validation
        if(cost<=0){
            invalid=true;
        }
        if(invalid==true){
            cout << "Invalid Entry. Please enter a positive price." << endl;
        }
     }while(invalid==true);
     
    do{
        invalid=false;
        cout << "What its markup percentage?" << endl;
        cin >> per;
        //Input Validation
        if(per<0){
            invalid=true;
        }
        if(invalid==true){
            cout << "Invalid Entry. Please enter a positive price." << endl;
        }
     }while(invalid==true);
    
    cout << "The cost for this item is $" << cost << "." << endl;
    cout << "With the markup percentage of " << per << "%" << endl;
   
    //Calculation
    retail = cost + cost*(static_cast<float>(per)*CVS);
    
    return retail;
}
float getSales(string name){
    float sale;
    cout << "What is the quarterly sales figure for " << name << "?" << endl;
    cin >> sale;    
    while(sale<0){
        cout << "Invalid Entry. Please enter a positive sale figure." << endl;
        cin >> sale;
    }
    return sale;
}

void findHighest(float sale_1, float sale_2, float sale_3, float sale_4){
    float high;
    string name;
    if(sale_1>sale_2){
        high = sale_1;
        name = "Northeast";
    }
    else{
        high = sale_2;
        name = "Southeast";
    }
    
    if(high<sale_3){
        high = sale_3;
        name = "Northwest";
    }
    if(high<sale_4){
        high = sale_4;
        name = "Southwest";
    }
    cout << "The division that has the greatest sale is " << name << endl;
}
float fallingDistance(float d, int t){
    float g = 9.8;     //Gravity
    //Calculation for distance
    d = g * (t * t) / 2;
    return d;
}
float kineticEnergy(float m, float v){
    float ke;         //Kinetic Energy
    ke = m * v * v /2;
    return ke;
}
void celsius(int f){
    float cel;
    float temp = 9.0/5.0;     //Needs a decimal place
    cel= temp*(f - 32);
    cout << cel << endl;
}
void coinToss(){
     unsigned short side;
    //Generate a random side of the coin
     side=rand()%2+1; //1 through 2
     
     //Output the result
     if(side==1){
         cout << "Heads" << endl;
     }
     else{
         cout << "Tails" << endl;
     }
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
float population(float n, float p, float b, float d){
    
    n = p + b*CVS*p - d*CVS*p;
    return n;
}
    