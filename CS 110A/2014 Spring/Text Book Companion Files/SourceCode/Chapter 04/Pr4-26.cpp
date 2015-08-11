// This program uses the return value of strcmp to alphabetically
// sort two strings entered by the user.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   const int SIZE = 30;
   char name1[SIZE], name2[SIZE];

   // Get the first name.
   cout << "Enter a name (last name first): ";
   cin.getline(name1, SIZE);
   
   // Get the second name.
   cout << "Enter another name: ";
   cin.getline(name2, SIZE);
   
   // Display them sorted in alphabetical order.
   cout << "Here are the names sorted alphabetically:\n";
   if (strcmp(name1, name2) < 0)
      cout << name1 << endl << name2 << endl;
   else if (strcmp(name1, name2) > 0)
      cout << name2 << endl << name1 << endl;
   else
      cout << "You entered the same name twice!\n";
   return 0;
}
