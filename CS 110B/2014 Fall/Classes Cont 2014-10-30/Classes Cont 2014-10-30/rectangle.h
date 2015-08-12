#pragma once
#include <iostream>
using namespace std;

//Maximum character length for C-Strings/Stirngs.
const int max_chars = 128;

class rectangle
{
private:
	double width = 0;
	double length = 0;
	char *name;
	void initName(char *);
public:
	//constructors
	rectangle();
	rectangle(double, double, char*);
	//destructor
	~rectangle();
	//class functions
	void set_width(double);
	void set_length(double);
	void set_name(char);
	void print_name() const
	{
		cout << name;
	}

};

