#pragma once
#include <iostream>
using namespace std;


class rectangle
{
	
private:
	double width = 0;
	double length = 0;
	char *name;
public:
	//constructors
	rectangle();
	rectangle(double, double, char*);
	//destructor
	~rectangle();
	//class functions
	void set_width(double);
	void set_length(double);
	void print_name() const
	{
		cout << name;
	}

};

