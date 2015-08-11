// This program demonstrates a user controlled for loop.
#include <iostream>
using namespace std;

int main()
{
   int num;       // Loop counter variable
   int maxValue;  // Maximum value to display
   
   // Get the maximum value to display.
   cout << "I will display a table of numbers and\n";
   cout << "their squares. How high should I go? ";
   cin >> maxValue;

   cout << "\nNumber    Number Squared\n";
   cout << "-------------------------\n";

   for (num = 1; num <= maxValue; num++)
      cout << num << "\t\t" << (num * num) << endl;
   return 0;
}
