// This program asks the user for a file name. The file is
// opened and its contents are displayed on the screen.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   const int SIZE = 51;  // Array size for file name
   char fileName[SIZE];  // To hold the file name
   char ch;              // To hold a character
   fstream file;         // File stream object

   // Get the file name
   cout << "Enter a file name: ";
   cin >> fileName;
   
   // Open the file.
   file.open(fileName, ios::in);
   if (!file)
   {
      cout << fileName << " could not be opened.\n";
      return 0;
   }
   
   // Get each character from the file and display them.
   file.get(ch);
   while (!file.eof())
   {
      cout << ch;
      file.get(ch);
   }
   
   // Close the file.
   file.close();
   return 0;
}
