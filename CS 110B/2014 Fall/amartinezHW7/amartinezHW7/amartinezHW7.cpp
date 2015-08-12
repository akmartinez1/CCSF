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
void display_string(char *);
int lastIndexOf(char *, char);
void reverse(char *);
int replace(char *, char, char);
int findSubstring(char *, char[]);
bool isPalindrome(char *);
void reverseWords(char *);

//Global Variables
const int maximum_string_length = 128;


int main(void)
{
	char input_string[maximum_string_length] = "\0";
	char target_character;
	char replacement_character;
	char target_substring[maximum_string_length] = "\0";
	int target_found_index = -1;

	cout << "Main\n\n";
	cout << "Input C-String (128 character max): ";

	cin.getline(input_string, maximum_string_length);
	cout << endl;

	//Debug Function - Display Input String from user.
	cout << "Current string:  ";
	display_string(input_string);	

	//Function 1 - Find last position of target character.
	cout << "Function 1\n";
	cout << "Target Character: ";
	cin >> target_character;
	cout << "Last index position of '" << target_character << "' = " << lastIndexOf(input_string, target_character) << endl;

	//Function 2 - Reverse input_string.
	cout << "\n\nFunction 2\n";
	reverse(input_string);

	//Function 3 - Replace target characters.
	cout << "Function 3\n";
	cout << "Target charactser:  ";
	cin >> target_character;
	cout << "Replacement character:  ";
	cin >> replacement_character;
	cout << "Target characters relaced:  " << replace(input_string, target_character, replacement_character) << endl;
	cout << "New string:  ";
	display_string(input_string);

	//Function 4 - Find starting index of substring.
	cout << "Function 4\n";

	//Clear Input Buffer
	cin.ignore();
	
	cout << "Current string:  ";
	display_string(input_string);
	cout << "\nEnter target substring:  ";
	cin.getline(target_substring, maximum_string_length);

	cout << "Target substring:  ";
	display_string(target_substring);

	cout << "\n\nBeginning position of substring found (-1 if not found):  ";
	target_found_index = findSubstring(input_string, target_substring);
	cout << target_found_index<< endl;

	//Function 5 - Validate Palindrom
	cout << "\nFunction 5\n\n";
	display_string(input_string);

	if (isPalindrome(input_string) == true)
		cout << "IS A Palindrome\n";
	else
		cout << "IS NOT a Palindrome\n";

	//Function 6 - Extra Credit - Revers WORDS in a C-String without using an additional array.
	reverseWords(input_string);

	return 0;
}

void display_string(char *main_string)
{
	//Debug Function
	//Display content of main string being passed to current function.
	
	int string_index = 0;

	//Do while loop to display C-String array from beginning until null character is encountered or maximum string length is reached.

	do
	{
		cout << main_string[string_index];
		string_index++;
	} while (main_string[string_index] != '\0' && string_index <= maximum_string_length);

	cout << endl << endl;

	return;
}

int lastIndexOf(char *main_string, char target_character)
{
	int search_index = 0;
	int last_target_position = -1;

	do
	{
		if (main_string[search_index] == target_character)
			last_target_position = search_index;

		search_index++;

	} while (main_string[search_index] != '\0' && search_index <= maximum_string_length);

	return last_target_position;
}

void reverse(char *main_string)
{
	
	const int index_limit = strlen(main_string);

	//Manipulate string to reverse the current array values.
	int front_to_back_index = 0;
	int back_to_front_index = index_limit - 1;
	char holding_cell;

	cout << "Original String: ";	
	display_string(main_string);

	//Reversing array order in place (using cuurrent array and not creating an additional array) exchanges values of indices from the ends (front and back) towards the middle.  If an odd length value is present the center index is exchanged with itself and finishes excange in place algorithm.
	while (front_to_back_index <= back_to_front_index)
	{
		//Place current index content from front half of array in holding cell to prevent losing or overwrite of value before exchange.
		holding_cell = main_string[front_to_back_index];

		//Place current index content from back half of array in corresponding index of front half of array.
		main_string[front_to_back_index] = main_string[back_to_front_index];

		//Place content in holding cell into current index content of back half of array.
		main_string[back_to_front_index] = holding_cell;

		front_to_back_index++;	//Increase index value from front to middle/end.
		back_to_front_index--;	//Decrease index value from end to middle/front.
	}

	cout << "Reversed String: ";
	display_string(main_string);
	
	return;
}

