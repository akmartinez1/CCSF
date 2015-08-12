/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Tuesday and Thursday 9:05am to 11:00am
M. Luttrell
Batmale Hall, Room 301, ACRC PC-Lab1

Classes Continued Programming Exercise A
October 28, 2014

Classes Cont 2014-10-28

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS-

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include "rectangle.h"
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int user_w = 0;
	int user_l = 0;
	char user_input[max_chars];
	rectangle room[3];

	cout << "This program will create 3 objects representing 3 rooms of a house.\n";
	cout << "For each room you will need to enter a width, length, and the room name.\n";
	cout << "When finished the program will display the area of each room \nand the total area of the house.\n\n";

	for (int index = 0; index < 3; index++)
	{
		cout << "Please enter the name of room number " << index << ":  ";
		cin.getline(user_input, max_chars);
		room[index].set_name(*user_input);

		cout << "Please enter the width of room nunmber " << index << ":  ";
		cin.getline(user_input, max_chars);
		room[index].set_width(*user_input);

		cout << "Please enter the length of room number " << index << ":  ";
		cin.getline(user_input, 128);
		room[index].set_length(*user_input);
	}
	
	



	return 0;
}
