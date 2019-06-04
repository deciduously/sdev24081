// Lab 5 areas2.cpp 
// Presents a small CLI for calculating the areas of various shapes
// Benjamin Lovy
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// write a single formatted menu option
void writeMenuOption(int choice, string shape)
{
    cout << right << setw(9) << choice;
    cout << " -- " << shape << endl;
}

// display the menu
void writeMenu()
{
    writeMenuOption(1, "square");
    writeMenuOption(2, "circle");
    writeMenuOption(3, "right triangle");
    writeMenuOption(4, "quit");
}

int main()
{  
   // DEFINE THE NAMED CONSTANT PI HERE AND SET ITS VALUE TO 3.14159
   const double PI = 3.14159;
     
   // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
   // NAME AND AN APPROPRIATE DATA TYPE.
   int choice = 0; // for user input
   double dim0 = 0, dim1 = 0; // these will be assigned accordingly depending on the shape
   
   // WRITE STATEMENTS HERE TO DISPLAY THE 4 MENU CHOICES.
   cout << "Program to calculate areas of objects" << endl << endl;
   do
   {
        writeMenu();

        // WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.
        cin >> choice;

        // USE AN IF/ELSE IF STATEMENT TO OBTAIN ANY NEEDED INPUT INFORMATION 
        // AND COMPUTE AND DISPLAY THE AREA FOR EACH VALID MENU CHOICE.
        // IF AN INVALID MENU CHOICE WAS ENTERED, AN ERROR MESSAGE SHOULD
        // BE DISPLAYED.
        if (choice == 1)
        {
            cout << "Dimension of the square: ";
            cin >> dim0;
            // Output the dimension squared
            cout << "Area: " << dim0 * dim0;
        }
        else if (choice == 2)
        {
            cout << "Radius of the circle: ";
            cin >> dim0;
            // Output PI * r ^ 2
            cout << "Area: " << PI * dim0 * dim0;
        }
        else if (choice == 3)
        {
            cout << "Leg 1: ";
            cin >> dim0;
            cout << "Leg 2: ";
            cin >> dim1;
            // output (A * B) / 2
            cout << "Area: " << dim0 * dim1 / 2.0;
        }
        else if (choice == 4) {} // do nothing - we'll exit outside the loop
        else
        {
            cout << "Invalid choice.  Please select 1, 2, 3, or 4.";
        }
        cout << endl << endl << endl << endl;
   } while(choice != 4);
   
   exit(0);   
   return 0;
}