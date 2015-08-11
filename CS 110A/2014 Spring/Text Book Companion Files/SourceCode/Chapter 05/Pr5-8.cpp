// This program displays a menu and asks the user to make a
// selection. A do-while loop repeats the program until the
// user selects item 4 from the menu.
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

   // Set up numeric output formatting.
   cout << fixed << showpoint << setprecision(2);
   
   do
   {
      // Display the menu.
      cout << "\n\t\tHealth Club Membership Menu\n\n";
      cout << "1. Standard Adult Membership\n";
      cout << "2. Child Membership\n";
      cout << "3. Senior Citizen Membership\n";
      cout << "4. Quit the Program\n\n";
      cout << "Enter your choice: ";
      cin >> choice;
      
      // Validate the menu selection.
      while (choice < 1 || choice > 4)
      {
         cout << "Please enter 1, 2, 3, or 4: ";
         cin >> choice;
      }

      // Validate and process the user's choice.
      if (choice != 4)
      {
         // Get the number of months.
         cout << "For how many months? ";
         cin >> months;
         
         // Respond to the user's menu selection.
         switch (choice)
         {
            case 1:  charges = months * ADULT;
                     break;
            case 2:  charges = months * CHILD;
                     break;
            case 3:  charges = months * SENIOR;
         }
         
         // Display the monthly charges.
         cout << "The total charges are $";
         cout << charges << endl;
      }
   } while (choice != 4);
   return 0;
}