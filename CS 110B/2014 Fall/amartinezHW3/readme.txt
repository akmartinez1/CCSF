CS110B Assignment 3: Number Guesser

City College of San Francisco
Instructor: Max Luttrell
Fall 2014

In this assignment you will write a program in that can figure out a number 
chosen by a human user. The human user will think of a number 
between 1 and 100. The program will make guesses and the user will tell the 
program to guess higher or lower.

A sample run of the program might look like this:

Guess a number between 1 and 100.
Is it 50?  (h/l/c): h
Is it 75?  (h/l/c): h
Is it 88?  (h/l/c): l
Is it 81?  (h/l/c): c
Great! Do you want to play again? (y/n): y
Guess a number between 1 and 100.
Is it 50?  (h/l/c): l
Is it 25?  (h/l/c): h
Is it 37?  (h/l/c): c
Great! Do you want to play again? (y/n): n

Notice that the user inputs the characters ‘h’, ‘l’, and ‘c’ for higher, lower, 
and correct, respectively.

Your program should implement the binary search algorithm.  Every time the 
program makes a guess it should guess the midpoint of the remaining possible 
values.  

Consider the first example above, in which the user has chosen the 
number 81:

On the first guess, the possible values are 1 to 100. The midpoint is 50.
The user responds by saying “higher”

On the second guess the possible values are 51 to 100. The midpoint of 75.
The user responds by saying “higher”

On the third guess the possible values are 76 to 100. The midpoint is 88.
The user responds by saying “lower”

On the fourth guess the possible values are 76 to 87. The midpoint is 81.
The user responds “correct”

Requirements

The purpose of the assignment is to practice writing functions. Although it 
would be possible to write the entire program in the main function, your 
solution should be heavily structured. To receive credit, your main function 
must look like this:

int main() {
  do
  {
    playOneGame();
  } while (shouldPlayAgain());
  return 0;
}

The playOneGame function should have a return type of void. It should implement 
a complete guessing game on the range of 1 to 100.  

The shouldPlayAgain function should have a boolean return type. It should 
prompt the user to determine if the user wants to play again, read in a 
character, then return true if the character is a ‘y’, and otherwise return 
false.

In addition, you should implement the helper functions getUserResponseToGuess, 
and getMidpoint. They should be invoked inside your playOneGame function.

getUserResponseToGuess. This function should prompt the user with the phrase 
“is it <guess>? (h/l/c): “  with the value replacing the token <guess>. It 
should return a char. 

The char should be one of three possible values: ‘h’, ‘l’, or ‘c’.  

It should have the following signature:

char getUserResponseToGuess(int guess)

getMidpoint. This function should accept two integers, and it should return the
midpoint of the two integers. If there are two values in the middle of the 
range then you should consistently chose the smaller of the two. It should have
the following signature:

int getMidpoint(int low, int high)

Suggestion

To enable faster testing and debugging, you may want to first try your program 
with a smaller range, e.g. 1-10 instead of 1-100.  This will enable you to test
your program more quickly.  When you are confident it’s working for 1-10, you 
can change your range to 1-100 and test to make sure everything is still 
working correctly before you submit.  If you’ve avoided using a magic number 
for the range, this should be easy to change!

What to submit

Submit a file showing your program and sample output demonstrating program 
behavior with varied input types, in one big txt file (not rtf file).  Submit 
the file using Insight.

Extra Practice (Up to 10% extra credit)

For extra practice, write a function named getRandomMidpoint. This function 
should accept two arguments just like getMidpoint. But it should return a 
random number in between the low and high arguments. You can swap this function
with the getMidpoint function to change the nature of how the program makes its
guesses.  To get extra credit, make sure to show your program using both 
getMidpoint and getRandomMidpoint showing different behaviors.