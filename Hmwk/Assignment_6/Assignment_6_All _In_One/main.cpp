/* 
 * File:  Assignment_6
 * Author: Shen Jin
 * Created on July 25, 2014, 4:38 PM
 */

//System Level Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes
//case 4
const int MONKEYS = 3; // number of monkeys
const int DAYS = 7;   //number of days of the year
void getFood(float arr[][DAYS], int rows); //function for the food each monkey have consumed, 2D array
void avgFood(float arr[][DAYS], int rows); //function for the average amonut of food between the 3 monkies
void leastAmount(float arr[][DAYS], int rows); //function for the least amount of food consumed, by which monkey and which day
void greatestAmount(float arr[][DAYS], int rows); //function for the greatest amount of food consumed by which monkey and which day

//case 5
const int MONTHS = 3; // for this problem we will use constant integers for 3 summer months
const int DAY = 30;  //and as well as for the 30 days ***note that 31st day is not allocated, by Gaddis book
void readDataFromFile(char arr[][DAY], int size); //function for reading in the data file "RainOrShine.txt:
void showMonthlyReport(char arr[][DAY], int size); //function to store weather patterns for each month
void showTotalReport(int rainy, int cloudy, int sunny);//function to allocate in what days were Rainy,cloudy,and sunny
void monthWithMostRain(char arr[][DAY], int size); //function for the month with the largest amount of rain

//case 7
const int NUM_QUES = 20;//holds the number of questions that is set to 20, as instructed by book
const int MIN_COR = 15; //validated by book the student/user must have at least a 15/20 grade to pass
void checkAnswers(char[], char[], int, int); //void function to check the answers

//case 9
int searchList(int [], int, int); //linear search method
const int arraySize = 18; //constant integer variable setting array size 18, corresponds to the account numbers given by book

//case 10
const int LUCKY_NUMS =10; //"lucky" combinations as given by book
// Function prototype that searches winning ticket number, linear search method
int ticketSearch(const int [], int, int);

