/*
#include "stdafx.h"
#include "Rectangle.h"


Rectangle::Rectangle()
{
}


Rectangle::~Rectangle()
{
}
*/

#include "stdafx.h"
#include "Rectangle.h"

void Rectangle::setWidth(double w)
{
	width = w;
}

void Rectangle::setLength(double l)
{
	length = l;
}

double Rectangle::getArea() const
{
	return width*length;
}

double Rectangle::getPermimeter() const
{
	return (2 * width) + (2 * length);
}

bool Rectangle::isSquare() const
{
	bool square = false;

	if (width == length)
		square = true;

	return square;
}
