/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Monday and Wednesday 9:10am to 11:00am
M. Luttrell
Batmale Hall, Room 451

Home Work Assignment 6
2015-03-09

amartinezHW6.cpp

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS--Retake

*/

/*
This program will display team standings for a baseball league.  It will take input for team names, their team wins for the year,
and sort them by team with the best records to worse.

The program will take input information for five teams.

This program utilizes using pointers for variables and array size assignments and adjustments.
*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

//Prototypes
void initializeData(string[], int[], int);
void sortData(string[], int[], int);
void sortPositionsInArray(string[], int[], int);
void displayData(string[], int[], int);

int main(void)
{
	int array_size;
	string *teams = NULL;
	int *wins = NULL;
	char run_again = 'y';

	while (tolower(run_again) == 'y')
	{
		cout << "How many baseball teams will you be entering information for:  ";
		cin >> array_size;
		cout << endl << endl;
		cin.ignore(100, '\n');

		teams = new string[array_size];
		wins = new int[array_size];

		initializeData(teams, wins, array_size);

		sortData(teams, wins, array_size);

		displayData(teams, wins, array_size);

		delete[]teams;
		delete[]wins;

		cout << "\n\n\nWould you like to sort and report on Baseball Teams again?\nY = 'Yes' any other key ='No':  ";
		cin >> run_again;
		cout << "\n\n\n\n\n";
	}
	return 0;
}

void initializeData(string idTeams[], int idWins[], int idSize)
{
	cout << "\n\nThis program will take input of " << idSize << " baseball teams and their wins\nand sort them by rank of best to worse.\n\n";

	for (int input_loop = 0; input_loop < idSize; input_loop++)
	{
		cout << "Enter name of team " << input_loop + 1 << ": ";
		getline(cin, idTeams[input_loop]);

		cout << "Enter number of wins for team " << input_loop + 1 << ": ";
		cin >> idWins[input_loop];

		cout << endl;

		cin.ignore();
	}

	return;
}

void sortData(string sdTeams[], int sdWins[], int sdSize)
{
	//This loop will sort the Teams and Wins arrays together by teams with the most wins first to the lowest number of wins last.

	int high_pos = 0;
	int high_val = sdWins[high_pos];
	int holding_cell_wins;
	string holding_cell_team;

	//Step 1:  Initialize loop.
	for (int unsorted_start_pos = 0; unsorted_start_pos < sdSize - 1; unsorted_start_pos++)
	{
		high_pos = unsorted_start_pos;
		high_val = sdWins[unsorted_start_pos];

		//Step 2:  Find the highest value in sdWins and mark the position and value.
		for (int find_highest_val = unsorted_start_pos + 1; find_highest_val < sdSize; find_highest_val++)
		{
			if (sdWins[find_highest_val] > high_val)
			{
				high_pos = find_highest_val;
				high_val = sdWins[find_highest_val];
			}
		}

		//Step 3:  Copy the contents of the next array elements in a holding cell.
		holding_cell_wins = sdWins[unsorted_start_pos];
		holding_cell_team = sdTeams[unsorted_start_pos];

		//Step 4:  Copy the array elements found with the highest team wins into the appropriate (next) array elements.
		sdWins[unsorted_start_pos] = sdWins[high_pos];
		sdTeams[unsorted_start_pos] = sdTeams[high_pos];

		//Step 5:  Copy the holding cell elements found in Step 3 into the high positions from Step 4.
		sdWins[high_pos] = holding_cell_wins;
		sdTeams[high_pos] = holding_cell_team;
	}

	return;
}

void displayData(string ddTeams[], int ddWins[], int ddSize)
{
	int first_place = ddWins[0];

	for (int output_loop = 0; output_loop < ddSize; output_loop++)
	{
		cout << "The " << ddTeams[output_loop] << " have a record of " << ddWins[output_loop] << " wins and are " << first_place - ddWins[output_loop] << " games behind first place.\n";
	}

	return;
}