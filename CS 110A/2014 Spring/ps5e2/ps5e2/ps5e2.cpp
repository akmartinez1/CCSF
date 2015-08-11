// ps5e2.cpp : Defines the entry point for the console application.
//

/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110A Introduction to C++ Programming
Tuesday and Thursday 9:05am to 11:00am
L. Giambattista
Batmale Hall, Room 413

Problem Set 5 Exercise 2
Due April 24, 2014

ps5e2.cpp

GitHub:  https://github.com/akmartinez1/CCSF-Assignments/tree/master/CS110A

*/

// Comment line out if not using Microsoft Visual Studio Express 2013 for Build, Debug, or Compile
#include "stdafx.h"

#include <iostream>
using namespace std;

// Default "main" function from Microsoft Visual Studio Express 2013
// int _tmain(int argc, _TCHAR* argv[])

void UniqueExtract(int[], int[]);

int main()

{
	int OriginalArray[10];		// Array for original 10 elements of user input.
	int UniqueArray[10];		// Array of unique numbers entered.
	int LoopCounter1 = 0;		// General loop counter.
	int LoopCounter2 = 0;		// General loop counter.
	bool ValidCheck = false;	// Boolean value for input validation and loop continuation. 
	int const EndLoop = 1001;

	cout << "This program will extract the unique numberes entered into a 10 element array. \n \n";
	cout << "Please enter numbers from 0 to 100. \n \n";

	// Input loop with validation.
	for (LoopCounter1 = 0; LoopCounter1 < 10; LoopCounter1++)
	{
		ValidCheck = false;			// Set for input not validated.
		while (ValidCheck == false)	
		{
			cout << "Enter number for array element " << LoopCounter1 << ": ";
			cin >> OriginalArray[LoopCounter1];
			if (OriginalArray[LoopCounter1] >= 0 && OriginalArray[LoopCounter1] <= 100)
				ValidCheck = true;
			else if (OriginalArray[LoopCounter1] < 0)
				cout << "Value too low.  Please enter a number 0 to 100. \n \n";
			else if (OriginalArray[LoopCounter1] > 100)
				cout << "Value too high.  Please enter a number 0 to 100. \n \n";
		}
	}

	cout << "\n \nOriginal Array: ";
	for (LoopCounter1 = 0; LoopCounter1 < 10; LoopCounter1++)
		cout << OriginalArray[LoopCounter1] << " ";
	cout << "\n \n";

	UniqueExtract(OriginalArray, UniqueArray);

	// Loop to create LoopCounter2 value to stop output at correct location
	for (LoopCounter1 = 0; LoopCounter1 < 10; LoopCounter1++)
		if (UniqueArray[LoopCounter1] == -1)
			LoopCounter1 = EndLoop;
		else
			LoopCounter2++;

	cout << "Unique numbers in your array are: ";
	// Loop to ouput uniuqe array.
	for (LoopCounter1 = 0; LoopCounter1 < LoopCounter2; LoopCounter1++)
		cout << UniqueArray[LoopCounter1] << " ";
	cout << "\n \n";
		
	return 0;
}

void UniqueExtract(int OriginalArray[], int UniqueArray[])
{
	int LoopCounter1 = 0;
	int LoopCounter2 = 0;
	int LoopCounter3 = 0;
	int UniqueHold = -1;
	int const EndLoop = 1001;
	int ComparisonArray[10];
	
	for (LoopCounter1 = 0; LoopCounter1 < 10; LoopCounter1++)
	{
		ComparisonArray[LoopCounter1] = OriginalArray[LoopCounter1];
		UniqueArray[LoopCounter1] = -1;
	}

	for (LoopCounter1 = 0; LoopCounter1 < 10; LoopCounter1++)
	{
		UniqueHold = ComparisonArray[LoopCounter1];

		for (LoopCounter2 = 0; LoopCounter2 <= LoopCounter1; LoopCounter2++)

			if (LoopCounter2 == LoopCounter1)
			{
				UniqueArray[LoopCounter3] = UniqueHold;
				LoopCounter3 = LoopCounter3 + 1;
				LoopCounter2 = EndLoop;
			}
			else if (UniqueHold == UniqueArray[LoopCounter2])
			{
				LoopCounter2 = EndLoop;
			}
	}
	
	return ;

}
