// This program demonstrates how cin can read a string into
// a character array.
#include <iostream>
using namespace std;

int main()
{
   char name[21];

   cout << "What is your name? ";
   cin >> name;
   cout << "Good morning " << name << endl;
   return 0;
}
