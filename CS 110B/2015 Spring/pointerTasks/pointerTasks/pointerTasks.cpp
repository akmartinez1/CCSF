/*
Alan K.Martinez
amart227@mail.ccsf.edu

CS 110B Programming Fundamentals C++
Monday and Wednesday 9:10am to 11:00am
M. Luttrell
Batmale Hall, Room 451

Home Work Assignment 6-1
2015-03-09

pointerTasks.cpp

GitHub:  https://github.com/akmartinez1/CCSF-CS110B--VS--Retake

*/

// Comment this line out if you're not using Microsoft Visual Studio 2013 Pro or Express to compile the source code.
#include "stdafx.h"

#include <iostream>
using namespace std;

//Prototypes
void noNegatives(int *);
void swap(int *, int *);


int main(void)
{
	//1.  Create two interger variables named x and y
	int x, y;

	//2.  Create an int pointer named p1
	int *p1;

	//3.  Store the address of x in p1
	p1 = &x;

	//4.  Use p1 to set the value of x to 99
	*p1 = 99;

	//5.  Using cout and x, display the value of x
	cout << "The value of x is " << x << endl;

	//6.  Using cout and the pointer p1, display the value of x
	cout << "The value of x through pointer p1 is " << *p1 << endl << endl;

	//7.  Store the address of y into p1
	p1 = &y;

	//8.  Use p1 to set the value of y to -300
	*p1 = -300;

	//9.  Create two new variables, an int named temp, and an int pointer named p2
	int temp, *p2;

	//10.  Use temp, p1, and p2 to swap the values in x and y (this will take a few statements
	//  Note:  Assuming p1 is assigned to the address of x and p2 is assigned to the address of y
	p1 = &x;  //At this point x should equal 99
	p2 = &y;  //At this point y should equal -300

	//Content verification before swap
	cout << "Before the swap the values of" << endl;
	cout << "x through pointer p1 is " << *p1 << endl;
	cout << "y through pointer p2 is " << *p2 << endl << endl;
	
	//Perform swap
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	//Content verification after swap
	cout << "After the swap the values of" << endl;
	cout << "x through pointer p1 is " << *p1 << endl;
	cout << "y through pointer p2 is " << *p2 << endl << endl;

	//12.  Invoke the function (#11 noNegatives(int *)) twice:  once with the address of x as the argument, and once with the address of y
	noNegatives(&x);
	noNegatives(&y);

	//13.  Use p2 to display the values in x and y (this will require both assignment statements and cout statements)
	p2 = &x;
	cout << "The value of x thorugh pointer p2 after the function call is " << *p2 << endl;

	p2 = &y;
	cout << "The value of y through pointer p2 after the function call is " << *p2 << endl << endl;

	//14.  Create an int array with two elements.  The array should be named a
	int a[2];

	//15.  Use p2 to initialize the first element of a with the value of x
	p2 = &x;
	a[0] = *p2;

	//16.  Use p2 to initialize the second element of a with the value of y
	p2 = &y;
	a[1] = *p2;

	//17.  Using cout, display the address of the first element in a
	cout << "The address of the first element a[0] is " << &a[0] << endl;

	//18.  Using cout display the address of the second element in a
	cout << "The address of the second element a[1] is " << &a[1] << endl << endl;

	//19.  Use p1, p2, and temp to swap the values in the two elements of array a.  (first point p1 at a[0], then point p2 at a[1].  
	//After this the swapping steps shold look very similar to step 10)
	p1 = &a[0];
	p2 = &a[1];

	//Perform swap
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	//20.  Display the values of the two elements. (The first element shold e 99, the second 0).
	cout << "The value of a[0] after the swap is " << a[0] << endl;
	cout << "The value of a[1] after the swap is " << a[1] << endl << endl;


	//22.  Invoke your swap function with the addresses of x and y, then print their values.  (x should be 99, y should be 0)
	swap(&x, &y);
	cout << "The value of x after the swap is " << x << endl;
	cout << "The value of y after the swap is " << y << endl << endl;

	//23.  Invoke your swap function with the address of the two elements in array 'a', then print their values. (a[0] should be 0, a[1] should be 99)
	swap(&a[0], &a[1]);
	cout << "The value of a[0] after the swap is " << a[0] << endl;
	cout << "The value of a[1] after the swap is " << a[1] << endl << endl;
	
	return 0;
}

void noNegatives(int *point)
{
	//11.  Write a function with the following signature:  void noNegatives(int *x).
	//The function should accept the address of an int variable.  
	//If the value of this integer is negative then it should set it to zero.
	
	if (*point < 0)
		*point = 0;

	return;
}

void swap(int *x, int *y)
{
	//21.  Write a function named 'swap' that accepts two integer addresses as arguments, and then swaps the contents of the two integers.

	int temp;

	//Perform swap
	temp = *x;
	*x = *y;
	*y = temp;

	return;
}