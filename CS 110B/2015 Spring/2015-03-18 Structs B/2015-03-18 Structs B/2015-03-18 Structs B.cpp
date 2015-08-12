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

//Structures
struct costs
{
	int wholesale = 2;
	int retail;
};

struct burrito_sales
{
	string burrito_type;
	int type_sold;
	costs pricing;
};

//Prototypes
void profit_report(burrito_sales[], int);
int high_profit();

int main()
{
	burrito_sales *sales_record = NULL;
	int burrito_types_input;
	int total_profit;

	cout << "How many different types of burritos were sold:  ";
	cin >> burrito_types_input;

	sales_record = new burrito_sales[burrito_types_input];

	int total_sold = 0;
	int grand_total = 0;
	int max_type = 0;
	int profit = 0;

	//Burrito Types User Input
	for (int bti = 0; bti < burrito_types_input; bti++)
	{
		cout << "\nEnter the name of burrito type " << bti + 1 << ": ";
		cin >> sales_record[bti].burrito_type;
	}

	//Burritos of Type X Sold
	cout << "\nPlease enter the total number of burritos sold for the day of each type. \n\n";

	for (int inloop = 0; inloop < burrito_types_input; inloop++)
	{
		cout << "How many " << sales_record[inloop].burrito_type << " burritos were sold for the day:  ";
		cin >> sales_record[inloop].type_sold;
		cout << endl;

		grand_total = grand_total + sales_record[inloop].type_sold;
	}

	//Wholesale Price of Typs X Sold
	cout << "\nPlease enter the wholesale cost of burritos sold for the day of each type. \n\n";

	for (int wholesale_inloop = 0; wholesale_inloop < burrito_types_input; wholesale_inloop++)
	{
		cout << "What is the wholesale cost of  " << sales_record[wholesale_inloop].burrito_type << ":  ";
		cin >> sales_record[wholesale_inloop].pricing.wholesale;
		cout << endl;
	}

	//Retail Price of Typs X Sold
	cout << "\nPlease enter the retail price of burritos sold for the day of each type. \n\n";

	for (int retail_inloop = 0; retail_inloop < burrito_types_input; retail_inloop++)
	{
		cout << "What is the retail price of  " << sales_record[retail_inloop].burrito_type << ":  ";
		cin >> sales_record[retail_inloop].pricing.retail;
		cout << endl;
	}

	//Sales Report
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

	//cout << "\n\n" << burrito_types_input << "\n\n";

	profit_report(sales_record, burrito_types_input);

	delete[] sales_record;
	sales_record = NULL;

	return 0;
}

void profit_report(burrito_sales prBurrito_Sales[], int prBTI)
{
	cout << "\n\nSales Profit Report\n\n";

	for (int profit_loop = 0; profit_loop < prBTI; profit_loop++)
	{
		cout << "For the  " << prBurrito_Sales[profit_loop].burrito_type << " burrito type with a retail price of ";
		cout << prBurrito_Sales[profit_loop].pricing.retail << " and a wholesale cost of ";
		cout << prBurrito_Sales[profit_loop].pricing.wholesale << " has a profit of ";
		cout << prBurrito_Sales[profit_loop].pricing.retail - prBurrito_Sales[profit_loop].pricing.wholesale << endl;
	}

	return;
}
