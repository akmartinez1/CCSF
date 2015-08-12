/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Tuesday and Thursday 9:05am to 11:00am
M. Luttrell
Batmale Hall, Room 301, ACRC PC-Lab1

Home Work Assignment 2
September 2, 2014

amartinezHW2.cpp

GitHub:  https://github.com/akmartinez1/CCSF-Assignments/tree/master/CS110B
*/

/*
In the card game named 'blackjack' players get two cards to start with, and then they are asked whether or not they want more cards.  
Players can continue to take as many cards as they like. Their goal is to get as close as possible to a total of 21 without going over.  
Face cards have a value of 10.  Aces have a value of 1 or 11.
Write a command line game that plays a simplified version of blackjack where we don’t worry about aces and face cards.  
The program should generate a random number between 1 and 10 each time the player gets a card.  
It should keep a running total of the players cards, and ask the player whether or not it should deal another card.  
If the player goes over 21, your program should tell the player he is bust.  
At the end of the hand, your program should ask the player if he would like to play again.
*/

// Comment this line out if you"re not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
#include <string>

// Learned from Internet to include "ctime" to use with srand and seed a random number generator with the system clock time.
#include <ctime>

using namespace std;

//Global Variables



const string deck_code[52] = { "2S", "3S", "4S", "5S", "6S", "7S", "8S", "9S", "10S", "JS", "QS", "KS", "AS", "2H", "3H", "4H", "5H", "6H", "7H", "8H", "9H", "10H", "JH", "QH", "KH", "AH", "2C", "3C", "4C", "5C", "6C", "7C", "8C", "9C", "10C", "JC", "QC", "KC", "AC", "2D", "3D", "4D", "5D", "6D", "7D", "8D", "9D", "10D", "JD", "QD", "KD", "AD" };
const int card_values[52] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11, };

//Function Prototypes
void shuffle_deck(int[], const string[]);
int deal_player1(int[], const string[], const int[]);
int check_ace(int, int);

int main(void)
{
	//Place holder for cards dealt.
	int deck_pos = 0;
	int shuffled_deck[52];
	int player1_hand;

	shuffle_deck(shuffled_deck, deck_code);

	/*
	Block Out
	Display for debugging.  Remove before submitting assignment.
	for (int Loop_Counter1 = 0; Loop_Counter1 < 52; Loop_Counter1++)
	{
		cout << deck_code[shuffled_deck[Loop_Counter1]] << " ";
	}
	*/

	cout << endl << endl;
	
	player1_hand = deal_player1(shuffled_deck, deck_code, card_values);

	return 0;
}

int deal_player1(int dp1Shuffled_Deck[], const string dp1Deck_Code[], const int dp1Card_Values[])
{
	//Player1 input variables:  0 = Waiting for decision, 1 = Hit, 2 = Stand
	int player1_move = 0;

	int dp1Player1_Hand = 0;


	if (deck_pos > 38)
		shuffle_deck(shuffled_deck, deck_code);

	//Opening Hand

	//dp1Player1_Hand = check_ace;

	cout << dp1Deck_Code[dp1Shuffled_Deck[deck_pos]] << " " << dp1Deck_Code[dp1Shuffled_Deck[deck_pos + 1]] << " (" << dp1Card_Values[dp1Shuffled_Deck[deck_pos]] << " + " << dp1Card_Values[dp1Shuffled_Deck[deck_pos + 1]] << " = " << dp1Card_Values[dp1Shuffled_Deck[deck_pos]] + dp1Card_Values[dp1Shuffled_Deck[deck_pos + 1]] << ")" << endl;
	
	deck_pos = deck_pos + 2;

	/*
	while (player1_move==0)
	{ 
	
	}
	*/

	return dp1Player1_Hand;
}

int check_ace(int caHand_Total, int caCard_Value)
{
	;




	return 0;
}



void shuffle_deck(int sdDeck[], const string sdDeck_Code[])
{
	//Local variable prefix = sd
	
	//Local Scope Variables
	int sdRandom_Card = 0;
	int sdScan_Status = 1;
	
	/*
	Standard deck of 52 cards will be represented by numbers for manipulation and verification.
	Suite order is Spades, Hearts, Clubs, then Diamonds.
	Value order is 2 through 10 (numbered cards), Jacks, Queenss, Kings, then Aces.
	
	Unshuffled deck card value offset is 2.  Two of Spades starts at array 0 Ace of Spades is 12.
	Array of Spades = 0 to 12
	Array of Hearts = 13 to 25
	Array of Clubs = 26 to 38
	Array of Diamonds = 39 to 51
	Card Value of 52 = Jokers and used to empty deck before shuffling
	*/
	
	//deck_pos = 0;

	//Populate and display unshuffled deck.
	for (int sdLoop_Counter1 = 0; sdLoop_Counter1 < 52; sdLoop_Counter1++)
	{
		sdDeck[sdLoop_Counter1] = sdLoop_Counter1;
		//cout << sdDeck[sdLoop_Counter1] << " ";
	}

	//cout << "\n\n";

	/*
	Empty deck before shuffling.  Process used to clear deck before populating with shuffled cards.  
	Function will check for duplicate cards in the deck which is not allowed.  Deck must be populated with non-playing card
	to duplicate playing cards from being detected.
	*/

	for (int sdLoop_Counter1 = 0; sdLoop_Counter1 < 52; sdLoop_Counter1++)
	{
		//Card value of 52 = Jokers
		sdDeck[sdLoop_Counter1] = 52; 
		//cout << sdDeck[sdLoop_Counter1] << " ";
	}

	//cout << "\n\n";

	//Populate deck with cards in shuffled/random order.

	//Seeding random number generator with system clock time.
	srand(time(0));
	
	for (int sdLoop_Counter1 = 0; sdLoop_Counter1 < 52; sdLoop_Counter1++)
	{
		//Scan for duplcate card in deck.  Variable Scan_Status values 1=Unknown, 2=Duplicate, and 3=Unique.  If card is not Unique then
		//regenerate Random_Card value and rescan for duplicate.
		
		sdScan_Status = 1;
		
		while (sdScan_Status != 3)
		{
			sdRandom_Card = rand() % 52;

			for (int Dup_Scan = 0; Dup_Scan <= sdLoop_Counter1; Dup_Scan++)
			{
				if (sdRandom_Card == sdDeck[Dup_Scan])
				{
					//cout << "d" << Random_Card << " ";
					sdScan_Status = 2;
					break;
				}
				
				else if (sdDeck[Dup_Scan]==52)
				{
					sdDeck[sdLoop_Counter1] = sdRandom_Card;
					cout << sdDeck[sdLoop_Counter1] << " ";
					sdScan_Status = 3;
					break;
				}
				
				else;
			}
		}
	}

	cout << endl << endl;

	for (int Loop_Counter1 = 0; Loop_Counter1 < 52; Loop_Counter1++)
	{
		cout << sdDeck_Code[sdDeck[Loop_Counter1]] << " ";
	}
	
	cout << endl << endl;

	return;
}