int replace(char *main_string, char target_character, char replacement_character)
{
	int replacement_count = 0;
	int index_limit = strlen(main_string);

	//Replace target character in C-String with replacement character
	for (int index = 0; index < index_limit; index++)
	{
		if (main_string[index] == target_character)
		{
			main_string[index] = replacement_character;
			replacement_count++;
		}
	}


	return replacement_count;
}

int findSubstring(char *main_string, char target_substring[])
{
	int main_string_index = 0;
	int substring_index = 0;
	int beginning_index_found = -1;
	int main_string_search_limit = strlen(main_string);
	int substring_search_limit = strlen(target_substring);
	int correct_content_counter = 0;
	bool found_substring = false;

	//Perform search until substring is found or until end of main_string is reached.  Search for substring within main_string at each index.
	do
	{
		/*
		cout << "\nMain Char: " << main_string[main_string_index] << "     Main Index: " << main_string_index;
		cout << "\nTarget Char: " << target_substring[substring_index] << "     Target Index: " << substring_index;
		cout << "\nContent Counter: " << correct_content_counter << "     Beggining Index Found: " << beginning_index_found;
		*/

		for (int search = 0; search < substring_search_limit; search++)
		{
			if (main_string[main_string_index + search] == target_substring[search])
				correct_content_counter++;
		}

		if (correct_content_counter == substring_search_limit)
		{
			found_substring = true;
			beginning_index_found = main_string_index;
		}
		else
		{
			main_string_index++;
			beginning_index_found = -1;
			correct_content_counter = 0;
			found_substring = false;
		}
		 
	} while (found_substring == false && main_string_index <= (main_string_search_limit - substring_search_limit));

	return beginning_index_found;
}

bool isPalindrome(char *main_string)
{
	//Repeat front to back / back to front loop to compare array contents working from the ends towards the middle.  An odd numbered array length will have the center index compare with itself before ending loop.
	int front_to_back_index = 0;
	int back_to_front_index = strlen(main_string) - 1;
	bool palindrome = true;

	while (front_to_back_index <= back_to_front_index && palindrome == true)
	{
		if (main_string[front_to_back_index] == main_string[back_to_front_index])
		{
			palindrome = true;
			front_to_back_index++;
			back_to_front_index--;
		}
		else
			palindrome = false;
	}

	return palindrome;
}

void reverseWords(char *main_string)
{
	int main_string_limit = strlen(main_string);
	int search_index = 0;
	int find_white_space = 0;
	int word_start = 0;
	int word_end = 0;
	int front_to_back = 0;
	int back_to_front = 0;
	char holding_cell = '\0';
	bool continue_search = false;
	int holder = 0;
	
	//Search for number of spaces in C-String
	int word_count = 1;
	for (int find_white_spaces = 0; find_white_spaces < main_string_limit; find_white_spaces++)
	{
		if (main_string[find_white_spaces] == ' ')
			word_count++;
	}

	//Error control.  If only 1 word in string then function is done.
	if (word_count < 2)
	{
		cout << "Not enough \"words\" to reverse order in the string.\n\n";
		return;
	}

	//Step 1 - reverse whole string using "reverse" function.  This will put words in reverse order but also spell words backwards which will be corrected in step 2.
	reverse(main_string);

	//Steo 2 - Words are separated by spaced but spelled backwards.  Set next algorithm to find words or white space boundaries and use "reverse" like steps to work only with the word and not the whole string to correct backwards spellings.

	
	//Initialize first word boundary.
	//"word_start" pre-initialied at 0.
	do
	{
		//Find next index containing a white space.
		if (main_string[word_end] == ' ' || main_string[word_end] == '\0' || word_end > main_string_limit)
		{
			continue_search = false;
		}
		else
			{
				word_end++;
				continue_search = true;
			}
	} while (continue_search == true);
	
	//Repair words one word at a time.
	for (int word_repair = 0; word_repair < word_count; word_repair++)
	{
		//Set index variable and prevent off by 1 problem.
		back_to_front = word_end-1;
		
		while (front_to_back <= back_to_front)
		{
			holding_cell = main_string[front_to_back];

			main_string[front_to_back] = main_string[back_to_front];

			main_string[back_to_front] = holding_cell;

			front_to_back++;
			back_to_front--;
		}
		
		//Advance word start and end markers.
		word_start = word_end + 1;
		word_end++;

		do
		{
			if (main_string[word_end] == ' ' || main_string[word_end] == '\0')
				continue_search = false;
			else
			{
				word_end++;
				continue_search = true;
			}
		} while (continue_search==true);

		front_to_back = word_start;
	}
	
	display_string(main_string);
	
	return;
}