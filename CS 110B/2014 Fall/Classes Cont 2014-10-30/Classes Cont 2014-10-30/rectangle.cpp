#include "stdafx.h"
#include "rectangle.h"
#include <cstring>
#include <string>

rectangle::rectangle()
{
	width = 0;
	length = 0;
	initName ("Undefined");
}

rectangle::rectangle(double w, double l, char *n)
{
	width = w;
	length = l;
	initName(n);
}

rectangle::~rectangle()
{
	delete[] name;
	name = NULL;
}

void rectangle::initName(char *user_input)
{
	name = new char[max_chars];
	//strcpy(name, user_input);
	strcpy_s(name, max_chars, user_input);


}
