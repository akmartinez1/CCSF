// Functions 2014-09-02.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"
#include <iomanip>
#include <iostream>
using namespace std;

float celciusByValue(float);
bool celciusByReference(float &);

int main()
{
	float fahrenheit;
	float celcius;
	
	cout.setf(ios::fixed, ios::floatfield);

	for (fahrenheit = 60; fahrenheit < 81; fahrenheit++)
	{
		celcius = celciusByValue(fahrenheit);
		cout << "Fahrenheit: " << setprecision(2) << fahrenheit << "     Celcius:  " << celcius << endl;
	}



	return 0;
}

bool celciusByReference(float &temperature)
{

}

float celciusByValue(float tempFahrenheit)
{
	float celcius = 5.0 / 9.0 * (tempFahrenheit - 32);

	return celcius;
}

/*
Write a function called celciusByReference, which takes a parameter temperature by reference, and changes the parameter to the equivalent celcius temperature.  Additionally, it should check the parameter and only work for temperagures above frezing(32F).  It should return a bool indicating if the range was correct.  Demonstrate your function works from main() by calling it to display a table of fahrenheit values 60, 61, 62,..., 80.  Also, demonstrate that the parameter checking works by letting the user input any temperature and printing an error message if it out of range, i.e. below freezing.  Function prototype:  *bool celciusByuReference(float &temperature);
*/