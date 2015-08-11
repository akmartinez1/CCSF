// Demetris Leadership Center (DLC) product lookup program
// This program allows the user to enter a product number
// and then displays the title, description, and price of
// that product.
#include <iostream>
using namespace std;

const int NUM_PRODS = 9;      // The number of products produced
const int TITLE_SIZE = 26;    // The max size of a title string
const int DESC_SIZE = 12;     // The max size of a desc. string
const int MIN_PRODNUM = 914;  // The lowest product number
const int MAX_PRODNUM = 922;  // The highest product number

// Function prototypes
int getProdNum();
int binarySearch(int [], int, int);
void displayProd(char [][TITLE_SIZE], char [][DESC_SIZE], double [], int);

int main()
{
   // Array of product IDs
   int id[NUM_PRODS] = {914, 915, 916, 917, 918, 919, 920,
                        921, 922};

   // Array of product titles
   char title[NUM_PRODS][TITLE_SIZE] =
            {  "Six Steps to Leadership",
               "Six Steps to Leadership",
               "The Road to Excellence",
               "Seven Lessons of Quality",
               "Seven Lessons of Quality",
               "Seven Lessons of Quality",
               "Teams Are Made, Not Born",
               "Leadership for the Future",
               "Leadership for the Future"
            };

   // Array of product descriptions
   char description[NUM_PRODS][DESC_SIZE] =
            {  "Book", "Audio CD", "DVD",
               "Book", "Audio CD", "DVD",
               "Book", "Book", "Audio CD"
            };

   // Array of product prices
   double prices[NUM_PRODS] = {12.95, 14.95, 18.95, 16.95, 21.95,
                               31.95, 14.95, 14.95, 16.95};

   int prodNum;  // To hold a product number
   int index;    // To hold search results
   char again;   // To hold a Y or N answer

   do
   {
      // Get the desired product number.
      prodNum = getProdNum();

      // Search for the product number.
      index = binarySearch(id, NUM_PRODS, prodNum);

      // Display the results of the search.
      if (index == -1)
         cout << "That product number was not found.\n";
      else
         displayProd(title, description, prices, index);

      // Does the user want to do this again?
      cout << "Would you like to look up another product? (y/n) ";
      cin >> again;
   } while (again == 'y' || again == 'Y');
   return 0;
}

//***************************************************
// Definition of getProdNum function                *
// The getProdNum function asks the user to enter a *
// product number. The input is validated, and when *
// a valid number is entered, it is returned.       *
//***************************************************

int getProdNum()
{
   int prodNum;  // Product number

   cout << "Enter the item's product number: ";
   cin >> prodNum;
   // Validate input
   while (prodNum < MIN_PRODNUM || prodNum > MAX_PRODNUM)
   {
      cout << "Enter a number in the range of " << MIN_PRODNUM;
      cout <<" through " << MAX_PRODNUM << ".\n";
      cin >> prodNum;
   }
   return prodNum;
}

//***************************************************************
// Definition of binarySearch function                          *
// The binarySearch function performs a binary search on an     *
// integer array. array, which has a maximum of numElems        *
// elements, is searched for the number stored in value. If the *
// number is found, its array subscript is returned. Otherwise, *
// -1 is returned indicating the value was not in the array.    *
//***************************************************************

int binarySearch(int array[], int numElems, int value)
{
   int first = 0,           // First array element
       last = numElems - 1, // Last array element
       middle,              // Mid point of search
       position = -1;       // Position of search value
   bool found = false;      // Flag

   while (!found && first <= last)
   {
      middle = (first + last) / 2;  // Calculate mid point
      if (array[middle] == value)   // If value is found at mid
      {
         found = true;
         position = middle;
      }
      else if (array[middle] > value) // If value is in lower half
         last = middle - 1;
      else
         first = middle + 1;          // If value is in upper half
   }
   return position;
}

//************************************************************
// The displayProd function accepts three arrays and an int. *
// The arrays parameters are expected to hold the title,     *
// description, and prices arrays defined in main. The       *
// ndx parameter holds a subscript. This function displays   *
// the information in each array contained at the subscript. *
//************************************************************

void displayProd(char title[][TITLE_SIZE], char desc[][DESC_SIZE],
                 double price[], int index)
{
   cout << "Title: " << title[index] << endl;
   cout << "Description: " << desc[index] << endl;
   cout << "Price: $" << price[index] << endl;
}


