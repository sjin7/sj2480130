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

    float a; //Area
    float r; //Radius
    float w; //Width
    float l; //Length
    float b; //Base
    float h; //Height
    int choice; //input 1-4 on the menu
        
    //Constants for choice
    const int circle = 1,
              rectangle = 2, 
              triangle = 3,
              quit = 4;
    
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
            case circle:              
                cout << "What is the radius of the circle?" << endl;
                cin >> r;
                 if (r<0)
                {
                    cout << "Entry is too small." << endl;
                }
                 else
                {
                a = pi * r * r;
                cout << "The area of this circle is " << a << endl;
                 }
                break;
            case rectangle:
                cout << "Witdth: ";
                cin >> w;
                cout << "Length: ";
                cin >> l;
                if (w<0 || l<0)
                {
                    cout << "Entry is too small." << endl;
                }
                else
                {
                a = w * l;
                cout << "The area of this rectangle is " << a << endl;
                }
                break;
            case triangle:
                cout << "Base: ";
                cin >> b;
                cout << "Height: ";
                cin >> h;
                if (b<0 || h<0)
                {
                    cout << "Entry is too small." << endl;
                }
                else
                {
                a = b * h / 2;
                cout << "The area of this triangle is " << a << endl;
                }
                break;
            case quit:
                cout << "Program ending." << endl;
                break;
            default:
                cout << "Invalid entry." << endl;     
        }
     
    return 0;
}

