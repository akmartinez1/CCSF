/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Tuesday and Thursday 9:05am to 11:00am
M. Luttrell
Batmale Hall, Room 301, ACRC PC-Lab1

Home Work Assignment 7
Tuesday, October 14, 2014

amartinezHW7.cpp

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS-

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
#include <string>
#include <cstring>

using namespace std;


//Prototypes
int lastIndexOf(char *, char);
void reverse(char *);
int replace(char *, char, char);
int findSubstring(char *, char *);
bool isPalindrome(char *s);
void reverseWords(char *s);
void string_out(char *);


int main(void)
{ 
	const int maximum_characters = 128;
	char input_string[maximum_characters] = "\0";
	char find_sub_string[maximum_characters] = "\0";
	char target_char;
	char rep_char;
	int last_char_index;
	int rep_char_count = 0;
	
	cout << "This program will request input for a C-String and pass the information to \nseveral function for manipultion.\n\n";
	cout << "Please enter a C-String of up to 128 characters:  ";

	cin.getline(input_string, maximum_characters);

	//Debug:  Output string before sending to functions.
	string_out(input_string);

	cout << "Please enter a character you would like to find within your C-String:  ";
	cin >> target_char;

	cout << "\nThe last position for the target chacter is at: ";
	
	last_char_index = lastIndexOf(input_string, target_char);

	cout << last_char_index << endl << endl << endl;

	reverse(input_string);

	//Reset target_char variable for next function use.
	target_char = '\0';
	
	cout << "Your current string is:  " << input_string << endl;

	cout << "\n\nThis next function will replace a character in your string with another of your choice\n\n";
	cout << "What character in your C-String would you like to replace:  ";
	cin >> target_char;

	cout << "\nWhat would you like to replace '" << target_char << "' with:  ";
	cin >> rep_char;

	rep_char_count = replace(input_string, target_char, rep_char);

	cout << "Your target character was replaced " << rep_char_count << " times.";

	cout << "\n\nThis function will search your C-String for a sub-string of characters.\n";
	cout << "What sub-string would you like to search for in your C-String: ";
	cin >> find_sub_string;

	findSubstring(input_string, find_sub_string);
	
	//cout << found_sub_string;

	return 0;
}

void string_out(char *user_string)
{
	//Function to debug string.  Output C-String to verify array contents before first instance of null character.

	int index_limit = strlen(user_string);
	int index = 0;

	for (int index = 0; index < index_limit; index++)
	{
		cout << user_string[index];
	}

	cout << endl << endl;

	return;
}

int lastIndexOf(char *user_string, char target)
{
	int index_limit = strlen(user_string);
	int target_char_index = -1;
	
	for (int index = 0; index < index_limit; index++)
	{
		if (user_string[index] == target)
			target_char_index = index;
	}

	return target_char_index;
}

void reverse(char *user_string)
{
	const int index_limit = strlen(user_string);
	
	cout << "\n\nThis function alters the array to reverse the contents in place.\n\n";

	//Output string before manipulation.
	cout << "The string before manipulation is:  ";

	string_out(user_string);
	
	//Manipulate string to reverse the current array values.

	int front_to_back_index = 0;
	int back_to_front_index = index_limit-1;
	char holding_cell;

	while (front_to_back_index <= back_to_front_index)
	{
		holding_cell = user_string[front_to_back_index];

		user_string[front_to_back_index] = user_string[back_to_front_index];

		user_string[back_to_front_index] = holding_cell;

		front_to_back_index++;
		back_to_front_index--;
	}

	cout << "The string after manipulation is:  ";

	string_out(user_string);
	
	cout << endl << endl;

	return;
}

int replace(char *user_string, char target, char rep_char)
{
	int rep_count = 0;
	int index_limit = strlen(user_string);

	string_out(user_string);

	cout << endl << endl;

	//Replace target character in C-String with replacement character
	for (int index = 0; index < index_limit; index++)
	{
		if (user_string[index] == target)
		{
			user_string[index] = rep_char;
			rep_count++;
		}
	}

	cout << endl << endl;

	//Display C-String after check for replacement characters.
	
	string_out(user_string);
	
	return rep_count;
}

int findSubstring(char *user_string, char *find_sub_string)
{
	int found_pos = -1;
	int uslength = strlen(user_string);			//Array length of user_string.
	int fsslength = strlen(find_sub_string);	//Array length of find_sub_string variable.
	int loop1 = 0;
	int loop2 = 0;
	int correct_content_counter = 0;
	bool found_sub_string = false;
	int loop_limit = uslength - fsslength;		//Set limit to loop to prevent searching for a sub string larger
												//than what is remaining in the main string.
	cout << "\nDebug Check\n";
	cout << "Found Position: " << foud_pos;
	cout << "\nUser String Length: " << uslength;
	cout << "\nFind Sub String Length: " << fsslength;
	cout << "\nLoop1: " << loop1;
	do
	{
		for (int search = 0; search <= fsslength; search++)
		{
			if (user_string[loop1 + search] = find_sub_string[search])
				correct_content_counter++;
		}

		if (correct_content_counter == fsslength)
		{
			found_sub_string = true;
			found_pos = loop1;
		}
		else
		{
			loop1++;
			found_pos = -1;
			correct_content_counter = 0;
		}


	} while (found_sub_string == false && loop1 <= loop_limit);

	cout << endl << found_pos << endl << endl;
	
	return found_pos;
}
