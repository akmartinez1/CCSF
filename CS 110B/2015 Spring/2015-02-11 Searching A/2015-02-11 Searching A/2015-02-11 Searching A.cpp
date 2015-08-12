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
using namespace std;

#include <fstream>



int main(void)
{

	long int creditCard;
	ifstream inputFile;

	inputFile.open("creditcards.txt");
	
	if (!inputFile)
	{
		cout << "ERROR: Invalid filename\n";
		exit(1);
	}
	
	inputFile >> creditCard;
	
	cout << "The credit card number is: " << creditCard << endl;
	
	inputFile.close();



	return 0;
}