// Lab 6 areas4.cpp 
// Presents a small CLI for calculating the areas of various shapes
// Benjamin Lovy
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void displayMenu();
double findSquareArea();
double findCircleArea();
double findTriangleArea();
int getChoice(int, int);
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
        choice = getChoice(1, 4);

        // USE AN IF/ELSE IF STATEMENT TO OBTAIN ANY NEEDED INPUT INFORMATION 
        // AND COMPUTE AND DISPLAY THE AREA FOR EACH VALID MENU CHOICE.
        // IF AN INVALID MENU CHOICE WAS ENTERED, AN ERROR MESSAGE SHOULD
        // BE DISPLAYED.
        if (choice == 1)
            cout << "Area: " << findSquareArea() << endl;
        else if (choice == 2)
            cout << "Area: " << findCircleArea() << endl;
        else if (choice == 3)
            cout << "Area: " << findTriangleArea() << endl;
        else if (choice == 4) {} // do nothing - we'll exit outside the loop
        cout << endl << endl << endl << endl;
   } while(choice != 4);
   
   exit(0);   
   return 0;
}

// Find the area of a square
double findSquareArea()
{
    double area, width;
    cout << "Dimension of the square: ";
    cin >> width;
    // Output the dimension squared
    area = width * width;
    return area;
}

// Find the area of a circle
double findCircleArea()
{
    double area, radius;
    cout << "Radius of the circle: ";
    cin >> radius;
    // Output PI * r ^ 2
    area = PI * radius * radius;
    return area;
}

// Find the area of a triangle
double findTriangleArea()
{
    double area, leg1, leg2;
    cout << "Leg 1: ";
    cin >> leg1;
    cout << "Leg 2: ";
    cin >> leg2;
    // output (A * B) / 2
    area = leg1 * leg2 / 2.0;
    return area;
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