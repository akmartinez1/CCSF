/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Monday and Wednesday 9:10am to 11:00am
M. Luttrell
Batmale Hall, Room 451

Home Work Assignment 1
Due January 19, 2015

amartinezHW1.cpp

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS--Retake

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
// #include "stdafx.h"

#include <iostream>
using namespace std;

int main(void)
{
	int request_nunber1 = 0;
	int loop_counter1 = 0;
	char continue_prompt1 = 'Y';

	cout << "This program requests a number to print asterisks to the screen.\n\n";

	while (toupper(continue_prompt1) == 'Y')
	{
		cout << "How many asterisks would you like to print?  ";

		cin >> request_nunber1;

		cout << endl;

		for (loop_counter1 = 0; loop_counter1 < request_nunber1; loop_counter1++)
		{
			cout << "*";
		}

		cout << endl << endl << "Enter Y or y to run again.  Any other entry will end the program.\n";
		cout << "Run again:  ";

		cin >> continue_prompt1;

		cout << "\n\n";
	}

	cout << "\n\nThank You, Goodbye.\n\n";

	return 0;
}