// Lab 3 icecream.cpp 
// WRITE A COMMENT BRIEFLY DESCRIBING THE PROGRAM. 
// PUT YOUR NAME HERE.
// INCLUDE ANY NEEDED FILES HERE.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Helper function to collect input
int collectScoops(string name) {
    int ret;
    cout << "Number of " << name << " scoops sold: ";
    cin >> ret;
    return ret;
}

// Helper function to output sales lines
void outputSales(string prefix, int units, double sales) {
    cout << prefix << setw(15) << units << right << setw(5) << "$" << internal << sales << endl;
}

int main()
{  
    // DEFINE NAMED CONSTANTS HERE TO HOLD THE PRICES OF THE 3 
    // SIZES OF ICE CREAM CONES. GIVE EACH ONE A DESCRIPTIVE
    // NAME AND AN APPROPRIATE DATA TYPE. 
    double singlePrice = 1.49;
    double doublePrice = 2.49;
    double triplePrice = 3.49;
    
    // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
    // NAME AND AN APPROPRIATE DATA TYPE. 
    int singleSold, doubleSold, tripleSold;
    
    // WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION
    // THE PROGRAM NEEDS TO GET FROM THE USER.
     singleSold = collectScoops("single");
     doubleSold = collectScoops("double");
     tripleSold = collectScoops("triple");

    // WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS  
    // AND ASSIGN THE RESULTS TO VARIABLES.
    double singleTotal = singleSold * singlePrice;
    double doubleTotal = doubleSold * doublePrice;
    double tripleTotal = tripleSold * triplePrice;
    int totalUnits = singleSold + doubleSold + tripleSold;
    double totalRevenue = singleTotal + doubleTotal + tripleTotal;
    
    // WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.
    outputSales("DeLIGHTful cones", singleSold, singleTotal);
    outputSales("Double DeLIGHT cones", doubleSold, doubleTotal);
    outputSales("Triple DeLIGHT cones", tripleSold, tripleTotal);
    outputSales("Total", totalUnits, totalRevenue);

    return 0;
}   