// This program calculates a consultant's charges at $50
// per hour, for a minimum of 5 hours. The ?: operator
// adjusts hours to 5 if less than 5 hours were worked.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   const double PAY_RATE = 50.0;
   double hours, charges;

   cout << "How many hours were worked? ";
   cin >> hours;
   hours = hours < 5 ? 5 : hours; //conditional operator
   charges = PAY_RATE * hours;
   cout << fixed << showpoint << setprecision(2);
   cout << "The charges are $" << charges << endl;
   return 0;
}
