/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Tuesday and Thursday 9:05am to 11:00am
M. Luttrell
Batmale Hall, Room 301, ACRC PC-Lab1

Home Work Assignment 1
Tuesday, August 26, 2014

amartinezHW1.cpp

GitHub:  https://github.com/akmartinez1/CCSF-Assignments/tree/master/CS110B

*/


// This program requests a number to print asterisks to the screen.

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
using namespace std;

int main(void)
{
	int request_nunber1 = 0;
	int loop_counter1 = 0;
	char continue_prompt1 = 'y';
	
	cout << "This program requests a number to print asterisks to the screen." << endl << endl;
	
	while (continue_prompt1 != 'n' && continue_prompt1 != 'N')
	{
		cout << "How many asterisks would you like to print?  ";

		cin >> request_nunber1;

		cout << endl;

		for (loop_counter1 = 0; loop_counter1 < request_nunber1; loop_counter1++)
		{
			cout << "*";
		}
		
		cout << endl << endl << "Would you like to run again? (y/n) ";

		cin >> continue_prompt1;

		cout << endl << endl;
	}
	
	cout << endl << endl << "Thank You, Goodbye." << endl << endl;
	
	return 0;
}

