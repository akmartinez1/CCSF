CS 110A			Spring 2014			Problem Set 4

Administrative

This assignment is due on Thursday, March 27, at the beginning of class.  This 
assignment is to be done individually.  You can discuss this assignment with 
others but you must develop and write your own solutions.  Please follow the 
standard conventions for comments, indentation, meaningful variable names, 
etc. like the textbook.

Exercise 1 [20 points]

Write a program that simulates an adding machine.  Input to the program will be
integers, submitted one per line.  Input should be handled as follows: a 
nonzero value should be added into a subtotal; a zero value should cause the 
subtotal to be printed and reset to zero; two consecutive zeroes should cause 
the total of all the values input to be printed and the program to be 
terminated.  

Example:

1
2
3
4
0
subtotal: 10
5
6
7
0
subtotal: 18
8
9
0
subtotal: 17
-10
0
subtotal: -10
0
total: 35

Make sure that your program works for the 0-0 case.  

Example:

0
subtotal: 0
0
total: 0

