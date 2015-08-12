/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Monday and Wednesday 9:10am to 11:00am
M. Luttrell
Batmale Hall, Room 451

Home Work Assignment #
Due Date

Filename

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS--Retake

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
using namespace std;

//Prototypes
int stringCompare(char *, char*);


int main(void)
{
	const int max_char = 129;
	char icstring1[max_char];
	char icstring2[max_char];
	int compared = -1;

	cout << "Enter two strings for comparison (128 max. characters).";
	cout << "\nString 1:  ";
	cin.getline(icstring1, max_char - 1);
	cout << "\nString 2:  ";
	cin.getline(icstring2, max_char - 1);

	compared = stringCompare(icstring1, icstring2);


	if (compared == 0)
		cout << "Both strings match!\n\n";
	else
		cout << "Both strinds do not match!\n\n";
	
	return 0;
}

int stringCompare(char *comp_str1, char *comp_str2)
{
	int compared = 0;
	int max_index = 0;

	//compared = strcmp(comp_str1, comp_str2);  //Exercise is to implement our own comparison function.

	if (strlen(comp_str1) != strlen(comp_str2))
	{
		compared = -1;
		return compared;
	}
	else
		max_index = strlen(comp_str1);

	for (int index_loop = 0; index_loop <= max_index; index_loop++)
	{
		if (comp_str1[index_loop] != comp_str2[index_loop])
		{
			compared = -1;
			return compared;
		}
	}

	return compared;
}

