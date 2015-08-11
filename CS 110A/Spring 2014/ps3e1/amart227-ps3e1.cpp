/*
Alan K. Martinez
amart227@mail.ccsf.edu

CS110A Introduction to C++ Programming
T & Th 9:05am - 11:00am
Batmale Hall, Room 413

Problem Set 3 Exercise 1
Due Thursday, February 27, 2014

Write a program that asks a user to enter the beginning balance of an account and the number of checks written for month.
Your program hould calculate and print the bank charge fee for that month.

A bank charges $10 per month plus:
$0.10 each for less than 20 cheks
$0.08 each for 20-39 checks
$0.06 each for 40-59 checks
$0.04 each for 60 or more checks

The bank also charges $15 if the beginning balance is below $400.
*/

// ps3e1.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

int main(void)
{
	float beginning_balance;
	float total_charge;
	float check_charge;
	float min_balance_charge;
	int checks_written;

	const float monthly_bank_charge = 10.00;
	const float req_min_bal = 400.00;

	cout << "What is the beginning balance of your bank account?" << endl;
	cin >> beginning_balance;
	cout << endl;
	cout << "How many checks have you writtent?" << endl;
	cin >> checks_written;

	// Start with mandatory monthly bank charge.
	total_charge = total_charge + monthly_bank_charge;

	// Apply charge if minimum balance is not met.
	if (beginning_balance < req_min_bal)
		{
		min_balance_charge = 15.00;
		total_charge = total_charge + min_balance_charge;
		}
	else
		{
		min_balance_charge = 0.00;
		}
		;

	// Determine per check charge for written checks.
	
		if (checks_written > 59)
			{
			check_charge = 0.04;
			}
		else
			;
		if (checks_written > 39 && checks_written < 60)
			{
			check_charge = 0.06;
			}
		else
			;
		if (checks_written > 19 && checks_written < 40)
			{
			check_charge = 0.08;
			}
		else
			;
		if (checks_written < 20)
			{
			check_charge = 0.10;
			}
		else
			;
		
	// Question:  Can a switch statement work here?  I can't seem to make it work.
	/*switch (checks_written)
		{ 
		case '>59':
			check_charge = 0.04;
		break;
		case '>39':
			check_charge = 0.06;
		break;
		case '>19':
			check_charge = 0.08;
		break;
		default:
			check_charge = 0.10;
		}
	*/

	//  Apply charge for checks written to running total charge
	total_charge = total_charge + (checks_written * check_charge);

	cout << endl;
	cout << "Your monthly bank charge is: " << monthly_bank_charge << endl;
	cout << "Your minimum balance charge is: " << min_balance_charge << endl;
	cout << "Your fee per written check is: " << check_charge << endl;
	cout << "Your charge for " << checks_written << " written is: " << checks_written * check_charge << endl;
	cout << "Your total charge for this month is: " << total_charge << endl;
	return 0;
}

