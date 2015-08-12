/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Spring 2015 Semester
Monday and Wednesday 9:10am to 11:00am
M. Luttrell
Batmale Hall, Room 451

Loops Programming Exercise A
2015-01-21

2015-01-21 Loops A.cpp

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS--Retake

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
using namespace std;

int main(void)
{
	int home_team_score = 0;
	int away_team_score = 0;
	char repeat = 'Y';

	cout << "This program will ask for the scores of a Home team and an Away team and report which team has won.\n\n";

	do
	{
		cout << "What is the score of the Home team:  ";
		cin >> home_team_score;

		cout << "\n\nWhat is the score of the Away team: ";
		cin >> away_team_score;

		if (home_team_score == away_team_score)
			cout << "\n\nTie Game, no Winner declared.";
		else if (home_team_score > away_team_score)
			cout << "\n\nHome Team is the winner.";
		else
			cout << "\n\nAway Team is the winner.";

		cout << "\n\nEnter Y to run program again:  ";
		cin >> repeat;

		cout << "\n\n";
		
	} while (toupper(repeat) == 'Y');
		
	return 0;
}