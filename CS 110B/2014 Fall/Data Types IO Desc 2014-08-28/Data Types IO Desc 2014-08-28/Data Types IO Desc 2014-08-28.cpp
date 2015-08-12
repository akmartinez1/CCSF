/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Tuesday and Thursday 9:05am to 11:00am
M. Luttrell
Batmale Hall, Room 301, ACRC PC-Lab1

In Class Assigment
2014-08-28

2014-08-28 In Class Assignment.cpp

GitHub:  https://github.com/akmartinez1/CCSF-Assignments/tree/master/CS110B

*/

// This program asks for the name of a baseball team, asks for the number of days played, the scores for each day and outputs the team name and total runs scored for all of the days and total number of days.

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string baseball_team;
	int score_in = 0;
	int score_of_day[3] = { 0, 0, 0 };
	int total_days = 0;
	int total_score = 0;
	int loop_counter1 = 0;
	int days_of_low_scores = 0;

	cout << "Please enter the baseball team's name:  ";
	getline(cin, baseball_team);
	cout << endl << endl;

	while (total_days <1 || total_days >3)
	{
		cout << "Please enter the number of days played (from 1 to 3):  ";
		cin >> total_days;
		cout << endl << endl;

		if (total_days < 1 || total_days >3)
		{
			cout << endl << endl << "Invalid number of days played entered.\n";
			total_days = 0;
		}
	}

	for (loop_counter1 = 0; loop_counter1 < total_days; loop_counter1++)
	{
		cout << "Please enter the total score for game played on day " << loop_counter1 + 1 << ":  ";
		cin >> score_in;

		while (score_in < 0)
		{
			cout << "Invalid score entered.  Please enter a score of 0 or greater:  ";
			cin >> score_in;
		}

		if (score_in <= 3)
			days_of_low_scores = days_of_low_scores + 1;

		score_of_day[loop_counter1] = score_in;
		total_score = total_score + score_in;
		cout << endl;
	}

	cout << "Score Information For:  " << baseball_team << endl;
	cout << "Total Days Played:  " << total_days << endl;
	cout << "Total Score for Days Played:  " << total_score << endl;
	cout << "Total Days of Low Scores:  " << days_of_low_scores;
	cout << "          (Scores of 3 or lower)\n\n";

	return 0;
}
