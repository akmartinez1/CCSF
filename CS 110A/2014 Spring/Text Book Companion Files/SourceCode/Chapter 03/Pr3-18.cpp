// This program demonstrates the setw manipulator being
// used with values of various data types.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int intValue = 3928;
   double doubleValue = 91.5;
   const int ARRAY_SIZE = 14;
   char cStringValue[ARRAY_SIZE] = "John J. Smith";

   cout << "(" << setw(5) << intValue << ")" << endl;
   cout << "(" << setw(8) << doubleValue << ")" << endl;
   cout << "(" << setw(16) << cStringValue << ")" << endl;
   return 0;
}
