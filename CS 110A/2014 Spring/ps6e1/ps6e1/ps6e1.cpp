// ps6e1.cpp : Defines the entry point for the console application.
//

/*
Alan K.Martinez
amart227@mail.ccsf.edu

& Extra Credit Partner

Baohong Yu 
<byu61@mail.ccsf.edu>


CS 110A Introduction to C++ Programming
Tuesday and Thursday 9:05am to 11:00am
L. Giambattista
Batmale Hall, Room 413

Problem Set 6
Due Date May 8, 2014

Filename ps6e1.cpp

GitHub:  https://github.com/akmartinez1/CCSF-Assignments/tree/master/CS110A

*/

// Comment this line out if you're not using Microsoft Visual Studio Express to compile the source code.
#include "stdafx.h"

#include <iostream>
using namespace std;

// Default "main" function created by Microsoft Visual Express 2013
// int _tmain(int argc, _TCHAR* argv[])

// Prototypes
void CheckWinner(int[]);
void CheckDraw(int[]);
void GameBoard(int[]);
void MoveInput(int[]);


// Global Variables
bool Winner = false;
bool Draw = false;
int CurrentPlayer = 3;

int main()
{
	//	Game will be handled by values instead of characters for easier checks and validation.
	//	0's represent available space(s) or -'s.  3's represent X game piece.  5's represent O game piece.
	int GridVals[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; 
	
	cout << "This program administers a game of Tic-Tac-Toe.\n\n";
	
	GameBoard(GridVals);

	while (Winner == false && Draw == false)
	{
		MoveInput(GridVals);
		CheckDraw(GridVals);
		CheckWinner(GridVals);
		GameBoard(GridVals);		
	}
	
	if (Winner == true)
	{
		//  Current player pre-switched at this point.  Last move was placed by last player, not "CurrentPlayer").
		//  If last move is winning move delcare last player the winner.
		cout << "Tic Tac Toe.  Player ";
		if (CurrentPlayer == 3)
			cout << "2 won.\n\n";
		else cout << "1 won.\n\n";
	}

	if (Draw == true)
		cout << "Draw or Tie Game.  No Winner.\n\n";
	
	return 0;
}

void MoveInput(int miGridVals[])
{
	/*
	Input validation will only check for correct input range (from 0 to 9) and if select position is available for current move.
	Input validation will NOT check for correct input type (int vs. char) and will not perform error handling at this time.
	Be aware that if a char type is entered an infinite loop may occor and a forced termination may be required to stop the loop
	and end the program.	
	*/
	
	bool ValidMove = false;
	int PosInput;

	while (ValidMove == false)
	{
		cout << "It is Player ";
		if (CurrentPlayer == 3)
			cout << "1";
		else cout << "2";

		cout << "'s move.  Please select a location to place your ";
		if (CurrentPlayer == 3)
			cout << "X.\n";
		else cout << "O.\n";

		cout << "\nPlease enter an available location from 0 to 9.\nTo re-display board enter 0.\n";
		cin >> PosInput;

		if (PosInput == 0)
			GameBoard(miGridVals);
		else if (PosInput < 0 || PosInput > 9)
			cout << "\n\nInput is out of range.\n";
		else if (miGridVals[PosInput] != 0)
			cout << "\n\nLocation is not available anymore.\n";
		else ValidMove = true;
	}
	
	miGridVals[PosInput] = CurrentPlayer;

	// Automated player switch statements for extra credit.
	if (CurrentPlayer == 3)
		CurrentPlayer = 5;
	else CurrentPlayer = 3;
			
	return;
}

void CheckWinner(int cwGridVals[])
{
	int Row1 = cwGridVals[1] + cwGridVals[2] + cwGridVals[3];
	int Row2 = cwGridVals[4] + cwGridVals[5] + cwGridVals[6];
	int Row3 = cwGridVals[7] + cwGridVals[8] + cwGridVals[9];
	int Column1 = cwGridVals[1] + cwGridVals[4] + cwGridVals[7];
	int Column2 = cwGridVals[2] + cwGridVals[5] + cwGridVals[8];
	int Column3 = cwGridVals[3] + cwGridVals[6] + cwGridVals[9];
	int Diagonal1 = cwGridVals[1] + cwGridVals[5] + cwGridVals[9];
	int Diagonal2 = cwGridVals[3] + cwGridVals[5] + cwGridVals[7];

	if (Row1 == 9 || Row1 == 15)
		Winner = true;
	else if (Row2 == 9 || Row2 == 15)
		Winner = true;
	else if (Row3 == 9 || Row3 == 15)
		Winner = true;
	else if (Column1 == 9 || Column1 == 15)
		Winner = true;
	else if (Column2 == 9 || Column2 == 15)
		Winner = true;
	else if (Column3 == 9 || Column3 == 15)
		Winner = true;
	else if (Diagonal1 == 9 || Diagonal1 == 15)
		Winner = true;
	else if (Diagonal2 == 9 || Diagonal2 == 15)
		Winner = true;
	else
		Winner = false;

	return;
}

void CheckDraw(int cdGridVals[])
{
	for (int cdLoopCounter = 1; cdLoopCounter < 10; cdLoopCounter++)
	{
		if (cdGridVals[cdLoopCounter] == 0)
		{
			Draw = false;
			break;
		}
		else Draw = true;
	}
	return;
}

void GameBoard(int gbGridVals[])
{
	char gbGridChars[10] = { '0', '-', '-', '-', '-', '-', '-', '-', '-', '-'};
	
	// Value to Character Translation
	// Translate 3's to X's and 5's to O's in temporary array gbGridChars.
	for (int gbLoopCounter2 = 0; gbLoopCounter2 < 10; gbLoopCounter2++)
	{
		if (gbGridVals[gbLoopCounter2] == 3)
			gbGridChars[gbLoopCounter2] = 'X';
		else if (gbGridVals[gbLoopCounter2] == 5)
			gbGridChars[gbLoopCounter2] = 'O';
	}

	int Row = 0;
	int Col = 0;
	int Pos = 1;

	//Display available positions
	cout << "\n\nAvailable Game Positions \n";
	for (Row = 0; Row < 3; Row++)
	{
		cout << endl << "	";
		for (Col = 0; Col < 3; Col++)
		{
			if (gbGridVals[Pos] != 0)
				cout << "  ";
			else cout << Pos << " ";
			Pos++;
		}
	}
	cout << "\n \n";

	//Display current board
	cout << "Current Game Board \n";
	Pos = 1;
	for (Row = 0; Row < 3; Row++)
	{
		cout << endl << "	";
		for (Col = 0; Col < 3; Col++)
		{
			cout << gbGridChars[Pos] << " ";
			Pos++;
		}
	}
	cout << " \n \n";
	
	return;
}