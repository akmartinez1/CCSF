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
using namespace std;

// Learned from Internet to include "ctime" to use with srand and seed a random number generator with the system clock time.
#include <ctime>
#include <cstdlib>

//Global Variables

//Prototypes
void shuffle_deck(int[], int &);
int get_card(const int[], int[], int &, int, int &);
int deal_player1(const string[], const int[], int[], int &, int , int, int);
int deal_dealer(const string[], const int[], int[], int &, int, int, int);
int check_hand(int);
int ace_adj(int, int);

int main(void)
{
	const string deck_code[52] = { "2S", "3S", "4S", "5S", "6S", "7S", "8S", "9S", "10S", "JS", "QS", "KS", "AS", "2H", "3H", "4H", "5H", "6H", "7H", "8H", "9H", "10H", "JH", "QH", "KH", "AH", "2C", "3C", "4C", "5C", "6C", "7C", "8C", "9C", "10C", "JC", "QC", "KC", "AC", "2D", "3D", "4D", "5D", "6D", "7D", "8D", "9D", "10D", "JD", "QD", "KD", "AD" };
	const int card_values[52] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11 };
	int shuffled_deck[52] = { 0 };
	int deck_pos = 0;
	int total_hand = 0;
	int curr_hand = 0;
	int aces_played = 0;
	int aces_adjust = 0;
	char play_again = 'Y';
	int p1_hand = 0;
	int d_hand = 0;

	cout << "Blackjack or 21\n\n";
	cout << "The rules of the game are to get as close to 21 as possible against the dealer.\n\n";
	cout << "This game is using a single deck of 52 cards, from 2 through 10 are face value, Jacks, Queens, and Kings are worth 10, and\nAces are worth 11 or 1 depending on the total value of the current hand keeping below 21.\n\n";
	cout << "Suites are in order of S for Spades, H for Hearts, C for Clubs, and D for Diamonds.\n\n";
	cout << "A card of 3H is the 3 of Hearts valued at 3. An AC is the Ace of Clubs.\n\n";
	cout << "The deck is reshuffled at the beginning of the game and when there are less than 12 cards remaining at the start of dealing to Player 1.\n\n";
		
	shuffle_deck(shuffled_deck, deck_pos);
	
	while (play_again == 'Y' || play_again == 'y')
	{
		//Deal to Player 1
		cout << "\n\nDealing to Player 1:  \n";
		p1_hand = deal_player1(deck_code, card_values, shuffled_deck, deck_pos, total_hand, curr_hand, aces_played);

		//Deal to Dealer
		cout << "Dealing to Dealer:  \n";
		d_hand = deal_dealer(deck_code, card_values, shuffled_deck, deck_pos, total_hand, curr_hand, aces_played);

		cout << endl << endl;
		cout << "Player 1:  " << p1_hand << endl;
		cout << "Dealer:  " << d_hand << endl;

		//Declare hand winner
		if (p1_hand > 21 && d_hand > 21)
			cout << "Player 1 and Dealer Bust.  No Winner.\n\n";
		else if (p1_hand <= 21 && d_hand <= 21 && p1_hand == d_hand)
			cout << "Push/Tie";
		else if (p1_hand > 21)
			cout << "Dealer Wins";
		else if (d_hand > 21)
			cout << "Player 1 Wins";
		else if (p1_hand < d_hand)
			cout << "Dealer Wins";
		else if (p1_hand > d_hand)
			cout << "Player 1 Wins";


		cout << "\n\nEnter 'Y' or 'y' to play again.  Any other entry ends the game:  ";
		cin >> play_again;
	} 
	

	return 0;
}

int ace_adj(int aaTotal_Hand, int aaAces_Played)
{
	int ace_adjusted = 0;

	if (aaAces_Played == 0)
		ace_adjusted = 0;
	else if (aaAces_Played == 1 && aaTotal_Hand > 21)
		ace_adjusted = -10;
	else if (aaAces_Played == 2 && aaTotal_Hand > 21)
		ace_adjusted = -20;
	else if (aaAces_Played == 3 && aaTotal_Hand > 21)
		ace_adjusted = -30;
	else if (aaAces_Played == 4 && aaTotal_Hand > 21)
		ace_adjusted = -40;
	else;

	//cout << aaTotal_Hand << " " << aaAces_Played << " " << ace_adjusted << endl;

	return ace_adjusted;
}

