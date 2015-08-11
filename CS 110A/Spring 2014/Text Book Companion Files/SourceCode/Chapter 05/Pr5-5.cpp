// This program calculates the number of soccer teams
// that a youth league may create from the number of
// available players. Input validation is demonstrated
// with while loops.
#include <iostream>
using namespace std;

int main()
{
   int players,      // Number of available players
       teamPlayers,  // Number of desired players per team
       numTeams,     // Number of teams
       leftOver;     // Number of players left over

   // Get the number of players per team.
   cout << "How many players do you wish per team?\n";
   cout << "(Enter a value in the range 9 - 15): ";
   cin >> teamPlayers;
   
   // Validate the input.
   while (teamPlayers < 9 || teamPlayers > 15)
   {
      cout << "You should have at least 9 but no\n";
      cout << "more than 15 per team.\n";
      cout << "How many players do you wish per team? ";
      cin >> teamPlayers;
   }
   
   // Get the number of players available.
   cout << "How many players are available? ";
   cin >> players;
   
   // Validate the input.
   while (players <= 0)
   {
      cout << "Please enter a positive number: ";
      cin >> players;
   }

   // Calculate the number of teams.
   numTeams = players / teamPlayers;
   
   // Calculate the number of leftover players.
   leftOver = players % teamPlayers;
   
   // Display the results.
   cout << "There will be " << numTeams << " teams with ";
   cout << leftOver << " players left over.\n";
   return 0;
}