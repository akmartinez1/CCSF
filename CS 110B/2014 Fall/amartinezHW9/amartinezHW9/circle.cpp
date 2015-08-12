#include "stdafx.h"
#include "circle.h"

/*
Visual Studio created constructor/deconstructor when adding a class
circle::circle()
{
}


circle::~circle()
{
}
*/

void circle::setRadius(double s_radius)
{
	radius = s_radius;
}

void circle::setX(double s_xcoor)
{
	xcoor = s_xcoor;
}

void circle::setY(double s_ycoor)
{
	ycoor = s_ycoor;
}

double circle::getRadius()
{
	return radius;
}

double circle::getX()
{
	return xcoor;
}

double circle::getY()
{
	return ycoor;
}

double circle::getArea()
{
	return pi * radius * radius;
}

bool circle::containsPoint(double, double)
{

	return;
}

