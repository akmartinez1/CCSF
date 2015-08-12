CS110B Assignment 9: Circle Class

City College of San Francisco
Instructor: Max Luttrell
Fall 2014

When working on this assignment, focus on memorizing the syntax for writing 
classes.

Write a simple class named circle, with three private variables:
doubles named x, y and radius.  

It should have public member functions with the following signatures:

	void setRadius(double r)
	void setX(double value)
	void setY(double value)
	double getRadius()
	double getX()
	double getY()
	double getArea()
	bool containsPoint(double xValue, double yValue)

When you are calculating the area you can use 3.14 for pi.  The formula is 
radius * radius * pi.

You can determine whether or not a point is in a circle by calculating the 
distance from the center of the circle (its x and y coordinates) to the point.  
If this distance is less than or equal to the radius then the point is inside 
the circle.  

For your reference, here is how to calculate distance between two points.

Write a main function that tests your class.  It should instantiate a number of
circle objects with different radius values and centers.  You should test all 
your member functions until you are confident that they work.  

At minimum, make sure you try each of the following and provide sample output 
for each:

Create a local circle object and set its x, y, and radius. 
Verify that its area is calculated correctly.

Create a circle pointer, and point it at your local circle object.  
Use this pointer to set its x, y, and radius values to new values.

Using your pointer, verify that your containsPoint() function works by trying a
point which is in fact in your circle, and showing it returns true.  Also, try 
a different point which is not in your circle and show it returns false.

Implement the Circle class in separate .h and .cpp files.  Circle.h contains 
your class declaration and Circle.cpp contains your class implementation.  
Put your main program into a separate file as well called CircleProgram.cpp.  
At the end of the assignment you will submit four files with the following 
names:

	Circle.h
	Circle.cpp
	CircleProgram.cpp
	Output.txt

All of the Circle class’s member functions should be defined in Circle.cpp.  
Don’t forget the #ifndef and #define preprocessor directives in your .h file.  
Output.txt should be a text file which contains your sample output.