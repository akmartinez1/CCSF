// This program reads data from a file into an array.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const int ARRAY_SIZE = 10;  // Array size
	int numbers[ARRAY_SIZE];	 // Array with 10 elements
	int count;						 // Loop counter variable
	ifstream inputFile;			 // Input file stream object
	
	inputFile.open("TenNumbers.txt"); // Open the file.
	
	// Read the 10 numbers from the file into the array.
	for (count = 0; count < ARRAY_SIZE; count++)
		inputFile >> numbers[count];
	
	// Close the file.
	inputFile.close();
	
	// Display the numbers read:
	cout << "The numbers are: ";
	for (count = 0; count < ARRAY_SIZE; count++)
		cout << numbers[count] << " ";
	cout << endl;
	return 0;
}
