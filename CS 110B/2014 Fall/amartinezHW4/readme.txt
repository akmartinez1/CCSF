CS110B Assignment 4: Poker Hands

City College of San Francisco
Instructor: Max Luttrell
Fall 2014

Write a program that reads five cards from the user, then analyzes the cards 
and prints out the category of hand that they represent.
  
Poker hands are categorized according to the following labels: Straight flush, 
four of a kind, full house, straight, flush, three of a kind, two pairs, pair, 
high card.

To simplify the program we will ignore card suits, aces, and face cards. The 
values that the user inputs will be integer values from 2 to 9.  When your 
program runs it should start by collecting five integer values from the user. 
It might look like this (user input is in orange for clarity):

Enter five numeric cards, no face cards. Use 2 - 9.
Card 1: 8 
Card 2: 7
Card 3: 8
Card 4: 2
Card 5: 3

(This is a pair, since there are two eights)
Since we are ignoring card suits there won’t be any flushes. Your program 
should be able to recognize the following hand categories, listed from least 
valuable to most valuable:

Hand Type		Description								Example

High Card		There are no matching cards, and the	2, 5, 3, 8, 7
				hand is not a straight

Pair			Two of the cards are identical			2, 5, 3, 5, 7

Two Pair		Two different pairs						2, 5, 3, 5, 3

Three of a kind	Three matching cards					5, 5, 3, 5, 7

Straight		Card values can be arranged in order	3, 4, 5, 6, 7

Full House		A pair, and a three of a kind			5, 7, 5, 7, 7

Four of a kind			Four matching cards				2, 5, 5, 5, 5

(A note on straights: a hand is a straight regardless of the order. So the 
values 3, 4, 5, 6, 7 represent a straight, but so do the values 7, 4, 5, 6, 3)

Your program should read in five values and then print out the appropriate hand 
type. If a hand matches more than one description, the program should print out 
the most valuable hand type only.

Here are three sample runs of the program:

Enter five numeric cards, no face cards. Use 2 - 9.
Card 1: 8
Card 2: 7
Card 3: 8
Card 4: 2
Card 5: 7
Two Pair!
Enter five numeric cards, no face cards. Use 2 - 9.
Card 1: 8
Card 2: 7
Card 3: 4
Card 4: 6
Card 5: 5
Straight!
Enter five numeric cards, no face cards. Use 2 - 9.
Card 1: 9
Card 2: 2
Card 3: 3
Card 4: 4
Card 5: 5
High Card!

Requirements

You must write a function for each hand type.  Each function should accept an 
int array as a parameter.  You can assume that the array will have five 
elements.  

The functions should have the following signatures:

bool  containsPair(int hand[])
bool  containsTwoPair(int hand[])
bool  containsThreeOfaKind(int hand[])
bool  containsStraight(int hand[])
bool  containsFullHouse(int hand[])
bool  containsFourOfaKind(int hand[])

You do not need to write a containsHighCard function. All hands contain a 
highest card. If you determine that a particular hand is not one of the better 
hand types, then you know that it is a High Card hand.

Suggestions

Test these functions independently. Once you are sure that they all work, the 
program logic for the complete program will be fairly straightforward.

Here is code that tests a containsPair function:

int main() {
        int hand[] = {2, 5, 3, 2, 9};
        if (containsPair(hand)) {
                cout << “Pair!” << endl;
        }
        return 0;
}

You can use a main function like this to test each function with different 
input arrays until you are confident that your logic is correct.
