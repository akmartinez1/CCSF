// This program produces a sales report for DLC, Inc.
// This version of the program uses STL vectors instead of arrays.
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Function prototypes
void initVectors(vector<int> &, vector<int> &, vector<double> &);
void calcSales(vector<int>, vector<double>, vector<double> &);
void showOrder(vector<double>, vector<int>);
void dualSort(vector<int> &, vector<double> &);
void showTotals(vector<double>, vector<int>);

int main()
{
   vector<int> id;         // Product ID numbers
   vector<int> units;      // Units sold
   vector<double> prices;  // Product prices
   vector<double> sales;   // To hold product sales

   // Must provide an initialization routine.
   initVectors(id, units, prices);

   // Calculate each product's sales.
   calcSales(units, prices, sales);

   // Sort the elements in the sales array in descending
   // order and shuffle the ID numbers in the id array to
   // keep them in parallel.
   dualSort(id, sales);

   // Set the numeric output formatting.
   cout << fixed << showpoint << setprecision(2);

   // Display the products and sales amounts.
   showOrder(sales, id);

   // Display total units sold and total sales.
   showTotals(sales, units);
   return 0;
}

//******************************************************************
// Definition of initVectors. Accepts id, units, and prices        *
// vectors as reference arguments. This function initializes each  *
// vector to a set of starting values.                             *
//******************************************************************

void initVectors(vector<int> &id, vector<int> &units,
                 vector<double> &prices)
{
   const int NUM_PRODS = 9;
   int count;
   int unitsSold[NUM_PRODS] = {842, 416, 127, 514, 437, 269, 97,
                               492, 212};
   double productPrices[NUM_PRODS] = {12.95, 14.95, 18.95, 16.95, 21.95,
                                      31.95, 14.95, 14.95, 16.95};

   // Initialize the id vector
   for (int value = 914; value <= 922; value++)
      id.push_back(value);

   // Initialize the units vector
   for (count = 0; count < NUM_PRODS; count++)
      units.push_back(unitsSold[count]);

   // Initialize the prices vector
   for (count = 0; count < NUM_PRODS; count++)
      prices.push_back(productPrices[count]);
}


//****************************************************************
// Definition of calcSales. Accepts units, prices, and sales     *
// vectors as arguments. The sales vector is passed into a       *
// reference parameter. This function calculates each product's  *
// sales by multiplying its units sold by each unit's price. The *
// result is stored in the sales vector.                         *
//****************************************************************

void calcSales(vector<int> units, vector<double> prices, 
               vector<double> &sales)
{
   for (int index = 0; index < units.size(); index++)
      sales.push_back(units[index] * prices[index]);
}

//****************************************************************
// Definition of function dualSort. Accepts id and sales vectors *
// as reference arguments. This function performs a descending   *
// order selection sort on the sales vector. The elements of the *
// id vector are exchanged identically as those of the sales     *
// vector.                                                       *
//****************************************************************

void dualSort(vector<int> &id, vector<double> &sales)
{
   int startScan, maxIndex, tempid, elems;
   double maxValue;

   elems = id.size();
   for (startScan = 0; startScan < (elems - 1); startScan++)
   {
      maxIndex = startScan;
      maxValue = sales[startScan];
      tempid = id[startScan];
      for(int index = startScan + 1; index < elems; index++)
      {
         if (sales[index] > maxValue)
         {
            maxValue = sales[index];
            tempid = id[index];
            maxIndex = index;
         }
      }
      sales[maxIndex] = sales[startScan];
      id[maxIndex] = id[startScan];
      sales[startScan] = maxValue;
      id[startScan] = tempid;
   }
}

//*****************************************************************
// Definition of showOrder function. Accepts sales and id vectors *
// as arguments. The function first displays a heading, then the  *
// sorted list of product numbers and sales.                      *
//*****************************************************************

void showOrder(vector<double> sales, vector<int> id)
{
   cout << "Product Number\tSales\n";
   cout << "----------------------------------\n";
   for (int index = 0; index < id.size(); index++)
   {
      cout << id[index] << "\t\t$";
      cout << setw(8) << sales[index] << endl;
   }
   cout << endl;
}

//*******************************************************************
// Definition of showTotals function. Accepts sales and id vectors  *
// as arguments. The function first calculates the total units (of  *
// all products) sold and the total sales. It then displays these   *
// amounts.                                                         *
//*******************************************************************

void showTotals(vector<double> sales, vector<int> units)
{
   int totalUnits = 0;
   double totalSales = 0.0;

   for (int index = 0; index < units.size(); index++)
   {
      totalUnits += units[index];
      totalSales += sales[index];
   }
   cout << "Total Units Sold:  " << totalUnits << endl;
   cout << "Total Sales:      $" << totalSales << endl;
}

