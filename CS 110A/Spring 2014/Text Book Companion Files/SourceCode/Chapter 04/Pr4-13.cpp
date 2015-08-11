// This program uses an if/else if statement to assign a
// letter grade (A, B, C, D, or F) to a numeric test score.
#include <iostream>
using namespace std;

int main()
{
   int testScore;  // To hold a numeric test score
   char grade;     // To hold a letter grade

   // Get the numeric test score.
   cout << "Enter your numeric test score and I will\n";
   cout << "tell you the letter grade you earned: ";
   cin >> testScore;
   
   // Determine the letter grade.
   if (testScore < 60)
      cout << "Your grade is F.\n";
   else if (testScore < 70)
      cout << "Your grade is D.\n";
   else if (testScore < 80)
      cout << "Your grade is C.\n";
   else if (testScore < 90)
      cout << "Your grade is B.\n";
   else
      cout << "Your grade is A.\n";
   
   return 0;
}
