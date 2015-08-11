// This program demonstrates the overloaded = operator.
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

   // Display the conents of the jim object.
   cout << "The jim Object contains: " << jim.getName();
   cout << ", " << jim.getAge() << endl;

   // Display the contents of the bob object.
   cout << "The bob Object contains: " << bob.getName();
   cout << ", " << bob.getAge() << endl;

   // Display the contents of the clone object.
   cout << "The clone Object contains: " << clone.getName();
   cout << ", " << clone.getAge() << endl << endl;

   // Assign bob to clone.
   cout << "Now the clone will change to bob and ";
   cout << "bob will change to jim.\n\n";
   clone = bob;   // Call overloaded = operator
   bob = jim;     // Call overloaded = operator

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
