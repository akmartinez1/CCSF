// This program reads information from a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream inFile;
   const int SIZE = 81;
   char name[SIZE];

   inFile.open("demofile.txt");
   cout << "Reading information from the file.\n\n";
   
   inFile >> name;         // Read name 1 from the file
   cout << name << endl;   // Display name 1
   
   inFile >> name;         // Read name 2 from the file
   cout << name << endl;   // Display name 2
   
   inFile >> name;         // Read name 3 from the file
   cout << name << endl;   // Display name 3
   
   inFile >> name;         // Read name 4 from the file
   cout << name << endl;   // Display name 4

   inFile.close();         // Close the file
   cout << "\nDone.\n";
   return 0;
}
