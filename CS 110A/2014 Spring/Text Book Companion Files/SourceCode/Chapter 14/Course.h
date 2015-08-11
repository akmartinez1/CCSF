#ifndef COURSE
#define COURSE
#include <iostream>
#include <cstring>
#include "Instructor.h"
#include "TextBook.h"
using namespace std;

// Constant for course name
const int COURSE_SIZE = 51;

class Course
{
private:
   char courseName[COURSE_SIZE];  // Course name
   Instructor instructor;         // Instructor
   TextBook textbook;             // Textbook
public:
   // Constructor
   Course(const char *course, const char *instrLastName,
          const char *instrFirstName, const char *instrOffice,
          const char *textTitle, const char *author,
          const char *publisher)
      { // Assign the course name.
        strncpy(courseName, course, COURSE_SIZE);
        courseName[COURSE_SIZE - 1] = '\0';

        // Assign the instructor.
        instructor.set(instrLastName, instrFirstName, instrOffice);

        // Assign the textbook.
        textbook.set(textTitle, author, publisher); }
        
   // print function
   void print() const
   {  cout << "Course name: " << courseName << endl << endl;
      cout << "Instructor Information:\n";
      instructor.print();
      cout << "\nTextbook Information:\n";
      textbook.print();
      cout << endl; }
};
#endif