// Simple Console Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Enter.h"
#include "Operation.h"

int main()
{
    // Ask for the Integer twice

    int x{ enterInt() }; 
    int y{ enterInt() };

    // Add menu in future iteration
    plusOperation(x, y);
    minusOperation(x, y);
    divideOperation(x, y);
    multiplyOperation(x, y);

    // If else or Case 
    // 1 = add, 2 = sub, 3 = div, 4 = mul, 5 = exit program 

    // Show result 
    // Return to If else or Case after hitting any button to continue

    // Close program 
}
