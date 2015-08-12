/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Tuesday and Thursday 9:05am to 11:00am
M. Luttrell
Batmale Hall, Room 301, ACRC PC-Lab1

Programming Exercise A 2014-09-30
2014-09-30

Pointers 2014-09-30

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS-

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
using namespace std;


int noNegatives(int *x);


int main(void)
{
	int x;
	int y;
	int *p1;
	
	p1 = &x;

	*p1 = 99;

	cout << "The direct value of X is " << x << endl << endl;
	
	cout << "The value of X via pointer is " << *p1 << endl << endl;

	p1 = &y;

	*p1 = -300;

	int temp;
	int *p2;

	p1 = &x;
	p2 = &y;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
		
	return 0;
}

int noNegatives(int *x)
{
	if (*x < 0)
		*x = 0;

	return *x;
}