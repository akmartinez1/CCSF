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

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS-

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"
#include "GradedActivity.h"


#include <iostream>
using namespace std;

int main(void)
{
	Assignment exercise1;

	int uFunctionality = -1;
	int uEfficiency = -1;
	int uStyle = -1;



	do
	{
		cout << "\nPlease enter the assignments fuctionality (max 50 points): ";
		cin >> uFunctionality;

		if (uFunctionality < 0 || uFunctionality > 50)
			cout << "Invalid input value for functionality score.  Please enter a value from 0 to 50.\n\n";
		
	} while (uFunctionality < 0 || uFunctionality >50);

	do
	{
		cout << "\nPlease enter the assignments effeciencly score (max 25 points): ";
		cin >> uEfficiency;

		if (uEfficiency < 0 || uEfficiency > 50)
			cout << "Invalid input value for efficiency score.  Please enter a value from 0 to 25.\n\n";

	} while (uEfficiency < 0 || uEfficiency > 25);

	do
	{
		cout << "\nPlease enter the assigbmets style score (max 25 points): ";
		cin >> uStyle;

		if (uStyle < 0 || uStyle > 50)
			cout << "Invalid input value for style score.  Please enter a value from 0 to 50.\n\n";

	} while (uStyle < 0 || uStyle > 25);



	return 0;
}