2014-09-16 CS110B Programming Exercise

You have been hired by the SFPD fraud unit to help detect credit card
fraud.  They have given you a list of 20 stolen credit card numbers, and
want you to write a rpogram that can detect if someone is attempting to
use one of these credit card numbers at the local Target store.

Your program should ask the user for a credit card number they would
like to use.  Then, search an array of credit card numbers to see if the
credit card number is in the list.

To simplify, we will use a 6 digit credit card number, e.g. 424238.  Your
list of stolen credit card numbers must be an array of 20 ints.  You can
get this file from my website and save it in your hills directory, it is
sorted from lowest to highest card number:

http://fog.ccsf.edu/~mluttrel/cs110b/cards.txt

Get this working with linear search and then do a binary search
functions.  Report the number of comparisons each one does.