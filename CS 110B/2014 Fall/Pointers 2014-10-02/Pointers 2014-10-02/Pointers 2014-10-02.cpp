/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Tuesday and Thursday 9:05am to 11:00am
M. Luttrell
Batmale Hall, Room 301, ACRC PC-Lab1

Pointers Programming Exercise B
2014-10-02

Modified from Arrays 2014-09-11 Programming Exercise

Pointers 2014-10-02

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS-

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string *burrito_type = NULL;
	int *type_sold = NULL;
	int burrito_types_input;

	cout << "How many different types of burritos were sold:  ";
	cin >> burrito_types_input;

	burrito_type = new string[burrito_types_input];
	type_sold = new int[burrito_types_input];


	//string burrito_type[4] = { "Carnitas", "Beef", "Shrimp", "Vegetarian" };
	//int type_sold[4] = { 0 };
	int total_sold = 0;
	int grand_total = 0;
	int max_type = 0;
	
	//Burrito Types Input - This can be created as a separate function

	for (int bti = 0; bti < burrito_types_input; bti++)
	{
		cout << "\nEnter the name of burrito type " << bti + 1 << ": ";
		cin >> burrito_type[bti];
	}


	cout << "\nPlease enter the total number of burritos sold for the day of each type. \n\n";

	for (int inloop = 0; inloop < burrito_types_input; inloop++)
	{
		cout << "How many " << burrito_type[inloop] << " burritos were sold for the day:  ";
		cin >> type_sold[inloop];
		cout << endl;

		grand_total = grand_total + type_sold[inloop];
	}

	cout << "Sales report for today.\n\n";

	for (int outloop = 0; outloop < burrito_types_input; outloop++)
	{
		cout << "Total " << burrito_type[outloop] << " burritos sold is:  " << type_sold[outloop] << endl << endl;
		total_sold = total_sold + type_sold[outloop];

		if (type_sold[outloop]>type_sold[max_type])
			max_type = outloop;
	}

	cout << "The Grand Total number of burritos (of all types combined) sold is:  " << grand_total << endl;

	cout << "The burrito that sold the most is the " << burrito_type[max_type] << " with " << type_sold[max_type] << " burritos sold.\n\n";

	delete [] burrito_type;
	delete [] type_sold;
	burrito_type = NULL;
	type_sold = NULL;

	return 0;
}