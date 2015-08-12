CS110B Assignment 6: Baseball League with DMA

City College of San Francisco
Instructor: Max Luttrell
Fall 2014

Rewrite your Baseball League program from Assignment 5 so that it uses Dynamic 
Memory Allocation (DMA) to create the team names and scores arrays.

This is a good test of the modularity of your program. You will only need to 
make slight modifications to your main function if you wrote your original 
program using functions similar to the following:

void initializeData(string n[], int s[], int size)
void sort(string n[], int s[], int size)
void display(string n[], int s[], int size)

Your modified baseball league program should start out by asking the user how 
many teams will be entered.  It should allocate appropriate arrays, and then 
proceed just like the original Baseball League assignment.  

The output from your program should look approximately like this 
(user input in orange bold):

How many teams will you enter?: 4
Enter team #1: Padres
Enter the wins for team #1: 75
Enter team #2: Dodgers
Enter the wins for team #2: 91
Enter team #3: Giants
Enter the wins for team #3: 92
Enter team #4: Red Sox 
Enter the wins for team #4: 65
League Standings:
Giants: 92
Dodgers: 91
Padres: 75
Red Sox: 65