//Execution Starts Here!
int main(int argc, char** argv) {
     //Declare Variables for Menu
    unsigned short problemN;
    char again;
    do{
        cout << "Choose a problem from 1-10." << endl;
        cin >> problemN;
        
        switch(problemN){
            case 1:{//Gaddis_7thEd_Chap7_Prob1
                const int SIZE=10;
                int array[SIZE];
                int small,large;

                for(int i=0;i<SIZE;i++){
                        cout<<"Value "<<i+1<<":";
                        cin>>array[i];
                }

                small=array[0];
                large=array[0];
                for(int i=0;i<SIZE;i++){
                        if(array[i]<small)
                                small=array[i];
                        if(array[i]>large)
                                large=array[i];
                }

                cout<<"The largest value:"<< large << endl;
                cout<<"The smallest value:"<< small << endl;
                break;
            }
            case 2:{//Gaddis_7thEd_Chap7_Prob2
                float avg = 0; //average rainfall
                float total = 0; //the total rainfall
                float low; //the lowest rainfall
                float high; // the highest rainfall
                string lowestMonth; // the name of the month that has the lowest rainfall
                string highestMonth; // the name of the month that has the highest rainfall
                string monthNames[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
                //string array holds the name of all 12 months
                float monthlyTotals[12]; // the rainfall in an array given by user
                char again; //char for restarting the program if user chooses Y/y

                do{
                        cout << "Please enter the rainfall inches for all the months:" << endl;

                        //positive number validation as instructed by book
                        for (int i = 0; i < 12; i++){
                                cout << monthNames[i] << ": ";
                                cin >> monthlyTotals[i];

                                while (monthlyTotals[i] < 0){
                                        cout << "Please enter a positive number for " << monthNames[i] << endl;
                                        cin >> monthlyTotals[i];
                                }
                        }	

                        //for loop i is set to 0 and i is less than 12
                        for (int i=0; i <12; i++){
                                total = total + monthlyTotals[i]; //adds the total rainfall for the months
                        }

                        //Averages out the total rainfall and divide it by the number of months
                        avg = total / 12;

                        //Highest and Lowest months of rainfall [0]
                        high = monthlyTotals[0];
                        highestMonth = monthNames[0];
                        low = monthlyTotals[0];
                        lowestMonth = monthNames[0];

                        for (int i=0; i<12; i++){
                                if (monthlyTotals[i] > high) {
                                        high = monthlyTotals[i]; 
                                        highestMonth = monthNames[i];
                                }
                                if (monthlyTotals[i] < low){
                                        low = monthlyTotals[i];
                                        lowestMonth = monthNames[i];
                                }
                        }	

                        //Set numeric output formatting
                        cout << fixed << showpoint << setprecision(2);
                        //displays the total rainfall and average in inches,
                        //displays the lowest and highest month as well as their respective total of rainfall from lowest to highest
                        cout << "The total rainfall throughout the year was " << total << " inches." << endl;
                        cout << "The average rainfall for the entire year is " << avg << " inches." << endl;
                        cout << "The month with the lowest rainfall is " << lowestMonth << ", with a total of "<< low <<" inches." << endl;
                        cout << "The month with the highest rainfall is " << highestMonth << ", with a total of "<< high <<" inches." << endl;

                        //setting the values back to 0 if the user decides to run the program once more.
                        avg = 0;
                        total = 0;
                        low = 0;
                        high = 0;
                        highestMonth;
                        lowestMonth;

                        cout << "\nWould you like to run the program again? (Y/N) ";
                        cin >> again;
                        cout << endl;
                }while(again=='y' || again=='Y'); // The end of while loop
                break;
            }
            case 3:{// Gaddis_7thEd_Chap7_Prob3
                const int SIZE=5;
                string names[SIZE];
                int sales[SIZE]; //0-5 array for the # of jars sold
                int i; // in an array i will hold values of jars sold/names of salsa used in the if statements below
                int HighSell=0; //setting the highest salsa sold to 0
                int HiName;  //holds the highest selling salsa name
                int LowSell=0; //holds the lowest selling salsa sold to 0
                int LowName; //holds the lowest selling salsa name
                int total=0; //holds the total number of jars (salsa) sold

                names[0] = "Mild"; //these are the 5 salsa names given by book arrays 0-4 (total of 5 flavors)
                names[1] = "Medium";
                names[2] = "Sweet";
                names[3] = "Hot";
                names[4] = "Zesty";

                for (i=1;i<SIZE;i++){ //prompt the user to enter in the number of jars sold for each salsa flavor
                    cout<<"Enter number of sold "<<names[i]<<" jars: ";
                    cin>>sales[i]; //it is then stores as i in the array
                    total = total + sales[i]; //calculations will add total to the amount of sales in array (5 flavors) = total

                     if (i==1) {            
                         HighSell = sales[i]; HiName = i; LowSell=sales[i]; LowName = i;  //setting the salsa names/sales with the lowest and highest sold = i
                     } 
                    if (HighSell<sales[i]){ 
                        HighSell=sales[i]; HiName = i; 
                    }
                    if (LowSell>sales[i]){ 
                        LowSell=sales[i]; LowName = i; 
                    }
                }
                cout<<"The number of jars sold for each salsa are:\r\n";

                for (i=1;i<SIZE;i++){ //for loop to display the # of jars sold
                    cout<<sales[i]<<" "<<names[i]<<" jars"<<"\r\n"; //sales-salsa names
                }

                //displays the total sales and also the highest , and lowest selling salsa
                //from if statements we can determine what were the names of both high or low selling salsa and as well as the sales (i=0)
                cout<<"The total sales: "<<total<<" jars\r\n";
                cout<<"The highest sales: "<<HighSell<<" ("<<names[HiName]<<" salsa)\r\n";
                cout<<"The lowest sales: "<<LowSell<<" ("<<names[LowName]<<" salsa)\r\n"; 

                break;
            }
            case 4:{// Gaddis_7thEd_Chap7_Prob4
                 float food[MONKEYS][DAYS]; //2D array for the food variable, for 3 MONKEY for row, for 7 days DAYS for column
                 cout << "Please enter the amount of (lbs) the monkeys have consumed.\n\n";
                 getFood(food, MONKEYS);
                 cout << "Report:\n";
                 avgFood(food, MONKEYS);

                 // get least amount in that week.
                 leastAmount(food, MONKEYS);
                 // get greatest amount in that week.
                 greatestAmount(food, MONKEYS);
                break;
            }
            case 5:{// Gaddis_7thEd_Chap7_Prob5
                 //declares string for months and days 2D Array
                char weatherStatistics[MONTHS][DAY];
                //fstream reading from file "RainOrShine.txt"
                readDataFromFile(weatherStatistics, MONTHS);
                //displays the monthly weather report
                showMonthlyReport(weatherStatistics, MONTHS);
                //month with the largest amount if rain
                monthWithMostRain(weatherStatistics, MONTHS);
                break;
            }
            case 6:{// Gaddis_7thEd_Chap7_Prob8
                int x; //holds employee ID number/wages
                int empld[7] = {5658845,4520125,7895122,8777541,8451277,1302850,750489}; //holds the IDs given by book
                float rate; //holds the wages
                float hour; //holds the number of hours the employee has worked
                float wages[7]; //float array holds the wages for the 7 employees

                for(x=0;x<=6;x++){ //for loop to display the 7 employee IDs
                cout << "Employee number : " << empld[x] << endl;

                cout << "\nPlease enter the employee's hour : "; //user is asked to enter in the number of hours worked
                cin >> hour;
                cout << "Please enter employee's pay rate : "; //user is asked to enter the pay rate by which the employees are paid
                cin >> rate;

                wages[x] = hour * rate; //this calculation determines the wages for the employees
                cout << "\n";
                }

                for(x=0;x<=6;x++){
                cout << "Employee ID # : " << empld[x] << endl; //displays the employees ID number
                cout << "Employee is paid : " << fixed << setprecision(2) << wages[x] << endl; //displays the paid amount to the employee after calculations
                cout << "\n";
                }
                break;
            }
            case 7:{// Gaddis_7thEd_Chap7_Prob9
                //the 20 answers prefabricated by book into an array
                char answers[NUM_QUES] = {
                'B', 'D', 'A', 'A', 'C',
                'A', 'B', 'A', 'C', 'D',
                'B', 'C', 'D', 'A', 'D',
                'C', 'C', 'B', 'D', 'A'};

                char studAns[NUM_QUES]; //char variable holds the array for student answers for the 20 questions

                //Loop for users answers
                for (int replies = 0; replies < NUM_QUES; replies++) { //for loop, prompts the student/user to enter in the answers to the test
                    cout<< "Please enter your answers: "              //incremented to 20 questions
                    << (replies + 1) << ": ";
                    cin >> studAns[replies];

                    //input validation for user when entering the answers
                    //user/student is tasked to inputing the answers, A,B,C,or D
                    while (studAns[replies] != 'A' && studAns[replies] != 'B' && studAns[replies] != 'C' && studAns[replies] != 'D') {
                        cout << "You must enter A, B, C, or D\n";

                        cout<< "Please enter your answers: "
                        << (replies + 1) << ": ";
                        cin >> studAns[replies];
                    }
                }
                checkAnswers(answers, studAns, NUM_QUES, MIN_COR);
                break;
            }
            case 8:{// Gaddis_7thEd_Chap7_Prob13
               int lottery[5]; //array holds the 5 numbers for lottery
               int user[5]; //array holds the 5 numbers the user will input
               bool allmatch = true;//boolean statement setting all match = true
               bool nomatch = true; //boolean statement for no match = true
               int matchcount = 0;  //holds match count setting it to 0

              srand (time(NULL));
              lottery[0] = rand() % 20; //setting array 0-4 (5 numbers) rand to 20%
              lottery[1] = rand() % 20;
              lottery[2] = rand() % 20;
              lottery[3] = rand() % 20;
              lottery[4] = rand() % 20;

              for(int i = 0; i < 5; i++){
                 cout <<"Please enter a number between 0 and 9: ";
                 cin>>user[i]; //holders the user's input
                          while (user[i]<0 || user[i]>9){ //the user cannot use a negative number (less than 0)
                                                         // and the digit cannot pass over number 9 (i.e 11,22,33 etc...)
                          cout << "Error! Entry must be between 0 and 9: "; //input validation
                                 cin >> user[i];
                          }
              }

            cout<<endl<<"Lottery array: "; //lottery array will display the lottery numbers
                                           //as instructed by book
              for(int i = 0; i < 5; i++){
                     cout<<lottery[i];
                     cout<<"|";
              }

            cout<<"User array: "; //as instructed by book, User array will display what numbers user entered in

              for(int i = 0; i < 5; i++){
                     cout<<user[i]; //outputs the user array, for better comparison against the actual lottery numbers(lottery array)
                     cout<<"|";
              }

              for(int i = 0; i < 5; i++){

                     if(user[i] == lottery[i]){

                           matchcount++;

                           nomatch = false;

                     }

                     if(user[i] != lottery[i]){
                           allmatch = false;
                     }
              }

                  if(nomatch == true){//as indicated up above, nomatch was set to true, user numbers for lottery has no match
                          cout<<endl<<endl<<"Sorry! Numbers do not match, better luck next time!"<<endl;
                     }



                     if(allmatch == true){ //boolean statement above, if all match is true, user will have won the lottery, as numbers match.
                          cout<<endl<<endl<<"**CONGRATULATIONS! YOU ARE THE GRAND PRIZE WINNER**"<<endl;
                     }

                if(matchcount != 0)
                   cout<<endl<<endl<<matchcount<<" Match"<<endl;
                break;
            }
            case 9:{// Gaddis_7thEd_Chap8_Prob1
                int tests[arraySize] = {5658845, 450125, 7895122, 8777541, //account numbers given by book, 18 in total
                8451277,1302850, 8080152, 4562555, 5552012, 5050552, 7825877,
                1250255,1005231, 654231, 3852085, 7576651, 7881200, 4581002};

                int accountN = 0; //holds the account numbers
                int results = 0; //holds what # the account is in the element(inside array))

                cout<<"Please enter a valid account #"<<endl;
                cin >> accountN;

                results = searchList(tests, arraySize, accountN);

                if (results == -1)
                cout << "The number entered is invalid.\n"; //Displays the number given by user is invalid, instructed by book
                else
                {
                        cout << "The number entered is valid.\n"; //Displays the number is valid, instructed by book	
                        cout << (results) << ".\n";	
                }
                break;
            }
            case 10:{// Gaddis_7thEd_Chap8_Prob2
                //user continues playing the lottery
                char again;

                const char QUIT = 'N';
                //determines if player's ticket is a winner
                int winNum;
                //5 digit "lucky" ticket number entered by user
                int luckyNum;
                //holds winning ticket number
                int ticket;

                //Array holding the winning tickets for each week
                int lotoNum[LUCKY_NUMS] = {13579, 26791, 26792, 33445, 55555,
                62483, 77777, 79422, 85647, 93121};	
                //Player decides if they want to continue playing

                                for (int week = 0; week < 10; week++)
                                {
                                        //Winning lotto ticket for each week (10 weeks total)
                                        ticket = lotoNum[week];

                                        cout << "Please enter your 'lucky' combination; " << (week + 1) << ": " << endl;
                                        //Player's ticket number
                                        cin >> luckyNum;
                                        //Calls linear search for winning lotto ticket
                                        winNum = ticketSearch(lotoNum, LUCKY_NUMS, luckyNum); 
                                        //Error message if user's "lucky" number is not the winning ticket
                                        if ((winNum == -1) || luckyNum != ticket)
                                        {

                                                cout << "Sorry you did not win! ";
                                                cout << "Try Again?? (Y/N)";
                                                cin >> again;
                                        }

                                        //Player wins the lottery
                                        else if (luckyNum == ticket)
                                        {


                                                cout << "CONGRATULATIONS! YOU WIN THE LOTTERY!";
                                                cout << "Play again? (Y/N)";
                                                cin >> again;
                                        }

                                        if ((again != 'Y') && (again != 'y')) 
                                                {
                                                        //exit message
                                                        cout << "Have a nice day! =)";
                                                        //exits the lottery program
                                                        exit(0);
                                                }

                                }
                
                break;
            }
            default:{
                cout << "Choose a problem from 1-10." << endl;
            }
        }// The end of switch cases
        cout << "Would you like to run another problem?" << endl;
        cin >> again;
    }while(again=='Y' || again=='y');
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
void readDataFromFile(char arr[][DAY], int size){ //function for reading in data from file
                                                     //the data stored in file was given by book
            // open file.
            ifstream inputFile("RainOrShine.txt"); //the txt file has three rows representing the 3 months of summer
            if (!inputFile){                       // it then has 30 days indicating R for rainy, C for cloudy, S for sunny
                                               //note**no information of weather was collected for the 31st day(from book)
                    cout << "ERROR: cannot find/read file." << endl;
                
            }
     
            // read data.
            for (int nRow = 0; nRow < size; nRow++){
                    for (int nCol = 0; (nCol < DAY) && (inputFile >> arr[nRow][nCol]); nCol++){
                    }
            }
            inputFile.close();
    }
     
    // showMonthlyReport function
   //this void function will store in how many days (30) weather patterns occurred for the summer months
    void showMonthlyReport(char arr[][DAY], int size){
            // pass by value to next function.
            static int totalRainy = 0;
            int totalCoudy = 0;
            int totalSunny = 0;
            int totalMismatch = 0;
     
            cout << "REPORTS HOW MANY DAYS IN THE SUMMER MONTHS WERE RAINY, CLOUDY, OR SUNNY:\n";
     
            for (int nRows = 0; nRows < size; nRows++){
                    // counters.
                    int rainy = 0;
                    int cloudy = 0;
                    int sunny = 0;
                    int mismatch = 0;
     
                    for (int nCols = 0; nCols < DAY; nCols++){
                            // checks for rainy, cloudy or sunny.
                            if (arr[nRows][nCols] == 'R'){
                                    rainy++;
                                    totalRainy++;
                            }
                            else if ((arr[nRows][nCols] == 'C')){
                                    cloudy++;
                                    totalCoudy++;
                            }
                            else if ((arr[nRows][nCols] == 'S')){
                                    sunny++;
                                    totalSunny++;
                            }
                            else{
                                    mismatch++;
                                    cout << "ERROR: inaccurate results! Found ";
                                    cout << mismatch << " mismatched character(s)" << endl;
                                    totalMismatch++;
                            }
                    }
                    cout << "Month " << (nRows + 1); //this will display the monthly report of weather patterns
                    cout << ": Rain (" << rainy;
                    cout << ") - Cloudy (" << cloudy;
                    cout << ") - Sunny (" << sunny;
                    cout << ")" << endl;
            }
            // send
            showTotalReport(totalRainy, totalCoudy, totalSunny);
    }
     
    // showTotalReport function
    // Get data from showMonthlyReport and show totals.
    void showTotalReport(int rainy, int cloudy, int sunny){
            cout << "\nSTATISTICS READ FROM TXT FILE\n";
            cout << "Rain (" << rainy;
            cout << ") - Cloudy (" << cloudy;
            cout << ") - Sunny (" << sunny;
            cout << ")" << endl;
    }
     
    // monthWithMostRain function
    //from this we will be able to determine which month had the largest amount of rain, as instructed by book
   void monthWithMostRain(char arr[][DAY], int size)
    {
            char months[3][7] = {"June", "July", "August"}; //3 by 7 
            int subscript = -1;
            int rainy = 0;
            int highest = 0;
     
            for (int nRows = 0; nRows < size; nRows++)
            {
                    for (int nCols = 0; nCols < DAY; nCols++)
                    {                      
                            // check if rainy.
                            if (arr[nRows][nCols] == 'R') //Rainy
                            {
                                    rainy++;
                            }
                    }
                    // checks for the highest amount of rainy days
                    if (rainy > highest)
                    {
                            highest = rainy;
                            subscript++;
                    }
                    rainy = 0;
            }
            
            cout << "\nThe month " << months[subscript] << " had the largest amount of rain." << endl;
    }       //this will display which month had the largest amount of rain



//void function that checks the student answers and comparing it to the correct answers
//using for loop and if statement: if the answers given by user is equal to student answers
void checkAnswers(char answers1[], char stu_answers1[], int NUM_QUES, int MIN_COR) {
	    //cout << "max: " << NUM_QUES;
	    int correctAnswers = 0;

	    //Check the student's replies against the correct answers
	    for (int i = 0; i < NUM_QUES; i++)  {
	        if (answers1[i] == stu_answers1[i])
	            correctAnswers++;
	    }
	    //displays whether the user/student has failed or passed the exam
            //if the correct answers is greater than or equal to 15 the student passes, else, student fails
	    cout << "\nYou must have at least 15 correct to pass.";
	    if (correctAnswers >= MIN_COR) {
	        cout << "\nStudent passed the exam\n\n";
	    }
	    else {
	        cout <<"\nStudent failed the exam\n\n";
	    }

	    //Displays the number of questions that was answered incorrectly by user/student
	    cout << " answered questions.\n";
	    for (int i = 0; i < NUM_QUES; i++)  {
	        if (answers1[i] != stu_answers1[i])
	            cout << "Question # " << i << " is incorrect." << endl;
	    }

	    //Display the number of correct and incorrect answers provided by the user/student
	    cout << "\nCorrect Answers = " << correctAnswers << endl;
	    cout << "Incorrect Answers = " << NUM_QUES - correctAnswers << endl;
	}
int searchList(int list[], int numElems, int value)
{
	int index = 0; //subscript to search array
	int position = -1; //record position of search value
	bool found = false; // boolean to indicate if the value was found, found is set to false

	while (index < numElems && !found)
	{
		 if (list[index] == value) // If the value is found
		 {
			found = true; // Set the flag
			position = index; // Record the value's subscript
		 }
		index++; // Go to the next element
	}

	return position; // Return the position, or -1
}
int ticketSearch(const int ticketList[], int numTickets, int winNum)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while ((index < numTickets) && !found) 
	{
		if (ticketList[index] == winNum)
		{
			found = true;
			position = index;
		}
		index ++;
	}
	return position;
}