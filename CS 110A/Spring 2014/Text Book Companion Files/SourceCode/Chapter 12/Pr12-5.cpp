// This program demonstrates how file stream objects may
// be passed by reference to functions.
#include <iostream>
#include <fstream>
using namespace std;

// Maximum amount to read from a line in the file
const int MAX_LINE_SIZE = 81;

// Function prototypes
bool openFileIn(fstream &, char *);
void showContents(fstream &);

int main()
{
   fstream dataFile;

   if (!openFileIn(dataFile,"demofile.txt"))
   {
      cout << "File open error!" << endl;
      return 0;   // Exit the program on error.
   }
   cout << "File opened successfully.\n";
   cout << "Now reading data from the file.\n\n";
   showContents(dataFile);
   dataFile.close();
   cout << "\nDone.\n";
   return 0;
}

//***********************************************************
// Definition of function openFileIn. Accepts a reference   *
// to an fstream object as its argument. The file is opened *
// for input. The function returns true upon success, false *
// upon failure.                                            *
//***********************************************************

bool openFileIn(fstream &file, char *name)
{
   file.open(name, ios::in);
   if (file.fail())
      return false;
   else
      return true;
}

//***********************************************************
// Definition of function showContents. Accepts an fstream  *
// reference as its argument. Uses a loop to read each name *
// from the file and displays it on the screen.             *
//***********************************************************

void showContents(fstream &file)
{
   char line[MAX_LINE_SIZE];

   while (file >> line)
   {
      cout << line << endl;
   }
}
