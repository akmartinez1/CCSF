// File IO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

// look up vector

//int _tmain(int argc, _TCHAR* argv[])

void main()
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


	return;
}

