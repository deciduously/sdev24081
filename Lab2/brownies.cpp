// brownies.cpp 
// This program calculates the numbers of brownies a pan of the given size will yield
// Benjamin Lovy
// INCLUDE THE FILE NEEDED TO DO I/O
#include<iostream>
using namespace std;
int main()
{
    // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
    // NAME AND AN APPROPRIATE DATA TYPE.
	int length = 12, width = 9, small, large;
		
    // WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION
    // THE PROGRAM NEEDS TO GET FROM THE USER.
	cout << "Enter length> ";
	cin >> length;
	cout << "Enter width> ";
	cin >> width;
		
    // WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS  
    // AND ASSIGN THE RESULTS TO VARIABLES.
	small = length * width;
	// The large browies have an area of 4 small brownies
	large = small / (2 * 2);
		
	// WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.
	//first the pan dimensions
	cout << "A " << length << " X " << width << " pan ";
	// then the small brownies (area)
	cout << "can hold " << small << " small brownies ";
	// then the large (area / 4)
	cout << "or " << large << " large brownies";
		
    return 0;
}