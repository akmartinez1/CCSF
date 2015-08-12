// Arrays 2014-09-09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;



//int _tmain(int argc, _TCHAR* argv[])

int main()
{
	string burrito_type[4] = { "Carnitas", "Beef", "Shrimp", "Vegetarian" };
	int type_sold[4] = { 0 };
	int total_sold = 0;
	int max_type = 0;

	cout << "Please enter the total number of burritos sold for the day of each type. \n\n";
	
	for (int inloop = 0; inloop < 4; inloop++)
	{
		cout << "How many " << burrito_type[inloop] << " burritos were sold for the day:  ";
		cin >> type_sold[inloop];
		cout << endl;
	}

	cout << "Sales report for today.\n\n";

	for (int outloop = 0; outloop < 4; outloop++)
	{
		cout << "Total " << burrito_type[outloop] << " burritos sold is:  " << type_sold[outloop] << endl << endl;
		total_sold = total_sold + type_sold[outloop];

		if (type_sold[outloop]>type_sold[max_type])
			max_type = outloop;
	}

	cout << "The burrito that sold the most is the " << burrito_type[max_type] << " with " << type_sold[max_type] << " burritos sold.\n\n";


	return 0;
}

