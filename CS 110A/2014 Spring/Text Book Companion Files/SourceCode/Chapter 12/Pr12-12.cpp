// This program demonstrates reading from one file and writing
// to a second file.
#include <iostream>
#include <fstream>
#include <cctype> // Needed for the toupper function.
using namespace std;

int main()
{
   const int SIZE = 51;  // Array size for file name
   char fileName[SIZE];  // To hold the file name
   char ch;              // To hold a character
   ifstream inFile;      // Input file
   
   // Open a file for output.
   ofstream outFile("out.txt");

   // Get the input file name.
   cout << "Enter a file name: ";
   cin >> fileName;
   
   // Open the file for input.
   inFile.open(fileName);
   if (!inFile)
   {
      cout << "Cannot open " << fileName << endl;
      return 0;
   }
   
   // Process the files.
   inFile.get(ch);              // Get a char from file 1
   while (!inFile.eof())        // Test for end of file
   {
      outFile.put(toupper(ch)); // Write uppercase char to file 2
      inFile.get(ch);           // Get another char from file 1
   }
   
   // Close the files.
   inFile.close();
   outFile.close();
   cout << "File conversion done.\n";
   return 0;
}
