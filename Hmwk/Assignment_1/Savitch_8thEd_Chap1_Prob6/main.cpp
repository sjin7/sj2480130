/* 
 * File:   Savitch_8thEd_Chap1_Prob6
 * Author: Shen Jin
 * Created on June 25, 2014, 1:08 PM
 */

//System Library
#include <iostream>

using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
//Once int is omitted,
//main.cpp:19:6: error: expected unqualified-id before ‘int’
//main.cpp:19:6: error: expected ‘)’ before ‘int’
//main.cpp:19:13: error: expected initializer before ‘argc’
//
{
    
    cout << "Hello!\n";
    
    int number_of_pods, peas_per_pod, total_peas;
    cout << "Press return after entering a number.\n";
    //main.cpp:23:12: error: expected primary-expression before ‘<’ token
    cout << "Enter the number of pods:\n";
    
    cin >> number_of_pods;
    //main.cpp:28:11: note:   ‘std::istream {aka std::basic_istream<char>}’ 
    //is not derived from ‘const std::basic_string<_CharT, _Traits, _Alloc>’
    
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
    
    cout << "Good-bye\n";
    return 0;
}

