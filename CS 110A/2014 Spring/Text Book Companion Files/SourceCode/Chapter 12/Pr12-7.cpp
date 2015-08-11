// This program demonstrates how the >> operator should not
// be used to read data that contains whitespace characters
// from a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   const int SIZE = 81;  // Size of input array
   char input[SIZE];     // To hold file input
   fstream nameFile;     // File stream object

   // Open the file in input mode.
   nameFile.open("murphy.txt", ios::in);
   if (!nameFile)
   {
      cout << "ERROR: Cannot open file.\n";
      return 0;
   }

   // Read the file contents.
   while (nameFile >> input)
   {
      cout << input;
   }
   
   // Close the file.
   nameFile.close();
   return 0;
}
