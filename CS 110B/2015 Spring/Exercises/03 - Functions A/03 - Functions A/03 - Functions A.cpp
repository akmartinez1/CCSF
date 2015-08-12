/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Monday and Wednesday 9:10am to 11:00am
M. Luttrell
Batmale Hall, Room 451

Class Programming Assingment Functions Exercise A
January 28, 2015

2015-01-28 Functions A.cpp

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS--Retake

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
#include <iomanip>
using namespace std;

float celcius_func(int);

int main(void)
{
	cout.setf(ios::fixed, ios::floatfield);

	cout << "This program will print a Fahrenheit to Celcius conversion table from 60 to 80 degrees.\n\n";

	for (int fahrenheit = 60; fahrenheit < 81; fahrenheit++)
	{
		cout << "Degrees F: " << setprecision(2) << fahrenheit << "   =     Degrees C: ";

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
	cCelcius = 5.0 / 9.0 * (cFahrenheit - 32);
	cout << setprecision(2) << cCelcius;

	return cCelcius;
}