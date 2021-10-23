//celsius_converter.cpp: Write a function named celsiusConverter that accepts a Fahrenheit temperature as a parameter. The function should return the converted temperature in Celsius. Demonstrate the calling of this function by calling it in a loop that passes the values 0-100 in increments of 10 as arguments and displays the return values in a table (see example output).
//Name: Luke MacLean
//Class Section: COSC-1436.900 Online
// Date: 10/23/2021

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime> 
using namespace std;

//A prototype for the function
double celsiusConverter(double);

int main()
{
    cout << "This program converts Fahrenheit temperatures to Celsius.\n" << endl;
    cout << "  Fahrenheit   Celsius" << endl;
    cout << "------------------------" << endl;

    //Demonstrate the calling of the function in a loop, passing the values 0-100 in increments of 10
    for (int i = 0; i <= 100; i += 10){
        // Display the output in a formatted table of values
        cout << setw(12) << i << setw(10) << showpoint << setprecision(3) << celsiusConverter(i) << endl;
    }
    return 0;
}

// A function named celsiusConverter that calculates and returns a single converted temperature
double celsiusConverter(double fahrTemp){
    return (fahrTemp-32)*5/9;
}