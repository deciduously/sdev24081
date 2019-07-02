// fib.cpp is a small program for returning the index of the closest number to the provided input that falls in the Fibonacci series
// Benjamin Lovy

#include <iostream>

// generate the nth fibonacci number
int fibonacci(int n, int a = 0, int b = 1)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    // tail-recursive call
    return fibonacci(n - 1, b, a + b);
}

// Returns the index of the closest Fibonacci number to n
int closestFibonacciIndex(int n)
{
    // initialize all needed variables to zero
    int lowerIdx = 0, higherIdx = 0, lowerDelta = 0, higherDelta = 0;

    // loop through the series
    // once we pass n, we're done - we've found the number one lower
    while (fibonacci(lowerIdx) <= n)
    {
        lowerIdx++;
    }

    // after the loop, lowerIdx is set to the lower bound
    // the higher bound is one after that
    higherIdx = lowerIdx + 1;

    // get the distances
    lowerDelta = n - fibonacci(lowerIdx);
    higherDelta = fibonacci(higherIdx) - n;

    // return whichever is closer
    if (higherDelta < lowerDelta)
    {
        return higherIdx;
    }
    else
    {
        return lowerIdx;
    }
}

int main()
{
    // initialize input variable
    int userInput = 0;

    // gather input
    std::cout << "Enter number: ";
    std::cin >> userInput;

    // print result and exit
    std::cout << "Result: " << closestFibonacciIndex(userInput) << std::endl;
    return 0;
}