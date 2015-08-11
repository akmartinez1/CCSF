// This program asks the user for their annual income and
// the number years they have been employed at their current
// job. The ! operator reverses the logic of the expression
// in the if/else statement.
#include <iostream>
using namespace std;

int main()
{
   double income;  // Annual income
   int years;      // Years at the current job

   // Get the annual income
   cout << "What is your annual income? ";
   cin >> income;
   
   // Get the number of years at the current job.
   cout << "How many years have you worked at "
        << "your current job? ";
   cin >> years;
   
   // Determine the user's loan qualifications.
   if (!(income >= 35000 || years > 5))
   {
      cout << "You must earn at least $35,000 or have\n";
      cout << "been employed for more than 5 years.\n";
   }
   else
      cout << "You qualify.\n";
   return 0;
}
