/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110A Introduction to C++ Programming
Tuesday and Thursday 9:05am to 11:00am
L. Giambattista
Batmale Hall, Room 413

Problem Set 4 Exercise 1
Due March 27, 2014

amart227-ps4e1.cpp

*/

// Comment this line out if you're not using Microsoft Visual Studio Express to compile the source code.
#include "stdafx.h"

#include <iostream>
using namespace std;

// Default "main" function created by Microsoft Visual Express 2013
// int _tmain(int argc, _TCHAR* argv[])

int main(void)

{
	int user_input = 1; //Pre-assigned to 1 to prevent premature program termination.
	int previous_input = 1; //Pre-assignedto 1 to prevent premature program termination.
	int subtotal = 0;
	int total = 0;

	cout << "Simple Adding Machine Simulator\n" << endl;
	cout << "Enter positive or negative integers to subtotal or total." << endl;
	cout << "Enter 0 for subtotal." << endl;
	cout << "Enter two consecutive 0's (ie. 0 <enter> 0 <enter>) for a total and to end the program." << endl << endl;

	do
	{
		previous_input = user_input; //If first run then Pre-assigned to 1 to prevent premature program termination.
		cin >> user_input;
		subtotal = subtotal + user_input;
		total = total + user_input;

		if (user_input == 0)
		{
			cout << "Subtotal:  " << subtotal << endl;
			subtotal = 0;
		}
		else
			;
	}

	while (!(user_input == 0 && previous_input == 0));

	cout << " Total:  " << total << endl;

	return 0;
}