CS 110B Assignment 1: Getting Started

City College of San Francisco
Instructor: Max Luttrell
Fall 2014

For this week, I am mainly interested in making sure you are familiar with the 
basics of C++ and that you get accustomed to our computer systems and homework 
submission process.  Since some students are still adding the course this week,
it will be a simple assignment.  Your goal this week will be to make sure that 
you have the following pieces of syntax committed to memory:

including the iostream library
creating a main function
declaring variables
while loops
for loops
output with cout
simple input with cin

To give you a way to test whether or not you have these bits of syntax 
memorized, I've written a small program below. The program asks the user how 
many asterisks it should print out. The user responds with a number, then the 
program prints the asterisks. Finally the program asks the user if it should 
start over, and repeats as many times as the user wants.

Read the program and make sure that you understand what it is doing. Then set 
the program aside and type in an identical program and compile it. You don't 
need to use the same variable names and formatting, but be careful with your 
indentation, and make sure that the flow of control is identical.

If your experience so far has been with a language other than C++, the #include
statement, and the cin and cout objects might be unfamiliar.  You will find 
explanations in the reading material for the week.

// Assignment 1: Your name here
// This program prints out as many asterisks as the user wants.
#include<iostream>
using namespace std;
int main()
{
int count;
char goAgain = 'y';
while (goAgain != 'n')
{
cout << "How many asterisks?: ";
cin >> count;
for (int i = 0; i < count; i++)
{
cout << "*";
}
cout << endl;
cout << "Go again? (y/n): ";
cin >> goAgain;
}
return 0;
}

Help!

See the Step by Step instructions at the bottom of the computer systems guide 
for details how to enter, compile, run, and submit your program and sample 
output.

Submission

To submit your program, you must use the assignment uploader.
Update: we now have Insight up and running for our class, and will use it to 
submit assignments and check your grades.  For this assignment and future 
assignments, you will need to submit via Insight.  The Insight team has put 
together a handout how to connect to Insight.

fllllllllHWn.txt
f: your first initial
l: your last name
n: assignment number
Example: Max Luttrell is turning in assignment 1.  The filename is: mluttrellHW1.txt