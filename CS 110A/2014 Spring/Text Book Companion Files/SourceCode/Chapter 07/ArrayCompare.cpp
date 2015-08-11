// This program compares the contents of two arrays.
#include <iostream>
using namespace std;

int main()
{
  const int SIZE = 5;
  int firstArray[SIZE] = { 5, 10, 15, 20, 25  };
  int secondArray[SIZE] = { 5, 10, 15, 20, 25  };
  bool arraysEqual = true;  // Flag variable
  int count = 0;            // Loop counter variable

  // Determine whether the elements contain the same data.
  while (arraysEqual && count < SIZE)
  {
     if (firstArray[count] != secondArray[count])
        arraysEqual = false;
     count++;
  }

  // Display a message indicating whether the arrays
  // are equal or not.
  if (arraysEqual)
     cout << "The arrays are equal.\n";
  else
     cout << "The arrays are not equal.\n";

   return 0;
}
