// Lab 3 percentage.cpp
// This program will determine the percentage
// of answers a student got correct on a test.
// Benjamin Lovy

// INCLUDE THE FILE NEEDED TO DO I/O
#include <iostream>
// INCLUDE THE FILE NEEDED TO FORMAT OUTPUT
#include <iomanip>
// INCLUDE THE FILE NEEDED TO USE STRINGS
#include <cstring>

using namespace std;

int main()
{
    string name;
    int numQuestions,
        numCorrect;
    double percentage;

    // Get student's test data
    cout << "Enter student's first and last name: ";
    // WRITE A STATEMENT TO READ THE WHOLE NAME INTO THE name VARIABLE.
    getline(cin, name);

    cout << "Number of questions on the test: ";
    cin >> numQuestions;
    cout << "Number of answers the student got correct: ";
    cin >> numCorrect;

    // Compute and display the student's % correct
    // WRITE A STATEMENT TO COMPUTE THE % AND ASSIGN THE RESULT TO percentage.
    percentage = static_cast<double>(numCorrect) / numQuestions * 100.0;

    // WRITE STATEMENTS TO DISPLAY THE STUDENT'S NAME AND THEIR TEST
    // PERCENTAGE WITH ONE DECIMAL POINT.
    // set the width to 10 for some aesthetically pleasing cushion
    // set the precision for outputting the double to 5 to capture num 4 decimal places
    cout << name << setw(10) << setprecision(5) << percentage << "%" << endl;

    return 0;
}
