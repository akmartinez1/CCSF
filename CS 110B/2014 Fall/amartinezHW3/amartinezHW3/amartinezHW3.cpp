/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Tuesday and Thursday 9:05am to 11:00am
M. Luttrell
Batmale Hall, Room 301, ACRC PC-Lab1

Home Work Assignment 3
Tuesday, September 9, 2014

amartinezHW3.cpp

GitHub:  https://github.com/akmartinez1/CCSF-Visual-Studio/tree/master/CS110B

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


//Prototypes
void instructions();
void playOneGame();
bool shouldPlayAgain();
char getUserResponseToGuess(int);
int getMidpoint(int, int);
int getRandomMidpoint(int, int);

int main(void)
{
	
	do
	{
		playOneGame();
	} while (shouldPlayAgain());


	return 0;
}

bool shouldPlayAgain()
{
	bool playAgain = false;
	char oneMoreTime;

	cout << endl << endl;
	cout << "Great! Do you want to play again? (y/n):  ";
	
	cin >> oneMoreTime;

	if (oneMoreTime == 'Y' || oneMoreTime == 'y')
		playAgain = true;

	return playAgain;
}

char getUserResponseToGuess(int urMid_Point)
{
	char response = 'u';

	cout << "Is your number " << urMid_Point << "?  (h/l/c):  ";
	cin >> response;

	return response;
}

int getMidpoint(int gmpLow_Limit, int gmpHigh_Limit)
{
	int mid_point = (gmpLow_Limit + gmpHigh_Limit) / 2;

	return mid_point;
}

int getRandomMidpoint(int grmLow_Limit, int grmHigh_Limit)
{
	int srand(time(0));
	
	//Debug Output
	//cout << "HL: " << grmHigh_Limit << "   LL: " << grmLow_Limit << endl;

	int mid_point = rand() % (grmHigh_Limit - grmLow_Limit) + grmLow_Limit;
		
	return mid_point;
}

void playOneGame()
{
	int high_limit = 100;
	int low_limit = 1;
	int mid_point = 50;
	
	char user_response = 'u';

	instructions();

	cout << "Please pick a number between 1 and 100\n\n";
	

	while (user_response != 'c')
	{

		user_response = getUserResponseToGuess(mid_point);

		if (user_response == 'h')
			low_limit = mid_point;
		else
			high_limit = mid_point;
		
		//Comment out undesired "Get Midpoint" function
		//mid_point = getMidpoint(low_limit, high_limit);
		mid_point = getRandomMidpoint(low_limit, high_limit);
	}
	
	return;
}

void instructions()
{
	cout << "\n\nThis program asks you to pick a number between 1 to 100\nthen the program will attempt to guess what your number is.\n\n";
	cout << "Your response to the programs guess should be\n";
	cout << "              'h' if the program needs to guess 'higher'\n";
	cout << "              'l' if the program needs to guess 'lower'\n";
	cout << "           or 'c' if the program guessed correctly.\n\n";

	return;
}
