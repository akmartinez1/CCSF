CS 110A			Spring 2014			Problem Set 6

Administrative

This assignment is due on Thursday, May 8, by 9:00am.  This assignment is to be
done individually or in a partnership of two people.  If the assignment is done
in a partnership the one assignment will be handed in with two names on it and 
both people will get the same grade for the assignment.  You can discuss this 
assignment with others but you must develop and write your own solutions.  
Please follow the standard conventions for comments, indentation, meaningful 
variable names, etc. Like the textbook.  As with all programs, make sure you 
have a comment at the top of your program with your name, the name/number of 
the assignment, and a brief description of what the program does.

Exercise 1 [10 points]

For this assignment you are to write a program to simulate the famous game of 
Tic-Tac-Toe.  You must represent the board using an array of characters.  Input
will consist of a number (1 through 9) and a character (‘X’ or ‘O’), on a 
signle line.  

The numbers 1 through 9, represent a position on the board. e.g.:

1 2 3
4 5 6
7 8 9

An empty board location will be represented with all dashes (‘-‘) or the number
represented above.  For input validation you must check for numbers outside of 
the range 1 – 9, and characters other than ‘X’ and ‘O’, and whether or not the
space is previously occupied.  If input is valid then print a new board with 
the new character in place.  If the input is not valid then print a message 
stating that the input is not valid, don’t print a new board and ask the user 
to enter another input.  The game should continue until there is a winner or 
the board runs out of space.  If there is a winner the program should print out
who the winner is.  If there is not a winner the program should state it.  

The program must have at least two functions other than main().

