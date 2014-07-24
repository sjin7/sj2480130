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
float CVPC=1.0e-2f;

//Function Prototypes
int calculateRetail(float, int, float, bool); //case1
float getSales(string name); //case2
void findHighest(float sale_1, float sale_2, float sale_3, float sale_4);//case2
float fallingDistance(float d, int t);//case3
float kineticEnergy(float m, float v);//case4
void celsius(int f);//case5
void coinToss();//case6

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
                for(int t=0; t<+10; t++){
                    cout << fixed << showpoint << setprecision(2) << endl;
                    cout << "For " << t << " seconds, the falling distance is "
                         <<fallingDistance(d, t) << " meters." << endl;
                }//The end of for loop     
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
            }
            case 6:{//Gaddis_7thEd_Chap6_Prob8
                unsigned short t;                   //For t times the coin will be tossed
                cout << "How many times woudl you like to toss the coin?" << endl;
                cin >> t;
                for(int i=1; i<=t; i++){
                    coinToss();
                }//The end of for loop
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
    retail = cost + cost*(static_cast<float>(per)*CVPC);
    
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

