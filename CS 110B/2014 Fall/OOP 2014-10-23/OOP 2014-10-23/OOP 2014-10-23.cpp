/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Tuesday and Thursday 9:05am to 11:00am
M. Luttrell
Batmale Hall, Room 301, ACRC PC-Lab1

Programming Exercise
October 23, 2014

Filename

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS-

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(void)
{
	double uWidth = 0;
	double uLength = 0;

	cout << "Enter the width of your object: ";
	cin >> uWidth;
	cout << "\nEnter the length of your object: ";
	cin >> uLength;

	cout << endl << endl;

	Rectangle r;

	r.setWidth(uWidth);
	r.setLength(uLength);

	cout << "width: " << r.getWidth() << endl;
	cout << "length: " << r.getLength() << endl;
	cout << "area: " << r.getArea() << endl;
	cout << "perimeter: " << r.getPermimeter() << endl;
	cout << "is square: " << r.isSquare() << endl;



	return 0;
}