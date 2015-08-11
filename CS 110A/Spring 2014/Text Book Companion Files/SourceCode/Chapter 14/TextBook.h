#ifndef TEXTBOOK
#define TEXTBOOK
#include <iostream>
#include <cstring>
using namespace std;

// Constant for array sizes
const int PUB_SIZE = 51;

// TextBook class
class TextBook
{
private:
   char title[PUB_SIZE];     // Book title
   char author[PUB_SIZE];    // Author name
   char publisher[PUB_SIZE]; // Publisher name
public:
   // The default constructor stores empty strings
   // in the char arrays.
   TextBook()
      { set("", "", ""); }
      
   // Constructor
   TextBook(char *textTitle, char *auth, char *pub)
      { set(textTitle, auth, pub); }
        
   // set function
   void set(const char *textTitle, const char *auth, 
            const char *pub)
      { strncpy(title, textTitle, PUB_SIZE);
        title[NAME_SIZE - 1] = '\0';
        
        strncpy(author, auth, PUB_SIZE);
        author[NAME_SIZE - 1] = '\0';
        
        strncpy(publisher, pub, PUB_SIZE);
        publisher[OFFICE_NUM_SIZE - 1] = '\0'; }

   // print function
   void print() const
      {  cout << "Title: " << title << endl;
         cout << "Author: " << author << endl;
         cout << "Publisher: " << publisher << endl; }
};
#endif