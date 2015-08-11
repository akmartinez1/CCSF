// This program converts the speeds 60 kph through
// 130 kph (in 10 kph increments) to mph.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int kph;       // To hold speeds in kph
   double mph;    // To hold speeds in mph

   // Set the numeric output formatting.
   cout << fixed << showpoint << setprecision(1);

   // Display the table headings.
   cout << "KPH\tMPH\n";
   cout << "---------------\n";

   // Display the speeds.
   for (kph = 60; kph <= 130; kph += 10)
   {
      // Calculate mph
      mph = kph * 0.6214;

      // Display the speeds in kph and mph.
      cout << kph << "\t" << mph << endl;

   }
   return 0;
}
