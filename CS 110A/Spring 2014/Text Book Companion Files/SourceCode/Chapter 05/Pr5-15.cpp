// This program displays all of the numbers in a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream inputFile;  // File stream object
   int number;          // To hold a value from the file
   
   inputFile.open("numbers.txt");     // Open the file.
   if (!inputFile)                    // Test for errors.
      cout << "Error opening file.\n";
   else
   {
      while (inputFile >> number)     // Read a number
      {
         cout << number << endl;      // Display the number.
      }
      inputFile.close();              // Close the file.
   }
   return 0;
}
