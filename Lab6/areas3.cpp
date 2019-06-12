// Lab 6 areas3.cpp 
// Presents a small CLI for calculating the areas of various shapes
// Benjamin Lovy
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void displayMenu();
void findSquareArea();
void findCircleArea();
void findTriangleArea();
void writeMenuOption(int, string);

// DEFINE THE NAMED CONSTANT PI HERE AND SET ITS VALUE TO 3.14159
const double PI = 3.14159;

int main()
{  
   // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
   // NAME AND AN APPROPRIATE DATA TYPE.
   int choice = 0; // for user input
   
   // WRITE STATEMENTS HERE TO DISPLAY THE 4 MENU CHOICES.
   cout << "Program to calculate areas of objects" << endl << endl;
   do
   {
        displayMenu();

        // WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.
        cin >> choice;

        // USE AN IF/ELSE IF STATEMENT TO OBTAIN ANY NEEDED INPUT INFORMATION 
        // AND COMPUTE AND DISPLAY THE AREA FOR EACH VALID MENU CHOICE.
        // IF AN INVALID MENU CHOICE WAS ENTERED, AN ERROR MESSAGE SHOULD
        // BE DISPLAYED.
        if (choice == 1)
            findSquareArea();
        else if (choice == 2)
            findCircleArea();
        else if (choice == 3)
            findTriangleArea();
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

// Find the area of a square
void findSquareArea()
{
    double area, width;
    cout << "Dimension of the square: ";
    cin >> width;
    // Output the dimension squared
    area = width * width;
    cout << "Area: " << area;
}

// Find the area of a circle
void findCircleArea()
{
    double area, radius;
    cout << "Radius of the circle: ";
    cin >> radius;
    // Output PI * r ^ 2
    area = PI * radius * radius;
    cout << "Area: " << area;
}

// Find the area of a triangle
void findTriangleArea()
{
    double area, leg1, leg2;
    cout << "Leg 1: ";
    cin >> leg1;
    cout << "Leg 2: ";
    cin >> leg2;
    // output (A * B) / 2
    area = leg1 * leg2 / 2.0;
    cout << "Area: " << area;
} 

// write a single formatted menu option
void writeMenuOption(int choice, string shape)
{
    cout << right << setw(9) << choice;
    cout << " -- " << shape << endl;
}

// display the menu
void displayMenu()
{
    writeMenuOption(1, "square");
    writeMenuOption(2, "circle");
    writeMenuOption(3, "right triangle");
    writeMenuOption(4, "quit");
}