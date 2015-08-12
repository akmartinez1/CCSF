/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Monday and Wednesday 9:10am to 11:00am
M. Luttrell
Batmale Hall, Room 451

Data Types I/O Decisions Exercise A
2015-01-14

Filename

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS--Retake

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
using namespace std;

int main(void)
{
	int innings_pitched = 0;
	int runs_gave_up = 0;
	float earned_run_average = 0.0;

	cout << "Data Types I/O Programming Exercise A\n\n";
	cout << "Calculate Pitchers Earned Run Average (ERA).\n]n";

	cout << "How many innings were pitched?\n";
	cout << "Innings: ";
	cin >> innings_pitched;

	cout << "How many runs were given up?\n";
	cout << "Runs: ";
	cin >> runs_gave_up;

	earned_run_average = (float)(runs_gave_up * 9) / innings_pitched;

	cout << "\n\n\The Pitchers ERA is: " << earned_run_average << "\n\n";


	return 0;
}