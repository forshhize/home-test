/* 
 * File:   main.cpp
 * Author: rcc
 * Purpose: To calculate wages
 *
 * Created on March 12, 2015, 11:50 AM
 */

#include <iostream>

using namespace std;

//system libraries
//Global constants
//Function Prototypes
//Execution starts here!!

/*
 * 
 */
int main(int argc, char** argv) {
    
    float basePayRate,regularHours,overtimeWages,overtimePayRate,overtimeHours;
    float totalWages,regularWages;
    
    regularWages;
    basePayRate = 18.25;
    regularHours = 40.0;
    overtimeWages;
    overtimePayRate = 27.78;
    overtimeHours = 10;
    totalWages;
    
    // Calculate the regular wages.
    regularWages = basePayRate * regularHours;

 // Calculate the overtime wages.
 overtimeWages = overtimePayRate * overtimeHours;

 // Calculate the total wages.
 totalWages = regularWages + overtimeWages;
    
    // Display the total wages.
 cout << "Wages for this week are $" << totalWages << endl;
    
    
    
    
    

    return 0;
}


