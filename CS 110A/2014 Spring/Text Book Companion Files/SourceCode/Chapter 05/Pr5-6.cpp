// This program displays the numbers 1 through 10 and
// their squares.
#include <iostream>
using namespace std;

int main()
{
   int num = 1; //Initialize the counter.

   cout << "Number Number Squared\n";
   cout << "-------------------------\n";
   while (num <= 10)
   {
      cout << num << "\t\t" << (num * num) << endl;
      num++; //Increment the counter.
   }
   return 0;
}
