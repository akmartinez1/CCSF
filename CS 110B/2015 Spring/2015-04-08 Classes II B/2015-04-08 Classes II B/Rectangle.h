#pragma once

#include <iostream>
using namespace std;


class Rectangle
{
private:
	double width;
	double length;
	char *name;
	void initName(char *n);

public:
	Rectangle();
	Rectangle(double, double, char*);
	~Rectangle();
	
	void setWidth(double);
	void setLength(double);
	void setName(char *);
	
	void setWidth(char *);
	void setLength(char *);
	
	double getWidth() const;
	double getLength() const;

	void printName() const
	{
		cout << name;
	}

};

