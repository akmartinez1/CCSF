#include "stdafx.h"
#include "Rectangle.h"


Rectangle::Rectangle()
{
	width = 0;
	length = 0;
	name = new char[128];

}


Rectangle::~Rectangle()
{
}

void setWidth(double w)
{
	width = w;
}