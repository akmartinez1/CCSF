// This program displays a menu and asks the user to make a
// selection. An if/else if statement determines which item
// the user has chosen.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int choice;       // Menu choice
   int months;       // Number of months
   double charges;   // Monthly charges

   // Constants for membership rates
   const double ADULT = 40.0;
   const double SENIOR = 30.0;
   const double CHILD = 20.0;

   // Display the menu and get a choice.
   cout << "\t\tHealth Club Membership Menu\n\n";
   cout << "1. Standard Adult Membership\n";
   cout << "2. Child Membership\n";
   cout << "3. Senior Citizen Membership\n";
   cout << "4. Quit the Program\n\n";
   cout << "Enter your choice: ";
   cin >> choice;
   
   // Set the numeric ouput formatting.
   cout << fixed << showpoint << setprecision(2);
   
   // Respond to the user's menu selection.
   if (choice == 1)
   {
      cout << "For how many months? ";
      cin >> months;
      charges = months * ADULT;
      cout << "The total charges are $" << charges << endl;
   }
   else if (choice == 2)
   {
      cout << "For how many months? ";
      cin >> months;
      charges = months * CHILD;
      cout << "The total charges are $" << charges << endl;
   }
   else if (choice == 3)
   {
      cout << "For how many months? ";
      cin >> months;
      charges = months * SENIOR;
      cout << "The total charges are $" << charges << endl;
   }
   else if (choice == 4)
   {
       cout << "Program ending.\n";
   }
   else
   {
      cout << "The valid choices are 1 through 4. Run the\n";
      cout << "program again and select one of those.\n";
   }
   return 0;
}
