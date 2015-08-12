/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Tuesday and Thursday 9:05am to 11:00am
M. Luttrell
Batmale Hall, Room 301, ACRC PC-Lab1

Classroom programming exercise Strings.
Thursday, October 9, 2014

Strings 2014-10-09.cpp

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS-

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <string>
#include <cstring>
#include <iostream>
using namespace std;


//Prototypes
int stringCompare(char *, char *);


int main(void)
{
	const int maximum_characters = 128;
	char input_string1[maximum_characters];
	char input_string2[maximum_characters];

	cout << "Please enter 2 strings to compare against each other.\n\n";
	cout << "String 1:  ";
	cin.getline(input_string1, maximum_characters);
	cout << "String 2:  ";
	cin.getline(input_string2, maximum_characters);

	if (stringCompare(input_string1, input_string2) == 0)
		cout << "Both string match each other.\n\n";
	else
		cout << "The strings DO NOT match each other.\n\n";
	
	return 0;
}

int stringCompare(char *scinput_string1, char *scinput_string2)
{
	int comparison = 3;

	comparison = strcmp(scinput_string1, scinput_string2);

	return comparison;
}