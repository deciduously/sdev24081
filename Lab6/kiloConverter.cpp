// Lab 6 kiloConverter.cpp 
// This menu-driven program lets the user convert 
// pounds to kilograms and kilograms to pounds.
// Benjamin Lovy
#include <iostream>
using namespace std;

// Function prototypes
void displayMenu();
int getChoice(int, int);
double kiloToPounds(double);
double poundsToKilo(double);

/*****     main     *****/
int main()
{
   // DECLARE ANY VARIABLES MAIN USES HERE.
   int choice = 0;
   double input = 0.0, result = 0.0;
   
   // WRITE THE CODE HERE TO CARRY OUT THE STEPS
   // REQUIRED BY THE PROGRAM SPECIFICATIONS.
   do {
       // Display the menu and collect option
       displayMenu();
       choice = getChoice(1, 3);

       // Dispatch requested option
       if (choice == 1)
       {
           cout << "Weight to be converted: ";
           cin >> input;
           result = kiloToPounds(input);
           cout << input << " kilograms = " << result << " pounds." << endl << endl;
       } else if (choice == 2) {
           // the only other option is 2
           // 3 quits the loops and everything else was tossed by getChoice
           cout << "Weight to be converted: ";
           cin >> input;
           result = poundsToKilo(input);
           cout << input << " pounds = " << result << " kilograms." << endl << endl;
       } else {
           // don't need to check specifically, it's the only other option
           break;
       }
   } while (choice != 3);
     
   return 0;
}

/*****     displayMenu     *****/
void displayMenu()
{
    cout << "1. Convert kilograms to pounds" << endl
        << "2. Convert pounds to kilograms" << endl << "3. Quit" << endl << endl;
}

/*****     getChoice     *****/
int getChoice(int min, int max)
{
   int input;
   
   // Get and validate the input
   cin >> input;
   while (input < min || input > max)
   {  cout << "Invalid input. Enter an integer between 1 and 4: ";
      cin  >> input;
   }
   return input;
}

/*****     kiloToPounds     *****/
double kiloToPounds(double kilos)
{
    return kilos * 2.2;
}

/*****    poundsToKilo     *****/
double poundsToKilo(double pounds)
{
    return pounds / 2.2;
}