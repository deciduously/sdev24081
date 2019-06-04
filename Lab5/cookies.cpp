// Lab 5 - cookies.cpp  
// This program finds the average number of boxes of cookies 
// sold by the children in a particular scout troop. 
// It illustrates the use of a counter, an accumulator, 
// and an end sentinel.
// Benjamin Lovy                     
#include <iostream>
using namespace std;

int main()
{   
   int numBoxes,         // Number of boxes of cookies sold by one child
       totalBoxes,       // Accumulates total boxes sold by the entire troop
       numSeller;        // Counts the number of children selling cookies
       
   double averageBoxes;  // Average number of boxes sold per child
   
   // WRITE CODE TO INITIALIZE THE totalBoxes ACCUMLATOR TO 0 AND
   // THE numSeller COUNTER TO 1.
   totalBoxes = 0, numSeller = 1;
   
   cout << "             **** Cookie Sales Information **** \n\n";
   
   // Get the first input
   cout << "Enter number of boxes of cookies sold by seller " << numSeller
        << " (or -1 to quit): ";
   cin  >> numBoxes;
   while (numBoxes < -1)
   {
      cout << "No negative numbers!  Try again for seller " << numSeller;
      cin >> numBoxes;
   }
   
   // WRITE CODE TO START A while LOOP THAT LOOPS WHILE numBoxes
   // IS NOT EQUAL TO -1, THE SENTINEL VALUE.
   while (numBoxes != -1)
   {
      // WRITE CODE TO ADD numBoxes TO THE totalBoxes ACCUMULATOR.
      // WRITE CODE TO ADD 1 TO THE numSeller COUNTER.
      totalBoxes += numBoxes;
      numSeller++;
      
      // WRITE CODE TO PROMPT FOR AND INPUT THE NUMBER OF BOXES
      // SOLD BY THE NEXT SELLER.
      cout << "Enter number of boxes of cookies sold by seller " << numSeller << " (or -1 to quit): ";
      cin >> numBoxes;
      while (numBoxes < -1)
      {
         cout << "No negative numbers!  Try again for seller " << numSeller << ": ";
         cin >> numBoxes;
      }
   
   }
   // WHEN THE LOOP IS EXITED, THE VALUE STORED IN THE numSeller COUNTER
   // WILL BE ONE MORE THAN THE ACTUAL NUMBER OF SELLERS. SO WRITE CODE
   // TO ADJUST IT TO THE ACTUAL NUMBER OF SELLERS.
   numSeller--;
   
   if (numSeller == 0)
      cout << "\nNo boxes were sold.\n";
   else
   {  // WRITE CODE TO ASSIGN averageBoxes THE COMPUTED AVERAGE NUMBER 
      // OF BOXES SOLD PER SELLER.
      averageBoxes = static_cast<double>(totalBoxes) / numSeller;
      // WRITE CODE TO PRINT OUT THE NUMBER OF SELLERS AND AVERAGE NUMBER
      // OF BOXES SOLD PER SELLER.
      cout << "The average number of boxes sold by the " << numSeller << " sellers was " << averageBoxes << "."; 
   }
   
   return 0;
}