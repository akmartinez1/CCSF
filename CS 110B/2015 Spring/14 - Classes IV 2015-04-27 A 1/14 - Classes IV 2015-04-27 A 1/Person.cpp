#include "stdafx.h"
#include "Person.h"


Person::Person()
{
}


Person::~Person()
{
}

Person::Person(string fName, string lName, FeetInches h, int w)
{
	firstName = fName;
	lastName = lName;
	height = h;
	weight = w;
}

void Person::print()
{
	cout << firstName << " " << lastName;
	cout << "\nHeight: " << height.getFeet();
	cout << "\'" << height.getInches() << "\"\n";
	cout << "Weight: " << weight << " lbs.\n";
}