int deal_player1(const string dp1Deck_Code[], const int dp1Card_Values[], int dp1Shuffled_Deck[], int &dp1Deck_Pos, int dp1Total_Hand, int dp1Curr_Hand, int dp1Aces_Played)
{
	//Note dp1Aces_Played may need to be passed by reference at a later point
	
	//This function will deal to Player 1 a hand of Blackjack/21.

	//Local function variables prefixed with dp1 for "Deal Player 1".
	int dp1Hand_Status = 0;
	int dp1Cards_Dealt = 0;
	char dp1Move = 'u';

	//If current deck has 12 or less cards available then reshuffle deck.
	if (dp1Deck_Pos >= 40)
		shuffle_deck(dp1Shuffled_Deck, dp1Deck_Pos);

	//Deal first card.
	cout << dp1Deck_Code[dp1Shuffled_Deck[dp1Deck_Pos]] << " ";
	dp1Total_Hand = dp1Total_Hand + get_card(dp1Card_Values, dp1Shuffled_Deck, dp1Deck_Pos, dp1Curr_Hand, dp1Aces_Played);
	
	//dp1Curr_Hand does not need to be adjusted for Aces on first card dealt
	dp1Curr_Hand = dp1Total_Hand;
	
	//Deal second card.
	cout << dp1Deck_Code[dp1Shuffled_Deck[dp1Deck_Pos]] << " = ";
	dp1Total_Hand = dp1Total_Hand + get_card(dp1Card_Values, dp1Shuffled_Deck, dp1Deck_Pos, dp1Curr_Hand, dp1Aces_Played);
	dp1Curr_Hand = dp1Total_Hand + ace_adj(dp1Total_Hand, dp1Aces_Played);
	cout << dp1Curr_Hand << " ";

	dp1Cards_Dealt = 2;
	dp1Hand_Status = check_hand(dp1Curr_Hand);

	if (dp1Hand_Status == 2)
	{
		cout << "Blackjack!!!\n\n";
	}

	while (dp1Cards_Dealt < 12 && dp1Hand_Status == 1)
	{
		
		cout << "\n\nS = Stand   H = Hit  ";
		cin >> dp1Move;

		if (dp1Move == 'H' || dp1Move == 'h')
		{
			dp1Total_Hand = dp1Total_Hand + get_card(dp1Card_Values, dp1Shuffled_Deck, dp1Deck_Pos, dp1Curr_Hand, dp1Aces_Played);
			dp1Curr_Hand = dp1Total_Hand + ace_adj(dp1Total_Hand, dp1Aces_Played);
			cout << dp1Deck_Code[dp1Shuffled_Deck[dp1Deck_Pos-1]] << " = " << dp1Curr_Hand;
			dp1Cards_Dealt = dp1Cards_Dealt + 1;
			dp1Hand_Status = check_hand(dp1Curr_Hand);
		}
		else
		{
			cout << "\n Player 1 Stands at:  " << dp1Curr_Hand << "\n\n";
			dp1Hand_Status = 4;
		}
	}

	return dp1Curr_Hand;
}

int deal_dealer(const string ddDeck_Code[], const int ddCard_Values[], int ddShuffled_Deck[], int &ddDeck_Pos, int ddTotal_Hand, int ddCurr_Hand, int ddAces_Played)
{
	//This function will deal to Dealer a hand of Blackjack/21.

	//Local function variables prefixed with dd for "Deal Dealer".
	int ddHand_Status = 0;
	int ddCards_Dealt = 0;
	char ddMove = 'u';

	//If current deck has 12 or less cards available then reshuffle deck.
	if (ddDeck_Pos >= 40)
		shuffle_deck(ddShuffled_Deck, ddDeck_Pos);

	//Deal first card.
	cout << ddDeck_Code[ddShuffled_Deck[ddDeck_Pos]] << " ";
	ddTotal_Hand = ddTotal_Hand + get_card(ddCard_Values, ddShuffled_Deck, ddDeck_Pos, ddCurr_Hand, ddAces_Played);

	//ddCurr_Hand does not need to be adjusted for Aces on first card dealt
	ddCurr_Hand = ddTotal_Hand;

	//Deal second card.
	cout << ddDeck_Code[ddShuffled_Deck[ddDeck_Pos]] << " = ";
	ddTotal_Hand = ddTotal_Hand + get_card(ddCard_Values, ddShuffled_Deck, ddDeck_Pos, ddCurr_Hand, ddAces_Played);
	ddCurr_Hand = ddTotal_Hand + ace_adj(ddTotal_Hand, ddAces_Played);
	cout << ddCurr_Hand << " ";

	ddCards_Dealt = 2;
	ddHand_Status = check_hand(ddCurr_Hand);

	if (ddHand_Status == 2)
	{
		cout << "Blackjack!!!\n\n";
	}

	while (ddCards_Dealt < 12 && ddHand_Status == 1 && ddCurr_Hand <=17)
	{
		//Dealer automatically hits on 17 or lower

		cout << " >> ";
		ddTotal_Hand = ddTotal_Hand + get_card(ddCard_Values, ddShuffled_Deck, ddDeck_Pos, ddCurr_Hand, ddAces_Played);
		ddCurr_Hand = ddTotal_Hand + ace_adj(ddTotal_Hand, ddAces_Played);
		cout << ddDeck_Code[ddShuffled_Deck[ddDeck_Pos - 1]] << " = " << ddCurr_Hand;
		ddCards_Dealt = ddCards_Dealt + 1;
		ddHand_Status = check_hand(ddCurr_Hand);
	}

	return ddCurr_Hand;
}

