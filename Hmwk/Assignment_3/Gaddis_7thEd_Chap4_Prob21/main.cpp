/* 
 * File:   Gaddis_7thEd_Chap4_Prob21
 * Author: Shen Jin
 * Created on July 4, 2014, 2:05 PM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Defined Libraries

//Global Constants
float pi = 3.14159;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    float A; //Area
    float R; //Radius
    float W; //Width
    float L; //Length
    float B; //Base
    float H; //Height
    int choice; //input 1-4 on the menu
        
    //Constants for choice
    const int Circle = 1,
              Rectangle = 2, 
              Triangle = 3,
              Quit = 4;
    
    // Set up the menu and get a choice
    cout << "Choose 1-4 to do the type of calculation you want." << endl;
    cout << "1.Calculate the Area of a Circle." << endl;
    cout << "2. Calculate the Area of a Rectangle." << endl;
    cout << "3. Calculate the Area of a Triangle." << endl;
    cout << "4. Quit." << endl;
    cin >> choice;
    
    //Set the numeric output formatting
    cout << fixed << setprecision(2) << endl;
    
    //Respond to the user's menu selection
        switch (choice)
        {
            case Circle:              
                cout << "What is the radius of the circle?" << endl;
                cin >> R;
                 if (R<0)
                {
                    cout << "Entry is too small." << endl;
                }
                 else
                {
                A = pi * R * R;
                cout << "The area of this circle is " << A << endl;
                 }
                break;
            case Rectangle:
                cout << "Witdth: ";
                cin >> W;
                cout << "Length: ";
                cin >> L;
                if (W<0 || L<0)
                {
                    cout << "Entry is too small." << endl;
                }
                else
                {
                A = W * L;
                cout << "The area of this rectangle is " << A << endl;
                }
                break;
            case Triangle:
                cout << "Base: ";
                cin >> B;
                cout << "Height: ";
                cin >> H;
                if (B<0 || H<0)
                {
                    cout << "Entry is too small." << endl;
                }
                else
                {
                A = B * H / 2;
                cout << "The area of this triangle is " << A << endl;
                }
                break;
            case Quit:
                cout << "Program ending." << endl;
                break;
            default:
                cout << "Invalid entry." << endl;     
        }
     
    return 0;
}

