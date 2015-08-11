// Demonstrates the PersonInfo class.
#include <iostream>
#include "PersonInfo.h"
using namespace std;

int main()
{
	PersonInfo person1("Molly McBride", 27);
	PersonInfo person2 = person1;

	cout << person1.getName() << endl;
	cout << person2.getName() << endl;
	return 0;
}