#include <cstring>

class PersonInfo
{
private:
   char *name;
   int age;

public:
   PersonInfo(char *n, int a)
      { name = new char[strlen(n) + 1];
        strcpy(name, n);
        age = a; }

   ~PersonInfo()
      { delete [] name; }
	
   const char *getName()
      { return name; }

   int getAge()
      { return age; }
};
