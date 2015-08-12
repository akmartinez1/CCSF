/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Monday and Wednesday 9:10am to 11:00am
M. Luttrell
Batmale Hall, Room 451

Home Work Assignment 7
2015-03-16

amartinezHW7.cpp

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS--Retake

*/
// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>

// #include <string>  //Remarked out to show that no C++ string libraries included or used and that all algorithms and functions use cstrings.
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

	// Text Markers
	//       123456789 123456789 123456789 123456789 1223456789 123456789 123456789 1234567890
	cout << "Homework Assignment 7 C-Strings\n\n";
	cout << "You will be prompted to enter a string of up to 128 characters.\n\n";
	cout << "Each function will perform a task on the string you enter.\n\n";
	cout << "There is only 1 C-String array that will be used and manipulated throughout\nthis program.\n\n";
	cout << "There is only 1 sub string that will be used for 1 specific function to\nperform a search on your main input string\n\n";

	cout << "Input C-String (128 character max): ";

	cin.getline(input_string, maximum_string_length);
	cout << endl;

	cout << "Current string:  ";
	display_string(input_string);	
	cout << endl << endl;

	//Function 1 - Find last position of target character.
	cout << "Function 1\n";
	cout << "Return the last index of the target search character within the main C-String.\n\n";
	cout << "Target Character: ";
	cin >> target_character;
	cout << "Last index position of '" << target_character << "' = " << lastIndexOf(input_string, target_character) << endl << endl;

	//Function 2 - Reverse input_string.
	cout << "\n\nFunction 2\n";
	cout << "This function will reverse the main C-String in place.\n";
	cout << "If \"flower\" was entered the funcion will return \"rewolf\".\n\n";
	reverse(input_string);
	cout << "Reversed String: ";
	display_string(input_string);
	cout << endl << endl;
	//Reverse string back to original status for continuing functions.  Do not display reverse.
	reverse(input_string);
	
	//Function 3 - Replace target characters.
	cout << "Function 3\n";
	cout << "This function will replace all instances of the \"target\"\ncharacter with a \"replacement\" character in the C-String.\n\n";
	cout << "Original String:  ";
	display_string(input_string);
	cout << "\nTarget charactser:  ";
	cin >> target_character;
	cout << "\nReplacement character:  ";
	cin >> replacement_character;
	cout << "\nTarget characters replaced:  " << replace(input_string, target_character, replacement_character) << endl;
	cout << "New string:  ";
	display_string(input_string);
	cout << endl << endl;

	//Function 4 - Find starting index of substring.
	cout << "Function 4\n";
	cout << "This fuction will search your main C-String with a sub-string you enter.\n\n";
	cout << "This function will return a starting position of your sub-string\nwithin your main string if it is found.\n\n";
	cout << "The function will return a -1 if the sub-string is not found within\nyour main string.\n\n";
	cout << "The current main string is:  ";
	display_string(input_string);
	
	//Clear Input Buffer
	cin.ignore();
	
	cout << "\nEnter target substring:  ";
	cin.getline(target_substring, maximum_string_length);

	cout << "Target substring:  ";
	display_string(target_substring);

	cout << "\nBeginning position of substring found (-1 if not found):  ";
	target_found_index = findSubstring(input_string, target_substring);
	cout << target_found_index << endl << endl;

	//Function 5 - Validate Palindrom
	cout << "\n\nFunction 5\n\n";
	cout << "This fuction will determine if your main string is a palindrome or not.\n\n";
	cout << "The current main string is:  ";
	display_string(input_string);

	if (isPalindrome(input_string) == true)
		cout << "This string IS A Palindrome\n\n";
	else
		cout << "This string IS NOT a Palindrome\n\n";

	//Function 6 - Extra Credit - Reverse WORDS in a C-String without using an additional array.
	cout << "\nFunction 6 - Extra Credit\n";
	cout << "This function will reverse the order of the words in the main string.\n\n";
	cout << "If the main string is \"The Giants won the Pennant!\" the function\n";
	cout << "should change the string to \"Pennant! the won Giants The\"\n\n";
	cout << "The current main string is: ";
	display_string(input_string);
	cout << "\nThe reverse ordered string is: ";
	reverseWords(input_string);
	cout << endl << endl;

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

	//Debug Statement
	//cout << "Original String: ";	
	//display_string(main_string);

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

	//Debug Statement
	//cout << "Reversed String: ";
	//display_string(main_string);
	
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
		cout << "\n\nNot enough \"words\" to reverse order in the string.\n\n";
		return;
	}

	//Step 1 - reverse whole string using "reverse" function.  This will put words in reverse order but also spell words backwards which will be corrected in step 2.
	reverse(main_string);

	//Step 2 - Words are separated by spaces but spelled backwards.  Set next algorithm to find words or white space boundaries and use "reverse" like steps to work only with the word and not the whole string to correct backwards spellings.

	
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