/*
 * main.cpp
 * Creates an instance of the Test class and dislays re te results of each of its methods
 * Benjamin Lovy
 * 
 */

#include <iomanip>
#include <iostream>

#include "test.cpp"

int main()
{
    // Instantiate object of class Test
    Test t1 = Test();

    // Set appropriate float output settings for stream
    std::cout << std::fixed << std::setprecision(3);

    // Demonstrate public method function1
    std::cout << "Function 1 output: ";
    t1.function1(); // only mutates internal data, no output expected
    std::cout << std::endl;

    // Demonstrate public method function2
    // returns new value to show
    std::cout << "Function 2 output: " << t1.function2() << std::endl;

    // Return successfully
    return 0;
}