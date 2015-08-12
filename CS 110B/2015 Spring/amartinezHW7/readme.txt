CS110B Assignment 7: C-Strings

City College of San Francisco
Instructor: Max Luttrell
Fall 2014

Implement the following functions. Each function deals with null terminated 
C-Style strings. You can assume that any char array passed into the functions 
will contain null terminated data.  

Your functions must have the signatures listed below and as usual you must 
demonstrate their usage with a main function and provide sample output.  You 
should consider writing helper functions to do tasks that many functions 
require, e.g. finding the last character of the string.

1.  This function returns the last index where the target char can be found in 
the string. it returns -1 if the target char does not appear in the string.  
For example, if s is “Giants” and target is ‘a’ the function returns 2.

int lastIndexOf(char *s, char target)

2.  This function alters any string that is passed in. It should reverse the 
string. If “flower” gets passed in it should be reversed in place to “rewolf”

void reverse(char *s)

3.  This function finds all instances of the char ‘target’ in the string and 
replaces them with ‘replacementChar’.  It returns the number of replacements 
that it makes. If the target char does not appear in the string it returns 0.

int replace(char *s, char target, char replacementChar)

4.  This function returns the index in string s where the substring can first 
be found. For example if s is “Skyscraper” and substring is “ysc” the function 
would return 2.  It should return -1 if the substring does not appear in the 
string.

int findSubstring(char *s, char substring[])

5. This function returns true if the argument string is a palindrome. It 
returns false if it is not.  A palindrome is a string that is spelled the same 
was as its reverse.  For example “abba” is a palindrome. So is “hannah”, “abc 
cba”, and “radar”.

bool isPalindrome(char *s)

Note: do not get confused by white space characters. They should not get any 
special treatment.  “abc ba” is not a palindrome. It is not identical to its 
reverse.

6. Extra Credit, up to 10 extra points.  This function should reverse the words
in a string.  A word can be considered to be any characters, including 
punctuation, separated by spaces (only spaces, not tabs, \n etc.).  

So, for example, if s is “The Giants won the Pennant!” the function should 
change s to “Pennant! the won Giants The”

void reverseWords(char *s)

You can get up to 5 extra credit points if you implement this correctly.  
You can get up to another 5 extra credit points if you do it without using any 
extra memory, e.g. another array.  

Note: this is one of the classic coding questions given during programming 
interviews.
