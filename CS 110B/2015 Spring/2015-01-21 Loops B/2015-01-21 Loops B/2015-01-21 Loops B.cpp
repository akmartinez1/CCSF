/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Spring 2015 Semester
Monday and Wednesday 9:10am to 11:00am
M. Luttrell
Batmale Hall, Room 451

Loops Programming Exercise B
2015-01-21

2015-01-21 Loops B.cpp

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS--Retake

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
using namespace std;

int main(void)
{
	int number_of_assignments = 0;
	int assignment_score = 0;
	int cumulative_assignment_score = 0;
	float average_score = 0;
	char repeat = 'Y';


	cout << "This program asks a student for a number of assignents submitted and the score for each assignnment and will return an average score and grade for the course.\n\n";

	do
	{
		cout << "How many assignments are being reported:  ";
		cin >> number_of_assignments;

		for (int loop1 = 0; loop1 < number_of_assignments; loop1++)
		{
			cout << "\nPlease enter score for Assignment " << loop1 + 1 << ": ";
			cin >> assignment_score;

			cumulative_assignment_score = cumulative_assignment_score + assignment_score;
		}

		average_score = (float)cumulative_assignment_score / number_of_assignments;
		
		cout << "The average score of " << number_of_assignments << " assignments is " << average_score << ".\n\n";

		cout << "Your Letter grade is ";

		if (average_score >= 90)
			cout << "an A.\n\n";
		else if (average_score >= 80)
			cout << "a B.\n\n";
		else if (average_score >= 70)
			cout << "a C.\n\n";
		else if (average_score >= 60)
			cout << "a D.\n\n";
		else
			cout << "an F.\n\n";

		//Reset values in preparation for repeat run.
		number_of_assignments = 0;
		cumulative_assignment_score = 0;
		average_score = 0;

		cout << "Enter 'Y' to repeat program: ";
		cin >> repeat;

		cout << "\n\n";

	} while (toupper(repeat) == 'Y');

	return 0;
}