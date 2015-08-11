#ifndef INSTRUCTOR
#define INSTRUCTOR
#include <iostream>
#include <cstring>
using namespace std;

// Constants for array sizes
const int NAME_SIZE = 51;
const int OFFICE_NUM_SIZE = 21;

// Instructor class
class Instructor
{
private:
   char lastName[NAME_SIZE];           // Last name
   char firstName[NAME_SIZE];          // First name
   char officeNumber[OFFICE_NUM_SIZE]; // Office number
public:
   // The default constructor stores empty strings
   // in the char arrays.
   Instructor()
      { set("", "", ""); }

   // Constructor
   Instructor(char *lname, char *fname, char *office)
      { set(lname, fname, office); }
        
   // set function
   void set(const char *lname, const char *fname,
            const char *office)
      { strncpy(lastName, lname, NAME_SIZE);
        lastName[NAME_SIZE - 1] = '\0';
        
        strncpy(firstName, fname, NAME_SIZE);
        firstName[NAME_SIZE - 1] = '\0';
        
        strncpy(officeNumber, office, OFFICE_NUM_SIZE);
        officeNumber[OFFICE_NUM_SIZE - 1] = '\0'; }

   // print function
   void print() const
      {  cout << "Last name: " << lastName << endl;
         cout << "First name: " << firstName << endl;
         cout << "Office number: " << officeNumber << endl; }
};
#endif