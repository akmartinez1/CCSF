// This program uses a structure to hold someone's first,
// middle, and last name.
#include <iostream>
#include <cstring>
using namespace std;

// Constants for array lengths
const int LENGTH = 15;
const int FULL_LENGTH = 45;

struct Name
{
   char first[LENGTH];      // To hold the first name
   char middle[LENGTH];     // To hold the middle name
   char last[LENGTH];       // To hold the last name
   char full[FULL_LENGTH];  // To hold the full name
};

int main()
{
   // personName is a Name structure variable
   Name personName;

   // Get the first name.
   cout << "Enter your first name: ";
   cin >> personName.first;
   
   // Get the middle name.
   cout << "Enter your middle name: ";
   cin >> personName.middle;
   
   // Get the last name.
   cout << "Enter your last name: ";
   cin >> personName.last;
   
   // Assemble the full name.
   strcpy(personName.full, personName.first);
   strcat(personName.full, " ");
   strcat(personName.full, personName.middle);
   strcat(personName.full, " ");
   strcat(personName.full, personName.last);
   
   // Display the full name.
   cout << "\nYour full name is " << personName.full << endl;
   return 0;
}
