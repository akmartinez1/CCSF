// This program displays the number of days in each month.
#include <iostream>
using namespace std;

int main()
{
   const int NUM_MONTHS = 12;  // The number of months
   const int STRING_SIZE = 10; // Maximum size of each string
   
   // Array with the names of the months
   char months[NUM_MONTHS][STRING_SIZE] = 
                 { "January", "February", "March",
                   "April", "May", "June",
                   "July", "August", "September",
                   "October", "November", "December" };
   
   // Array with the number of days in each month
   int days[NUM_MONTHS] = {31, 28, 31, 30,
                           31, 30, 31, 31,
                           30, 31, 30, 31};

   // Display the months and their numbers of days.
   for (int count = 0; count < NUM_MONTHS; count++)
   {
      cout << months[count] << " has ";
      cout << days[count] << " days.\n";
   }
   return 0;
}
