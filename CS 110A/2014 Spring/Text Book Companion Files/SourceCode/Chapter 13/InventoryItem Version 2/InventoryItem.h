// This class has overloaded constructors.
#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include <cstring>   // Needed for strlen and strcpy

// Constant for the description's default size
const int DEFAULT_SIZE = 51;

class InventoryItem
{
private:
   char *description;  // The item description
   double cost;        // The item cost
   int units;          // Number of units on hand
public:
   // Constructor #1
   InventoryItem()
      { // Allocate the default amount of memory for description.
        description = new char [DEFAULT_SIZE];
        
        // Store a null terminator in the first character.
        *description = '\0';
        
        // Initialize cost and units.
        cost = 0.0;
        units = 0; }

   // Constructor #2
   InventoryItem(char *desc)
      { // Allocate just enough memory for the description. 
        description = new char [strlen(desc) + 1];
        
        // Copy the description to the allocated memory.
        strcpy(description, desc);
        
        // Initialize cost and units.
        cost = 0.0;
        units = 0; }
        
   // Constructor #3
   InventoryItem(char *desc, double c, int u)
      { // Allocate just enough memory for the description. 
        description = new char [strlen(desc) + 1];
        
        // Copy the description to the allocated memory.
        strcpy(description, desc);
        
        // Assign values to cost and units.
        cost = c;
        units = u; }
        
   // Destructor
   ~InventoryItem()
      { delete [] description; }

   // Mutator functions
   void setDescription(char *d) 
      { strcpy(description, d); }

   void setCost(double c)
      { cost = c; }
      
   void setUnits(int u)
      { units = u; }

   // Accessor functions
   const char *getDescription() const
      { return description; }
         
   double getCost() const
      { return cost; }

   int getUnits() const
      { return units; }
};
#endif
