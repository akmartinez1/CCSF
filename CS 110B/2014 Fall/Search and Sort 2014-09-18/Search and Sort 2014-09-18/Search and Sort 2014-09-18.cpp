/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Tuesday and Thursday 9:05am to 11:00am
M. Luttrell
Batmale Hall, Room 301, ACRC PC-Lab1

Programming Exercise
Thursday, September 18, 2014

Search and Sort 2014-09-18

GitHub:  https://github.com/akmartinez1/CCSF-Assignments/tree/master/CS110B

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

//Prototypes
void binary_search(string, string[]);
void sort_names(string[]);

int main(void)
{
	string search_name;
	ifstream names_file[20];



	//int hard_coded_card_array[20] = { 128904, 212323, 250202, 279711, 323435, 352347, 390121, 399191, 424090, 425011, 439023, 444444, 489201, 598264, 623109, 799090, 811424, 902123, 920943, 955010 };
	
	//Unsorted Hard Coded Names Array Backup
	//string hard_coded_names_array[20] = { "Jones", "Tang", "Madoff", "Nguyen", "Jackson", "Smith", "Pinchot", "Samuelson", "Fung", "Lee", "Rivera", "Johnson", "Suzuki", "Mather", "Tucker", "Lang", "Beau", "Sandoval", "Andrews", "Cord" };

	string hard_coded_names_array[20] = { "Jones", "Tang", "Madoff", "Nguyen", "Jackson", "Smith", "Pinchot", "Samuelson", "Fung", "Lee", "Rivera", "Johnson", "Suzuki", "Mather", "Tucker", "Lang", "Beau", "Sandoval", "Andrews", "Cord" };

	sort_names(hard_coded_names_array);

	cout << "Enter a Last Name to search for:  ";
	cin >> search_name;

	for (int search_loop = 0; search_loop < 20; search_loop++)
	{
		if (search_name == hard_coded_names_array[search_loop])
			cout << "Suspect " << search_name << " was found in position " << search_loop << " in " << search_loop << " linear iterations.\n\n";
		
			//cout << "Credit Card not found in list.\n\n";

		//fix this loop to display correctly.  possible boolean
	}

	binary_search(search_name, hard_coded_names_array);


	return 0;
}

void sort_names(string snHCNArray[])
{
	string low_name = snHCNArray[0];
	string holding_cell;
	int low_position = 0;

	for (int loop1 = 0; loop1 < 19; loop1++)
	{
		low_name = snHCNArray[loop1];
		low_position = loop1;

		for (int loop2 = loop1 + 1; loop2 < 20; loop2++)
		{
			if (snHCNArray[loop2] < low_name)
			{
				low_position = loop2;
				low_name = snHCNArray[loop2];
			}

		}
		holding_cell = snHCNArray[loop1];
		snHCNArray[loop1] = low_name;
		snHCNArray[low_position] = holding_cell;

	}

	for (int loop3 = 0; loop3 < 19; loop3++)
	{
		cout << snHCNArray[loop3] << endl;
	}


	return;
}

void binary_search(string bsSearch_Name, string bsHCNArray[])
{
	int low_boundary = 0;
	int high_boundary = 19;
	int mid_point = 10;
	int search_counter = 0;
	bool name_found = false;

	while (!name_found && low_boundary <= high_boundary)
	{
		if (bsSearch_Name == bsHCNArray[mid_point])
			name_found = true;
		else if (bsSearch_Name < bsHCNArray[mid_point])
			high_boundary = mid_point - 1;
		else
			low_boundary = mid_point + 1;

		search_counter = search_counter + 1; //may need to verify this counter.  might be off by one at end.

		mid_point = (low_boundary + high_boundary) / 2;
	}

	if (name_found)
		cout << "Suspect " << bsSearch_Name << " was found in position " << mid_point << " in " << search_counter << " binary iterations.\n\n";
	else
		cout << "Suspect not found in list.\n\n";

	return;
}