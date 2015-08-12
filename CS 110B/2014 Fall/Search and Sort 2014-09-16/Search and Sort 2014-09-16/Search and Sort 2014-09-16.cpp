/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Tuesday and Thursday 9:05am to 11:00am
M. Luttrell
Batmale Hall, Room 301, ACRC PC-Lab1

Home Work Assignment #
Due Date

Filename

GitHub:  https://github.com/akmartinez1/CCSF-Assignments/tree/master/CS110B

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <fstream>
#include <iostream>
using namespace std;

//Prototypes
void binary_search(int, long int);

int main()
{
	//File input
	ifstream inputFile;
	//inputFile.open("cards.txt");




	//Hard coded Array
	long int credit_cards;
	int search_card;
	//int hard_coded_card_array[20] = { 128904, 212323, 250202, 279711, 323435, 352347, 390121, 399191, 424090, 425011, 439023, 444444, 489201, 598264, 623109, 799090, 811424, 902123, 920943, 955010 };

	if (!inputFile)
	{
		cout << "ERROR: Invalid filename\n";
		exit(1);
	}

	inputFile >> credit_cards;



	cout << "Enter a 6 digit credit card number to search for:  ";
	cin >> search_card;

	for (int search_loop = 0; search_loop < 20; search_loop++)
	{
		if (search_card == credit_cards)
			cout << "Credit Card " << search_card << " was found in position " << search_loop << " in " << search_loop << " linear iterations.\n\n";
		else 
			cout << "Credit Card not found in list.\n\n";

		//fix this loop to display correctly.  possible boolean
	}

	binary_search(search_card, credit_cards);


	return 0;
}

void binary_search(int bsSearch_Card, long int bsHCCArray[])
{
	int low_boundary = 0;
	int high_boundary = 19;
	int mid_point = 10;
	int search_counter = 0;
	bool card_found = false;

	while (!card_found && low_boundary <= high_boundary)
	{
		if (bsSearch_Card == bsHCCArray[mid_point])
			card_found = true;
		else if (bsSearch_Card < bsHCCArray[mid_point])
			high_boundary = mid_point - 1;
		else
			low_boundary = mid_point + 1;

		search_counter = search_counter + 1; //may need to verify this counter.  might be off by one at end.

		mid_point = (low_boundary + high_boundary) / 2;
	}

	if (card_found)
		cout << "Credit Card " << bsSearch_Card << " was found in position " << mid_point << " in " << search_counter << " binary iterations.\n\n";
	else
		cout << "Credit Card not found in list.\n\n";

	return;
}