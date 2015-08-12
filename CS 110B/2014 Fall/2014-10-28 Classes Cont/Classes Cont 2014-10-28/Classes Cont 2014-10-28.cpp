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
	string user_room;

	cout << "This program will create 3 objects representing 3 rooms of a house.\n";
	cout << "For each room you will need to enter a width, length, and the room name.\n";
	cout << "When finished the program will display the area of each room \nand the total area of the house.\n\n";

	rectangle *room = NULL;
	room = new rectangle[3];

	


	return 0;
}