int check_hand(int chCurr_Hand)
{
	//This function will evaluate the Current Hand value for 1 = Low (below 21), 2 = 21 or Blackjack, 3 = Bust, or 4 = Hold .
	
	//Local function variables prefixed with ch for "Get Card".

	int chHand_Status = 0;

	if (chCurr_Hand < 21)
		chHand_Status = 1;
	else if (chCurr_Hand == 21)
	{
		chHand_Status = 2;
		cout << "!!!  Hold\n\n";
	}		
	else if (chCurr_Hand > 21)
	{
		chHand_Status = 3;
		cout << " Bust!!\n\n";
	}
	else chHand_Status = 0;

	return chHand_Status;

}

int get_card(const int gcCard_Values[], int gcShuffled_Deck[], int &gcDeck_Pos, int gcCurr_Hand, int &gcAces_Played)
{
	//This function will get the card at the current deck position and add its value to the current hand for the player or dealer.

	//Local function variables prefixed with gc for "Get Card".
	int gcCard_Played = 0;
	
	//Check current card position for an Ace and count it towards gcAces_Played
	if (gcCard_Values[gcShuffled_Deck[gcDeck_Pos]] == 11)
		gcAces_Played = gcAces_Played + 1;
	else;

	gcCard_Played = gcCard_Values[gcShuffled_Deck[gcDeck_Pos]];
	gcDeck_Pos = gcDeck_Pos + 1;

	return gcCard_Played;
}

void shuffle_deck(int sdShuffled_Deck[], int &sdDeck_Pos)
{
	//This function will populate an array of 52 positions representing a deck of cards.

	/*
	Standard deck of 52 cards will be represented by numbers for manipulation and verification.
	Suite order is Spades, Hearts, Clubs, then Diamonds.
	Value order is 2 through 10 (numbered cards), Jacks, Quenss, Kings, then Aces.

	Unshuffled deck card value offset is 2.  Two of Spades starts at array 0 Ace of Spades is 12.
	Array of Spades = 0 to 12
	Array of Hearts = 13 to 25
	Array of Clubs = 26 to 38
	Array of Diamonds = 39 to 51
	Card Value of 52 = Jokers and used to empty deck before shuffling
	*/

	//Local function variables prefixed with sd for "Shuffle Deck".
	int sdRandom_Card = 0;
	int sdScan_Status = 1;

	cout << "Shuffling deck...\n\n";

	/*
	Empty deck before shuffling.  Process used to clear deck before populating with shuffled cards.
	Function will check for duplicate cards in the deck which is not allowed.  Deck must be populated with non-playing card
	to prevent duplicate playing cards from being detected during duplicate card scan loop.
	*/
	for (int sdLoop_Counter1 = 0; sdLoop_Counter1 < 52; sdLoop_Counter1++)
	{
		//Card value of 52 = Jokers
		sdShuffled_Deck[sdLoop_Counter1] = 52;
	}

	//Seeding random number generator with system clock time.
	int srand(time(0));

	for (int sdLoop_Counter1 = 0; sdLoop_Counter1 < 52; sdLoop_Counter1++)
	{
		//Scan for duplcate card in deck.  Variable sdScan_Status values 1=Unknown, 2=Duplicate, and 3=Unique.  If card is not Unique then
		//regenerate sdRandom_Card value and rescan for duplicate.

		sdScan_Status = 1;

		while (sdScan_Status != 3)
		{
			sdRandom_Card = rand() % 52;

			for (int sdDup_Scan = 0; sdDup_Scan <= sdLoop_Counter1; sdDup_Scan++)
			{
				if (sdRandom_Card == sdShuffled_Deck[sdDup_Scan])
				{
					sdScan_Status = 2;
					break;
				}

				else if (sdShuffled_Deck[sdDup_Scan] == 52)
				{
					sdShuffled_Deck[sdLoop_Counter1] = sdRandom_Card;
					sdScan_Status = 3;
					break;
				}

				else;
			}
		}
	}

	/*
	for (int Loop_Counter = 0; Loop_Counter < 52; Loop_Counter++)
	{
		cout << sdDeck_Code[sdShuffled_Deck[Loop_Counter]] << " "; // << sdShuffled_Deck[Loop_Counter] << "  ";
	}
	*/

	cout << "Deck shuffled...\n\n";
	sdDeck_Pos = 0;

	return;
}