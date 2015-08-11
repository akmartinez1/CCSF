// This program demonstrates a constructor.
#include <iostream>
using namespace std;

// Demo class declaration.

class Demo
{
public:
	Demo();		// Constructor
};

Demo::Demo()
{
	cout << "Welcome to the constructor!\n";
}

//*****************************************
// Function main.                         *
//*****************************************

int main()
{
	cout << "This is displayed before the object is created\n\n";
	Demo demoObject;		// Define a Demo object.
	cout << "\nThis is displayed after the object is created.\n";
	return 0;
}
