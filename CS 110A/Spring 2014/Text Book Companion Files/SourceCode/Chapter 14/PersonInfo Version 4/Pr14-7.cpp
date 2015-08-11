// This program demonstrates the overloaded = operator
// with a return value.
#include <iostream>
#include <cstring>
#include "PersonInfo.h"
using namespace std;

int main()
{
   // Create and initialize the jim object.
   PersonInfo jim("Jim Young", 27);
   
   // Create and initialize the bob object.
   PersonInfo bob("Bob Faraday", 32);
   
   // Create the clone object and initialize with jim.
   PersonInfo clone = jim;

   // Assign jim to bob and clone.
   clone = bob = jim;   // Call overloaded = operator

   // Display the contents of the jim object.
   cout << "The jim Object contains: " << jim.getName();
   cout << ", " << jim.getAge() << endl;

   // Display the contents of the bob object.
   cout << "The bob Object contains: " << bob.getName();
   cout << ", " << bob.getAge() << endl;

   // Display the contents of the clone object.
   cout << "The clone Object contains: " << clone.getName();
   cout << ", " << clone.getAge() << endl;

   return 0;
}
