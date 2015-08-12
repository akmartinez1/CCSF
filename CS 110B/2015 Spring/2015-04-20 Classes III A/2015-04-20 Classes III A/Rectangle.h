#pragma once

#include <iostream>
using namespace std;

class Rectangle
{
private:
	double width;
	double length;
	char *name;
	static int numRectangles;
	static double yardsAvail;
	void initName(char* n);

public:
	friend bool TestRect::tester(Rectangle &);
	Rectangle();
	~Rectangle();
	Rectangle(double, double, char*);
	void setWidth(double);
	void setLength(double);
	void printName() const
	{
		cout << name;
	}
	int getNumRectangles() const
	{
		return numRectangles;
	}
	static void setYards(double);
};

