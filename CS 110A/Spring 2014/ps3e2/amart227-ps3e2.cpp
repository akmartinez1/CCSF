/*
Alan K. Martinez
amart227@mail.ccsf.edu

CS110A Introduction to C++ Programming
T & Th 9:05am - 11:00am
L. Giambattista
Batmale Hall, Room 413

Problem Set 3 Exercise 2
Due Thursday, February 27, 2014

amart227-ps3e2.cpp

Rock - Paper - Scissors

This program should score one game of the rock-paper-scissors game.
This is a game of two players where each player picks either rock, paper, or scissors, and then one of the following happens.

Rock dulls scissors (Rock wins)
Paper covers rock (Paper wins)
Scissors cut paper (Scissors wins)
Both players picked the same thing (Tie - Nobody wins)

The user enters 'R' for Rock.
The user enters 'P' for Paper.
The user enters 'S' for Scissors.

If the user enters invalid input, your program should say so, otherwise it will output one of the above results.
*/

#include <iostream>
using namespace std;

int main(void)
{
	char player1;
	char player2;
	char p1valid;
	char p2valid;
	const char rock = 'R';
	const char paper = 'P';
	const char scissors = 'S';


	cout << endl;
	cout << "This program will score one game of Paper - Rock - Scissors." << endl;
	cout << "Please enter P for Paper, R for Rock, or S for Scissors." << endl;
	cout << "You must make a valid entry to complete the game." << endl;
	cout << endl;

	while (p1valid != 'Y')
	{
		cout << endl;
		cout << "Player 1 please enter your choice." << endl;
		cin >> player1;
		if (player1 != rock && player1 != paper && player1 != scissors)
		{
			cout << "Invalid Entry.  Please enter R for Rock, P for Paper, or S for Scissors." << endl;
		}
		else
		{
			p1valid = 'Y';
			cout << endl;
		}
		;
	}
	while (p2valid != 'Y')
	{
		cout << endl;
		cout << "Player 2 please enter your choice." << endl;
		cin >> player2;
		if (player2 != rock && player2 != paper && player2 != scissors)
		{
			cout << "Invalid Entry.  Please enter R for Rock, P for Paper, or S for Scissors." << endl;
		}
		else
		{
			p2valid = 'Y';
			cout << endl;
		}
		;
	} 
	
	if (player1 == player2)
		cout << "Tie Game" << endl;
	else if (player1 == rock && player2 == paper)
		cout << "Paper covers Rock.  Player 2 Wins" << endl;
	else if (player1 == rock && player2 == scissors)
		cout << "Rock dulls Scissors.  Player 1 Wins" << endl;
	else if (player1 == paper && player2 == scissors)
		cout << "Scissors cut Paper.  Player 2 Wins" << endl;
	else if (player1 == paper  && player2 == rock)
		cout << "Paper covers Rock.  Player 1 wins" << endl;
	else if (player1 == scissors && player2 == rock)
		cout << "Rock dulls Scissors.  Player 2 Wins" << endl;
	else if (player1 = scissors && player2 == paper)
		cout << "Scissors cut Paper.  Player 1 Wins" << endl;
	else
		;
	cout << endl;
	cout << endl;

		return 0;
}