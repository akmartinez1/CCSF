CS110B Assignment 5: Baseball League

City College of San Francisco
Instructor: Max Luttrell
Fall 2014

Write a program that records and displays league standings for a baseball 
league. The program will ask the user to enter five team names, and five win 
amounts. It will store the data in memory, and print it back out sorted by 
wins.

The sample output from your program should look approximately like this 
(user input in orange):

Enter team #1: Padres
Enter the wins for team #1: 75
Enter team #2: Dodgers
Enter the wins for team #2: 91
Enter team #3: Giants
Enter the wins for team #3: 92
Enter team #4: Rockies 
Enter the wins for team #4: 65
Enter team #5: Diamondbacks
Enter the wins for team #5: 70

League Standings:
Giants: 92
Dodgers: 91
Padres: 75
Diamondbacks: 70
Rockies: 65

Requirements

The data must be stored in two arrays: an array of strings named teams, and an 
array of ints named wins.  These arrays must be declared in the main() 
function.

All of the user input should be done in a function named initializeArrays. It 
should have the following signature:

void initializeData(string n[], int s[], int size)

You must also write two more functions: one to sort both arrays, and one to 
display the final list of names and scores. They should have the following 
signatures.

void sortData(string n[], int s[], int size)
void displayData(string n[], int s[], int size)

The main function should be very short. It should just declare the arrays and 
then invoke these three functions.
