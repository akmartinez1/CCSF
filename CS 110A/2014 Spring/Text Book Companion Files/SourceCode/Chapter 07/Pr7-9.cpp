// This program displays the contents of two char arrays.
#include <iostream>
using namespace std;

int main()
{
   char name1[] = "Holly";
   char name2[] = {'W', 'a', 'r', 'r', 'e', 'n', '\0'};

   cout << name1 << endl;
   cout << name2 << endl;
   return 0;
}
