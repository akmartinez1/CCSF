//Filename:  amart227-ps2e1.cpp

/*
Alan K. Martinez
amart227@mail.ccsf.edu

Assignment
Problem Set 2 Exercise 1

A car holds 13 gallons of gasoline and can travel 350 miles before it runs out of gas.
Write a program that calculates the number of miles per gallon the car gets (number of miles divided by the number of gallons needed to get there).
Write a program that displays the result on the screen.
*/

#include <iostream>
using namespace std;

int main(void)
{

	float gal_per_tank;
	float miles_per_tank;
	float miles_per_gallon;

	gal_per_tank = 13;
	miles_per_tank = 350;
	miles_per_gallon = miles_per_tank / gal_per_tank;
	
	cout << "This car can hold " << gal_per_tank << " gallons of gasoline." << endl;
	cout << "This car can travel " << miles_per_tank << " miles before it runs out of gas." << endl;
	cout << "This car can get " << miles_per_gallon << " miles per gallon." << endl;
	return 0;
}
