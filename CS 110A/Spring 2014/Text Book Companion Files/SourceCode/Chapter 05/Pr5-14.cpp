// This program displays five numbers in a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream inputFile;  // File stream object
   int number;          // To hold a value from the file
   int count = 1;       // Loop counter, initialized with 1

   inputFile.open("numbers.txt");   // Open the file.
   if (!inputFile)                  // Test for errors.
      cout << "Error opening file.\n";
   else
   {
      while (count <= 5)
      {
         inputFile >> number;       // Read a number.
         cout << number << endl;    // Display the number.
         count++;                   // Increment the counter.
      }
      inputFile.close();            // Close the file.
   }
   return 0;
}
