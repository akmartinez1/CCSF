#include "stdafx.h"
#include "rectangle.h"
#include <cstring>
#include <string>

rectangle::rectangle()
{
	width = 0;
	length = 0;
	name = new char[128];
}

rectangle::rectangle(double w, double l, char *n)
{
	width = w;
	length = l;
	name = new char[128];

	//Stadard 'strcpy' instruction for use/test on hills
	//strcpy(name, n);

	//Visual Studio 'strcpy' instrction.  Values passed to strcpy_s are (receiving variable, variable length, source variable) 
	strcpy_s(name, 128, n);

}

rectangle::~rectangle()
{
	delete[] name;
	name = NULL;
}

