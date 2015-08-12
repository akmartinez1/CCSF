/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Monday and Wednesday 9:10am to 11:00am
M. Luttrell
Batmale Hall, Room 451

Classroom Programming Assignment Strings A
2015-03-09

2015-03-09 Strings A.cpp

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS--Retake

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
using namespace std;

int main(void)
{
	char password[11] = { '0' };
	bool valid_format = true;
	char repeat = 'y';

	do
	{
		cout << "Please enter an ACRC formatted password.\n  PLEASE DO NOT ENTER YOUR REAL PASSWORD!\n\n";
		cout << "Password:  ";
		cin.getline(password, 11);

		//debug check

		for (int loop1 = 0; loop1 < 11; loop1++)
		{
			cout << password[loop1];
		}

		cout << "\n\n";
		//end of debug check

		//Password format check.

		//Check Month Format
		for (int mmm = 0; mmm < 3; mmm++)
		{
			if (!islower(password[mmm]))
				valid_format = false;
		}


		//Check Day Format
		for (int dd = 3; dd < 5; dd++)
		{
			if (!isdigit(password[dd]))
				valid_format = false;
		}

		//Check Year Format
		for (int yy = 5; yy < 7; yy++)
		{
			if (!isdigit(password[yy]))
				valid_format = false;
		}

		//Check Delimiter
		if (password[7] != '.')
			valid_format = false;

		//Check Initials Format
		for (int fl = 8; fl < 10; fl++)
		{
			if (!islower(password[fl]))
				valid_format = false;
		}

		//Format Feedback
		if (!valid_format)
			cout << "This password is not formatted correctly\n";
		else
			cout << "This password is formatted correctly\n";

		cout << "\n\n\n Would you like to check another? (y/n)";
		
		cin.ignore(15, '\n');

		cin >> repeat;
	} while (char(islower(repeat)) == 'y');


	return 0;
}