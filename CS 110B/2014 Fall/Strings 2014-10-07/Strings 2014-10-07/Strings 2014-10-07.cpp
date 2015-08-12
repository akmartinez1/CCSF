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

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	// Notes:  cin.getline (password_array, array_size)

	const int password_size = 10;
	char password[password_size] = { 0 };
	bool valid_password = true;
	
	cout << "DO NOT USE YOUR REAL PASSWORDS!!!  This program is for class assignment and demonstration purposes only!\n\n";
	cout << "Please enter an ACRC style password for verification (mmmddyy.fl):  ";
	
	cin.getline(password, password_size);

	for (int check_mmm = 0; check_mmm < 3; check_mmm++)
	{
		if (isupper(password[check_mmm]))
		{
			cout << "MMM must be three lowercase characters for month, e.g. \"mar\" is March.\n";
			valid_password = false;
		}
	}

	for (int check_date = 3; check_date < 7; check_date++)
	{
		if (!isdigit(password[check_date]))
		{
			cout << "DD and YY must be two digits each for day and year.\n";
			valid_password = false;
		}
	}

	if (password[7] != '.')
	{
		cout << "Invalid character/seperator before initials.  You must have a '.' separating your birthday from your first and last initials.\n";
		valid_password = false;
	}

	for (int check_fl = 8; check_fl < 10; check_fl++)
	{
		if (isupper(password[check_fl]))
		{
			cout << "Your first and last initials must be lower case.\n";
			valid_password = false;
		}
	}

	if (!valid_password)
		cout << "Your password is NOT in a valid format, please try again.\n\n";
	else
		cout << "Your password IS in a valid format.  Thank You.\n\n";




	return 0;
}