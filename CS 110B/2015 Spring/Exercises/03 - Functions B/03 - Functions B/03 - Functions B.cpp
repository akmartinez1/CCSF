/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Monday and Wednesday 9:10am to 11:00am
M. Luttrell
Batmale Hall, Room 451

Class Programming Assignment B Functions
February 2, 2015

2015-02-02 Fuctions B.cpp

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS--Retake

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include "stdafx.h"
#include <iomanip>
#include <iostream>
using namespace std;

bool celciusByReference(float &);

int main()
{
	float temperature_input = 0.0;
	bool above_f_freezing = false;

	cout << "This program will convert a Fahrenheit temperature above\nfreezing fromm Fahrenheit to Celsius.\n\n";

	do
	{
		cout << "Please enter a temperature in Fahrenheit above freezing:  ";
		cin >> temperature_input;

		above_f_freezing = celciusByReference(temperature_input);
	} while (above_f_freezing == false);

	cout << "\n\nThe temperature " << temperature_input << " degrees Fahrenheit\n converts to " << (5.0 / 9.0) * (temperature_input - 32) << " degrees Celcius.\n\n";

	return 0;
}

bool celciusByReference(float &cbrTemperature)
{
	bool cbrAbove_F_Freezing = false;
	if (cbrTemperature < 32)
	{
		cout << "Temperature is below freezing.\nPlease enter a temperature above 32 degree Fahrenheit.\n\n";
		cbrAbove_F_Freezing = false;
	}
	else
		cbrAbove_F_Freezing = true;

	return cbrAbove_F_Freezing;
}
