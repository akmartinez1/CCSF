CS 110A			Spring 2014			Problem Set 5

Administrative

This assignment is due on Thursday, April 24, by 11:55pm.  This assignment is 
to be done individually.  You can discuss this assignment with others but you 
must develop and write your own solutions.  Please follow the standard 
conventions for comments, indentation, meaningful variable names, etc. like the
textbook.  As with all programs, make sure you have a comment at the top of 
your program with your name, the name/number of the assignment, and a brief 
description of what the program does.

Exercise 1 [10 points]

Write a program that calculates the average number of days a company’s 
employees are absent.  

The program should have the following functions:

(1) A function that asks the user for the number of employees in the company. 
	(no parameters, returns an int).

(2) A function that asks the user to enter the number of days each employee 
	missed during the past year.  
	(1 parameter for number of employees, returns total of days missed for all 
	employees)

(3) A function to calculate the average number of days absent 
	(2 int parameters: number of employees and number of days, returns float 
	storing average number of days missed.)

Your program should not accept negative numbers as input: use input validation 
to ensure this.

To get full credit you must follow the instructions on how each function should
be organized.

Example:

How many employees does your company have? -1
Your company can’t have -1 employees.
How many employees does your company have? 3
How many days was Employee #1 absent? 5
How many days was Employee #2 absent? -2
An employee can’t have -2 days absent.
How many days was Employee #2 absent? 3
How many days was Employee #3 absent? 0
Your employees averaged 2.66667 days absent.
