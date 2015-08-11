// This program uses nested structures.
#include <iostream>
using namespace std;

// Constants for char array sizes
const int ADDR_LENGTH = 50;   // Address length
const int CITY_LENGTH = 20;   // City length
const int STATE_LENGTH = 15;  // State length
const int ZIP_LENGTH = 11;    // ZIP code length
const int NAME_LENGTH = 50;   // Name length

// The Date structure holds data about a date.
struct Date
{
   int month;
   int day;
   int year;
};

// The Place structure holds a physical address.
struct Place
{
   char address[ADDR_LENGTH];
   char city[CITY_LENGTH];
   char state[STATE_LENGTH];
   char zip[ZIP_LENGTH];
};

// The EmployeeInfo structure holds an employee's data.
struct EmployeeInfo
{
   char name[NAME_LENGTH];
   int employeeNumber;
   Date birthDate;           // Nested structure
   Place residence;          // Nested structure
};

int main()
{
   // Define a structure variable to hold info about the manager.
   EmployeeInfo manager;

   // Get the manager's name and employee number
   cout << "Enter the manager's name: ";
   cin.getline(manager.name, NAME_LENGTH);
   cout << "Enter the manager's employee number: ";
   cin >> manager.employeeNumber;
   
   // Get the manager's birth date
   cout << "Now enter the manager's date of birth.\n";
   cout << "Month (up to 2 digits): ";
   cin >> manager.birthDate.month;
   cout << "Day (up to 2 digits): ";
   cin >> manager.birthDate.day;
   cout << "Year (2 digits): ";
   cin >> manager.birthDate.year;
   cin.ignore();  // Skip the remaining newline character
   
   // Get the manager's residence information
   cout << "Enter the manager's street address: ";
   cin.getline(manager.residence.address, ADDR_LENGTH);
   cout << "City: ";
   cin.getline(manager.residence.city, CITY_LENGTH);
   cout << "State: ";
   cin.getline(manager.residence.state, STATE_LENGTH);
   cout << "ZIP Code: ";
   cin.getline(manager.residence.zip, ZIP_LENGTH);
   
   // Display the information just entered
   cout << "\nHere is the manager's information:\n";
   cout << manager.name << endl;
   cout << "Employee number " << manager.employeeNumber << endl;
   cout << "Date of birth: ";
   cout << manager.birthDate.month << "-";
   cout << manager.birthDate.day << "-";
   cout << manager.birthDate.year << endl;
   cout << "Place of residence:\n";
   cout << manager.residence.address << endl;
   cout << manager.residence.city << ", ";
   cout << manager.residence.state << " ";
   cout << manager.residence.zip << endl;
   return 0;
}