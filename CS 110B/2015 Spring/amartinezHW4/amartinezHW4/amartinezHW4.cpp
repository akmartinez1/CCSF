/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Monday and Wednesday 9:10am to 11:00am
M. Luttrell
Batmale Hall, Room 451

Home Work Assignment 4
February 11, 2015

Filename

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS--Retake

*/

/*
This program will evaluate a hand of poker with value cards (no face cards, aces, or suites are evaluated).
Error checking includes not allowing cards out of range (lower than 2 or greater than 10) or more than 4 of one kind of card value.
Best hand ranks are determined through order of "if...else if" statements.
*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
using namespace std;

//Prototypes
bool containsPair(int[]);
bool containsThreeOfaKind(int[]);
bool containsFourOfaKind(int[]);
bool containsFullHouse(bool, bool);
bool containsStraight(int[]);
bool containsTwoPair(int[]);
bool containsErrors1(int[], int[]);
bool containsErrors2(int[]);

int main(void)
{
	//Array Sub0 and Sub1 are dummy positions.
	int distribution[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	char play_again = 'y';

	//Initialized Hand
	int hand[5] = { 0, 0, 0, 0, 0 };

	do
	{
		cout << "This program will evaluate a hand of poker with value cards\n(no face cards, aces, or suites are evaluated).\n\n";
		cout << " Please enter a hand of 5 cards (card values 2 through 10) in any order.\n\n";

		for (int hand_input = 0; hand_input < 5; hand_input++)
		{
			cout << "Enter Card #" << hand_input + 1 << ": ";
			cin >> hand[hand_input];
		}

		cout << endl;

		//Keep order of "if...else if" statements to display best hand results in correct ranking (including order of error checking).	
		if (containsErrors1(hand, distribution))
			cout << "Hand contains errors, please re-enter hand.\n\n";
		else if (containsErrors2(distribution))
			cout << "Hand contains errors, please re-enter hand.\n\n";
		else if (containsFourOfaKind(distribution))
			cout << "Hand contains a Four of a Kind!\n\n";
		else if (containsFullHouse(containsPair(distribution), containsThreeOfaKind(distribution)))
			cout << "Hand contains a Full House!\n\n";
		else if (containsStraight(distribution))
			cout << "Hand contains a Straight!\n\n";
		else if (containsThreeOfaKind(distribution))
			cout << "Hand contains Three of a Kind\n\n";
		else if (containsTwoPair(distribution))
			cout << "Hand contains Two Pair!\n\n";
		else if (containsPair(distribution))
			cout << "Hand contains a Pair!\n\n";
		else cout << "High Card Hand.\n\n";

		cout << "\n\n\n Would you like to enter another hand?  (y/n)";

		cin >> play_again;

		cout << endl << endl;
	} while (tolower(play_again) != 'n');

	return 0;
}

bool containsPair(int card_distribution[])
{
	//Check if entered hand contains any pairs.
	bool contains_pair = false;

	for (int check_distribution = 2; check_distribution < 11; check_distribution++)
	{
		if (card_distribution[check_distribution] == 2)
			contains_pair = true;
	}

	return contains_pair;
}

bool containsThreeOfaKind(int card_distribution[])
{
	//Check if entered hand contains 3 of any kind of card.
	bool contains_three_of_a_kind = false;

	for (int check_distribution = 2; check_distribution < 11; check_distribution++)
	{
		if (card_distribution[check_distribution] == 3)
			contains_three_of_a_kind = true;
	}

	return contains_three_of_a_kind;
}

bool containsFourOfaKind(int card_distribution[])
{
	//Check if entered hand contains 4 of any kind of card.
	bool contains_four_of_a_kind = false;

	for (int check_distribution = 2; check_distribution < 11; check_distribution++)
	{
		if (card_distribution[check_distribution] == 4)
			contains_four_of_a_kind = true;
	}

	return contains_four_of_a_kind;
}

bool containsFullHouse(bool pair, bool three_of_a_kind)
{
	//Checks if entered hand contains a Full House (2 of any kind of card AND 3 of any kind of card).
	//Check if "containsPair" boolean function and "containsThreeOfaKind" boolean function are both true.
	bool full_house = false;

	if (pair && three_of_a_kind)
		full_house = true;

	return full_house;
}

bool  containsTwoPair(int card_distribution[])
{
	//Checks if entered hand contains 2 pair of any kind of card.
	bool contains_two_pair = false;
	int pair_count = 0;

	for (int check_distribution = 2; check_distribution < 11; check_distribution++)
	{
		if (card_distribution[check_distribution] == 2)
			pair_count = pair_count + 1;
	}

	if (pair_count == 2)
		contains_two_pair = true;

	return contains_two_pair;
}

bool  containsStraight(int card_distribution[])
{
	//Checks if entered hand contains a Straight.
	bool contains_straight = false;
	int straight_count = 0;

	for (int straight_check = 2; straight_check < 7; straight_check++)
	{
		for (int card_check = 0; card_check < 5; card_check++)
		{
			if (card_distribution[card_check + straight_check] == 1)
			{
				straight_count = straight_count + 1;
			}

			if (straight_count == 5)
			{
				contains_straight = true;
			}
		}

		straight_count = 0;
	}

	return contains_straight;

}

bool containsErrors1(int check_hand[], int card_distribution[])
{
	//Checks if entered hand contain any card values out of range (less than 2 or greater than 10).
	bool contains_errors1 = false;

	for (int check_loop1 = 0; check_loop1 < 5; check_loop1++)
	{
		if (check_hand[check_loop1] < 2 || check_hand[check_loop1] > 10)
		{
			cout << "One or more cards are out of range for a card value.\nPlease enter card values from 2 through 10.\nFace cards and Aces are not included.\n\n";
			contains_errors1 = true;
		}
	}

	//If entered hand is within range then continue with populating card distribution array.  IMPORTANT!!!  Must complete to continue properly!
	if (!contains_errors1)
	{
		//Empty card distribution.  Emptied everytime run to prevent over counting cards in distribution before approved hand is processed for next steps.
		for (int clear_distribution = 0; clear_distribution < 11; clear_distribution++)
		{
			card_distribution[clear_distribution] = 0;
		}

		//Tally card distribution
		for (int distribute = 0; distribute < 5; distribute++)
			card_distribution[check_hand[distribute]] = card_distribution[check_hand[distribute]] + 1;

		cout << endl;
	}

	return contains_errors1;
}

bool containsErrors2(int card_distribution[])
{
	//Checks if entered hand contain too many of one card.
	bool contains_errors2 = false;

	for (int check_loop2 = 2; check_loop2 < 11; check_loop2++)
	{
		if (card_distribution[check_loop2] > 4)
		{
			cout << "Cannot have more than 4 of one kind (value) of card.\n\n";
			contains_errors2 = true;
		}
	}
	return contains_errors2;
}
