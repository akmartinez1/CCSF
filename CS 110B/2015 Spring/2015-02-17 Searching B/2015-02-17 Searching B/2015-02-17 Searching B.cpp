/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Monday and Wednesday 9:10am to 11:00am
M. Luttrell
Batmale Hall, Room 451

Home Work Assignment #
Due Date

Filename

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS--Retake

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

#include <fstream>

//Prototypes
void read_files(string []);
void sort_names(string[]);


int main(void)
{
	
	string names_list[20] = { "0" };
	
	read_files(names_list);

	for (int out_loop = 0; out_loop < 20; out_loop++)
	{
		cout << names_list[out_loop] << endl;
	}




	return 0;
}

void sort_names(string snNames_List[])
{
	bool did_swap = true;
	string swap_hold;

	do{

	}
}

void read_files(string rfNames_List[])
{
	ifstream inputFile;

	inputFile.open("names.txt");

	if (!inputFile)
	{
		cout << "ERROR: Invalid filename\n";
		exit(1);
	}

	for (int in_loop = 0; in_loop < 20; in_loop++)
	{
		inputFile >> rfNames_List[in_loop];
	}
		
	inputFile.close();
	
	return;
}