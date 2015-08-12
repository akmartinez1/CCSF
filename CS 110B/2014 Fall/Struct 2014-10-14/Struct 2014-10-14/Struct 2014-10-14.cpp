/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Tuesday and Thursday 9:05am to 11:00am
M. Luttrell
Batmale Hall, Room 301, ACRC PC-Lab1

Struct Programming Exercise
2014-10-14

Modified from Pointers 2014-10-02 Programming Exercise

Struct 2014-10-14.cpp

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS-

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

struct burrito_sales
{
	string burrito_type;
	int type_sold;
};

int main()
{
	burrito_sales *sales_record = NULL;
	int burrito_types_input;

	cout << "How many different types of burritos were sold:  ";
	cin >> burrito_types_input;

	sales_record = new burrito_sales [burrito_types_input];
		
	//string burrito_type[4] = { "Carnitas", "Beef", "Shrimp", "Vegetarian" };
	//int type_sold[4] = { 0 };
	int total_sold = 0;
	int grand_total = 0;
	int max_type = 0;

	//Burrito Types Input - This can be created as a separate function

	for (int bti = 0; bti < burrito_types_input; bti++)
	{
		cout << "\nEnter the name of burrito type " << bti + 1 << ": ";
		cin >> sales_record[bti].burrito_type;
	}
	
	cout << "\nPlease enter the total number of burritos sold for the day of each type. \n\n";

	for (int inloop = 0; inloop < burrito_types_input; inloop++)
	{
		cout << "How many " << sales_record[inloop].burrito_type << " burritos were sold for the day:  ";
		cin >> sales_record[inloop].type_sold;
		cout << endl;

		grand_total = grand_total + sales_record[inloop].type_sold;
	}

	cout << "Sales report for today.\n\n";

	for (int outloop = 0; outloop < burrito_types_input; outloop++)
	{
		cout << "Total " << sales_record[outloop].burrito_type << " burritos sold is:  " << sales_record[outloop].type_sold << endl << endl;
		total_sold = total_sold + sales_record[outloop].type_sold;

		if (sales_record[outloop].type_sold>sales_record[max_type].type_sold)
			max_type = outloop;
	}

	cout << "The Grand Total number of burritos (of all types combined) sold is:  " << grand_total << endl;

	cout << "The burrito that sold the most is the " << sales_record[max_type].burrito_type << " with " << sales_record[max_type].type_sold << " burritos sold.\n\n";

	delete[] sales_record;
	sales_record = NULL;
	
	return 0;
}