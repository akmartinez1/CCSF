// This program asks the user for annual income and
// the number of years of employment at the current
// job. The || operator is used in a if statement that
// determines if the income is at least $35,000 or the time
// on the job is more than 5 years.
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
   if (income >= 35000 || years > 5)
      cout << "You qualify.\n";
   else
   {
      cout << "You must earn at least $35,000 or have\n";
      cout << "been employed for more than 5 years.\n";
   }
   return 0;
}