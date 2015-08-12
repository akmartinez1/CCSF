#pragma once

#include <string>
// Include FeetInches...
using namespace std;


class Person
{
private:
	string firstName;
	string lastName;
	FeetInches height;
	int weight;
public:
	Person();
	{
		firstName = LastName = 0;
		weight = 0;
	}
	Person(string, string, FeetInches, int);
	{
		void print();
	}
		
	~Person();
};

