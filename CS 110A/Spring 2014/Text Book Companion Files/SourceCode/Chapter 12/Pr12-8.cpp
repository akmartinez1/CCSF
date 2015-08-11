// This program uses the file stream object's getline member
// function to read a line of data  from the file.
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
   nameFile.getline(input, SIZE);  // Use \n as a delimiter.
   while (!nameFile.eof())
   {
      cout << input << endl;
      nameFile.getline(input, SIZE);  // Use \n as a delimiter.
   }
   
   // Close the file.
   nameFile.close();
   return 0;
}
