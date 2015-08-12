/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Tuesday and Thursday 9:05am to 11:00am
M. Luttrell
Batmale Hall, Room 301, ACRC PC-Lab1

Object Oriented Programming Programming Exercise A
2014-10-21

OOP 2014-10-21.cpp

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS-

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
using namespace std;

class Rectangle
{
private:
	double width;
	double length;
public:
	void setWidth(double);
	void setLength(double);
	double getWidth() const;
	double getLength() const;
	double getArea() const;
	double getPermimeter() const;
	bool isSquare() const;
};

void Rectangle::setWidth(double w)
{
	width = w;
}

void Rectangle::setLength(double l)
{
	length = l;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getArea() const
{
	return width*length;
}

double Rectangle::getPermimeter() const
{
	return (2 * width)+(2 * length);
}

bool Rectangle::isSquare() const
{
	bool square = false;

	if (width == length)
		square = true;

	return square;
}

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