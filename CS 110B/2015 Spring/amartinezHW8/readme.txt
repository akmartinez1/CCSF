CS110B Assignment 8: Baseball League with Structs

City College of San Francisco
Instructor: Max Luttrell
Fall 2014

Rewrite your baseball league application from Assignment 6 so that each 
team/wins pair is stored in a struct named winRecord.  

Your program should meet the following requirements:

1.  The winRecord struct must have two fields: an int named wins, and a char* 
    named name.

2.  The data must be stored in a single array, a dynamically allocated array of 
    winRecord structs.  You must ask the user how many teams are in the league 
	to determine how big this array needs to be.

3.  Your program must use three functions that accept the array of winRecord 
    structs by address:

    void initializeData(winRecord* standings, int size)
    void sortData(winRecord* standings, int size)
    void displayData(winRecord* standings, int size)

4.  Note that the name field of each winRecord struct is just a char* which you 
    will use to store a C-String.  Unlike a C++ string object, the memory to 
	store the C-String is not allocated for you automatically!  You will need 
	to allocate memory for each name field dynamically, based on the length of 
	the team name that the user inputs.  You may develop a function to do this 
	on your own, or you may use the getLine() function getLine.cpp.  This 
	function returns a line of text from the keyboard in a dynamically 
	allocated array.  It’s up to you to free this memory using delete [] when 
	you are done with it.

5.  As with assignment 6, you must provide sample output demonstrating your 
    program works correctly.