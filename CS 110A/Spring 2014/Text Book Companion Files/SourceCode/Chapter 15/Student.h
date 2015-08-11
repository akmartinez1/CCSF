// Specification file for the Student class
#ifndef STUDENT_H
#define STUDENT_H
#include <cstring>   // For strcpy

// Constants for array sizes
const int NAME_SIZE = 51;
const int ID_SIZE = 21;

class Student
{
protected:
   char name[NAME_SIZE];   // Student name
   char idNumber[ID_SIZE]; // Student ID
   int yearAdmitted;       // Year student was admitted
public:
   // Default constructor
   Student()
      { name[0] = '\0';
        idNumber[0] = '\0';
        yearAdmitted = 0; }
   
   // Constructor
   Student(const char *n, const char *id, int year)
   { set(n, id, year); }

   // The set function sets the attribute data.
   void set(const char *n, const char *id, int year)
      { strncpy(name, n, NAME_SIZE);   // Copy the name
        name[NAME_SIZE - 1] = '\0';    // Place a null character
        strncpy(idNumber, n, ID_SIZE); // Copy the ID number
        idNumber[ID_SIZE - 1] = '\0';  // Place a null character
        yearAdmitted = year; }         // Assign year admitted

   // Accessor functions
   const char *getName() const
      { return name; }
   
   const char *getIdNum() const
      { return idNumber; }
      
   int getYearAdmitted() const
      { return yearAdmitted; }
      
   // Pure virtual function
   virtual int getRemainingHours() const = 0; 
};
#endif