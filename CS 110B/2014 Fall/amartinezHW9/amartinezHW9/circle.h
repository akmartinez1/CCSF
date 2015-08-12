//#pragma once

#ifndef CIRCLE_H
#define CIRCLE_H

class circle
{
private:
	double xcoor;
	double ycoor;
	double radius;
	const double pi = 3.1415926535;

public:
	void setRadius(double);
	void setX(double);
	void setY(double);
	double getRadius();
	double getX();
	double getY();
	double getArea();
	bool containsPoint(double, double);
};

#endif
