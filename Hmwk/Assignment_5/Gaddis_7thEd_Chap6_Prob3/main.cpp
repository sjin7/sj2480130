/* 
 * File:   Gaddis_7thEd_Chap6_Prob3
 * Author: Shen Jin
 * Created on July 22, 2014, 1:43 PM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes
float getSales(string name);
void findHighest(float sale_1, float sale_2, float sale_3, float sale_4);

//Execution Begins Here!
int main(int argc, char** argv) {

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
    
    return 0;
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