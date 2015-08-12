#include "stdafx.h"
#include "Rectangle.h"

int Rectangle::numRectangles = 0;
double Rectangle::yardsAvail = 0;

void Rectangle::setYards(double y)
{
	yardsAvail = y;
}

Rectangle::Rectangle(double w, double l, char *n)
{
	double yardsReqd = 2 * w + 2 * l;
	if (yardsAvail - yardsReqd < 0)
	{
		cout << "Not enough yards!\n";
		exit(1);
	}
	yardsAvail = yardsAvail - yardsReqd;
	
	width = w;
	length = l;
	name = new char[128];
	strcpy(name, n);
	numRectangles++;

}

Rectangle::Rectangle()
{
}


Rectangle::~Rectangle()
{
}
