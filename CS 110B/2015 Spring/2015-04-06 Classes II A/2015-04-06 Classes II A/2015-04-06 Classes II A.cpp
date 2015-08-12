// 2015-04-06 Classes II A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "rectangle.h"
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int user_w = 0;
	int user_l = 0;
	const int max_chars = 128;
	char *user_room[max_chars];
	

	cout << "This program will create 3 objects representing 3 rooms of a house.\n";
	cout << "For each room you will need to enter a width, length, and the room name.\n";
	cout << "When finished the program will display the area of each room \nand the total area of the house.\n\n";

	rectangle *room = NULL;
	room = new rectangle[3];

	for (int index = 0; index < 3; index++)
	{
		cout << "Please enter the name of room number " << index+1 << ":  ";
		cin.getline(user_room[], max_chars);
		room[index].print_name(*user_room);

		cout << "Please enter the width of room nunmber " << index+1 << ":  ";
		cin.getline(user_input, max_chars);
		room[index].set_width(*user_input);

		cout << "Please enter the length of room number " << index+1 << ":  ";
		cin.getline(user_input, 128);
		room[index].set_length(*user_input);
	}




	return 0;
}
