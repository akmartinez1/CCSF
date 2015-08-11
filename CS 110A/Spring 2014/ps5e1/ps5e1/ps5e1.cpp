// ps5e1.cpp : Defines the entry point for the console application.
//

/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110A Introduction to C++ Programming
Tuesday and Thursday 9:05am to 11:00am
L. Giambattista
Batmale Hall, Room 413

Problem Set 5 Exercise 1
Due April 24, 2014

ps5e1.cpp

GitHub:  https://github.com/akmartinez1/CCSF-Assignments/tree/master/CS110A

*/

// Comment line out if not using Microsoft Visual Studio Express 2013 for Build, Debug, or Compile
#include "stdafx.h"

#include <iostream>
using namespace std;

// Default function from Microsoft Visual Studio Express 2013
// int _tmain(int argc, _TCHAR* argv[])

int EnterAbsences(int);
float CalcAvgAbsences(int, int);

int main()

{
	int Employees = 0;
	int TotalAbsences = 0;
	float AvgAbsences = 0;

	cout << "This program will calculate the average number" << endl;
	cout << "of absent days for the given number of employees." << endl << endl;
	
	do
	{
		cout << "Please enter the number of employee(s): ";
		cin >> Employees;
		cout << endl << endl;

		if (Employees < 1)
		{
			cout << "You must have 1 employee or more to continue." << endl;
			cout << "Please enter the number of employee(s) to continue." << endl << endl;
		}

	} while (Employees < 1);
	
	TotalAbsences = EnterAbsences(Employees);

	AvgAbsences = CalcAvgAbsences(Employees, TotalAbsences);

	cout << endl << endl << "The average number of days absent for " << Employees << " employee(s) is " << AvgAbsences << "." <<endl << endl;

	return 0;
}

int EnterAbsences(int Employee)

{
	int LoopCounter = 1;
	int EmployeeAbsentDays = 0;
	int TotalAbsences = 0;

	do
	{
		do
		{
			cout << "Please enter the number of days Employee " << LoopCounter << " has been absent: ";
			cin >> EmployeeAbsentDays;

			if (EmployeeAbsentDays < 0)
			{
				cout << endl << "An employee cannot have less than 0 days absent." << endl;
				cout << "Please enter a number of 0 or more days absent for Employee " << LoopCounter << "." << endl << endl;
			}
		
		} while (EmployeeAbsentDays < 0);

		LoopCounter = LoopCounter + 1;
		TotalAbsences = TotalAbsences + EmployeeAbsentDays;

	} while (LoopCounter < (Employee + 1));

	return (TotalAbsences);
}

float CalcAvgAbsences(int Employees, int TotalAbsences)

{
	if (TotalAbsences == 0)
	{
		cout << endl << "All " << Employees << " employee(s) have recorded " << TotalAbsences << " absent days." << endl << endl;
		return TotalAbsences;
	}
	
	return float(TotalAbsences) / Employees;
}
	