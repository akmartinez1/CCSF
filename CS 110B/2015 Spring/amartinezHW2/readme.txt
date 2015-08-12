CS110B Assignment 2: Blackjack

City College of San Francisco
Instructor: Max Luttrell
Fall 2014

In the card game named 'blackjack' players get two cards to start with, and 
then they are asked whether or not they want more cards.  Players can continue 
to take as many cards as they like. Their goal is to get as close as possible 
to a total of 21 without going over.  Face cards have a value of 10.  Aces have
a value of 1 or 11.

Write a command line game that plays a simplified version of blackjack where we
don’t worry about aces and face cards.  The program should generate a random 
number between 1 and 10 each time the player gets a card.  It should keep a 
running total of the players cards, and ask the player whether or not it should
deal another card.  If the player goes over 21, your program should tell the 
player he is bust.  At the end of the hand, your program should ask the player 
if he would like to play again.

Sample output for the game is written below. Your program should produce the 
same output.

> First cards: 3, 2
> Total: 5
> Do you want another card? (y/n): y
> Card: 6
> Total: 11
> Do you want another card? (y/n): y
> Card: 7
> Total: 19
> Do you want another card? (y/n): n
> Would you like to play again? (y/n): y
>
> First cards: 10, 2
> Total: 12
> Do you want another card? (y/n): y
> Card: 6
> Total: 18
> Do you want another card? (y/n): y
> Card: 7
> Total: 25
> Bust.
> Would you like to play again? (y/n): n

Note: You can generate random numbers with the C function rand().  There is 
more info and an example of its usage in your textbook in Chapter 3 (pg. 128 in
the 8th edition).  Note the additional #include requirements - ctime and 
cstdlib.

Submission

To submit your program, you must use the assignment uploader.
Update: we now have Insight up and running for our class, and will use it to 
submit assignments and check your grades.  For this assignment and future 
assignments, you will need to submit via Insight.  The Insight team has put 
together a handout how to connect to Insight.  Remember to submit sample output
demonstrating program behavior with varied input types, along with your 
program, in one big txt file (not rtf file).

Suggestion

Address the problem using an iterative approach. Start with a small amount of 
functionality, and then grow it gradually. This way you can compile and run 
your program after each statement that you write.  If you try to write it all 
at once you may have problems finding any bugs.

You might start by just generating a single card. The program execution might 
look like this:

> First card: 3

Then generate two cards
> First cards: 3, 2

Next add a variable to store the total, and a statement to show its value:
> First cards: 3, 2
> Total: 5

Next read in a user response and print out the value that was entered
> First cards: 3, 2
> Total: 5
> Do you want another card? (y/n): y
> You entered: y

Next you might add a loop, without yet adding the blackjack logic
> First cards: 3, 2
> Total: 5
> Do you want another card? (y/n): y
> Do you want another card? (y/n): y
> Do you want another card? (y/n): n

Now move the display of the total to the loop
> First cards: 3, 2
> Total: 5
> Do you want another card? (y/n): y
> Total: 5
> Do you want another card? (y/n): y
> Total: 5
> Do you want another card? (y/n): n

Your next steps might be something like this:
Generate a new card in each loop and display the value
Update the total in each loop.
Check to see if the user busts in each loop
Wrap the game in loop that handles the Play-Again functionality

Optional Extra Challenge (up to 10% extra credit given)

For extra practice, add a dealer to the game. There are two important blackjack
rules to include:

Dealers must take more cards as long as their total is less than 17

If the player and dealer tie it is called a push. The player does not win or 
lose money.

Here is sample output below. Notice that I have the user input a 'c' to 
continue between dealer cards. That keeps some of the suspense of the game.

> The dealer starts with a 10
> Your first cards: 10, 10
> Total: 20
> hit? (y/n): n
> Dealers has a 10...
> (c to continue) c
> Dealer gets a 10
> Total: 20
> Push!
> play again? (y/n): y
>
> The dealer starts with a 10
> Your first cards: 5, 10
> Total: 15
> hit? (y/n): y
> Card: 5
> Total: 20
> hit? (y/n): n
> Dealers has a 10...
> (c to continue) c
> Dealer gets a 6
> Total: 16
> (c to continue) c
> Dealer gets a 5
> Total: 21
> Dealer Wins!
> play again? (y/n): n