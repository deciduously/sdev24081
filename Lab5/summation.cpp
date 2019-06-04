// Lab 5 - summation.cpp
// This program displays a series of terms and computes its sum.
// Benjamin Lovy                     
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{     
   string loopAgain = "n"; // Input for deciding when to quit
   int denom = 2,          // Denominator of a particular term
       finalDenom = 64;    // Denominator of the final term
   double sum = 0.0;       // Accumulator that adds up all terms in the series
  
   cout << "Benjamin Lovy\n";

    do
    {
        // Reset sum in case we already looped
        sum = 0.0;
        // Collect n from user
        int n;
        cout << "This program sums the series 1/2^1 + 1/2^2 + 1/2^3 + ... + 1/2^n" << endl;
        cout << "What should be the final term (2 - 10)? ";
        cin >> n;

        // Set final term
        finalDenom = pow(2, n);

        // WRITE THE CODE TO START A FOR LOOP THAT LOOPS ONCE FOR EACH TERM.
        // I.E., FOR TERMS WITH DENOMINATORS FROM 2 TO THE FINAL DENOMINATOR.
        for(denom = 2; denom <= finalDenom; denom *= 2)
        {
           // WRITE THE CODE TO PRINT THIS TERM.
           // IF IT IS NOT THE LAST TERM, FOLLOW IT WITH A +.
           // IF IT IS THE LAST TERM, FOLLOW IT WITH A =.
           cout << "1/" << denom;
           cout << " ";
           if (denom != finalDenom)
           {
             cout << "+";
           }
           else
             {   
             cout << "=";
             }
           cout << " ";

           // WRITE THE CODE TO ADD THE VALUE OF THIS TERM TO THE ACCUMULATOR.
           sum += 1.0 / denom;
        }

        // WRITE A LINE OF CODE TO PRINT THE SUM.  
        cout << sum << endl << endl;


        // Ask to continue
        cout << "Would you like to try another?  Y/y to run again: ";
        cin >> loopAgain;
        cout << endl << endl;
    } while (loopAgain == "y" || loopAgain == "Y");
   return 0;
}