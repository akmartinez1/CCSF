#ifndef STOCK
#define STOCK
#include <cstring>

// Constant for symbol array.
const int SYMBOL_SIZE = 6;

class Stock
{
private:
   char symbol[SYMBOL_SIZE]; // Trading symbol of the stock
   double sharePrice;        // Current price per share
public:
   // Default Constructor
   Stock()
      { set("", 0.0); }

   // Constructor
   Stock(const char *sym, double price)
      { set(sym, price); }

   // Copy constructor
   Stock(const Stock &obj)
      { set(obj.symbol, obj.sharePrice); }

   // Mutator function
   void set(const char *sym, double price)
      { strncpy(symbol, sym, SYMBOL_SIZE);
        symbol[SYMBOL_SIZE - 1] = '\0';
        sharePrice = price; }

   // Accessor functions
   const char *getSymbol() const
      { return symbol; }

   double getSharePrice() const
      { return sharePrice; }
};
#endif
