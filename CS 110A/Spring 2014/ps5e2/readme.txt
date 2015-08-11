CS 110A			Spring 2014			Problem Set 5

Administrative

This assignment is due on Thursday, April 24, by 11:55pm.  This assignment is 
to be done individually.  You can discuss this assignment with others but you 
must develop and write your own solutions.  Please follow the standard 
conventions for comments, indentation, meaningful variable names, etc. like the
textbook.  As with all programs, make sure you have a comment at the top of 
your program with your name, the name/number of the assignment, and a brief 
description of what the program does.

Exercise 2 [10 points]

Write a program that inputs 10 integers from the user into an array, and 
removes the duplicate array elements.  By removing, I meant that you should 
make it appear as if the elements hadn’t been there.  So not just setting 
duplicates to an “empty” value, but filling in the gap.  Or alternatively, 
storing only the non-repeating elements.  You may assume that all the integers 
are between 0 and 100.  Write at least 1 function in addition to the main 
function, and pass an array into that function as a parameter.

Examples:

Please enter 10 integers:  1 2 3 4 5 6 7 8 9 10
Duplicates removed:  1 2 3 4 5 6 7 8 9 10
Please enter 10 integers:  1 1 1 1 1 1 1 1 1 1
Duplicates removed:  1
Please enter 10 integers:  4 22 333 4444
Duplicates removed:  4 2 3
