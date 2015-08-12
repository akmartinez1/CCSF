/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Tuesday and Thursday 9:05am to 11:00am
M. Luttrell
Batmale Hall, Room 301, ACRC PC-Lab1

Home Work Assignment #
Due Date

Filename

GitHub:  https://github.com/akmartinez1/CCSF-Assignments/tree/master/CS110B

*/

/*
Programming 	Exercise
•	To convert between Celsius and Fahrenheit, the following formula is used, where C=Celsius temperature and F=Fahrenheit temperature 
C	=	5/9	*	(F-32)
•	Write a function called celsius which takes a fahrenheit temperature as an parameter, and prints out the equivalent celsius temperature
•	Demonstrate that your function works by writing a program which calls it 21 times for Fahrenheit values 60-80
•	You can add this line in your function to make floating point output fixed:
cout.setf(ios::fixed,	ios::floatfield);
•	You can call setprecision(2) in your cout statements to print out two decimal places, e.g.
cout	<<	"Degrees	F:	"	<<	setprecision(2)	<<	fahrenheit;
*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
using namespace std;

float celcius_func(int);

int main(void)
{
	//float celcius_var;

	//cout.setf(ios::fixed, ios::floatfield);

	cout << "This program will print a Fahrenheit to Celcius conversion table from 60 to 80 degrees.\n\n";
	
	for (int fahrenheit = 60; fahrenheit < 81; fahrenheit++)
	{
		//cout << "Degrees F: " << setprecision(2) << fahrenheit;
		cout << "Degrees F: " << fahrenheit << "   =     Degrees C: ";
		celcius_func(fahrenheit);
		cout << endl;
	}



	return 0;
}

float celcius_func(int cFahrenheit)
{
	//This function converts a Fahrenheit value to Celcius
	//Function local variable prefix = c
	
	float cCelcius;
	
	//Fahrenheit to Celcius conversion formula:  C	=	5/9	*	(F-32)
	cCelcius = 5 / 9 * (cFahrenheit - 32);
	cout << "aaaaa"  << cCelcius;

	return cCelcius;
}