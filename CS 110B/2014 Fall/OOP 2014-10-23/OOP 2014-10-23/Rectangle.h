/*
#pragma once
class Rectangle
{
public:
	Rectangle();
	~Rectangle();
};
*/


//Rectangle Header File

#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
private:
	double width;
	double length;
public:
	void setWidth(double);
	void setLength(double);
	double Rectangle::getWidth() const
	{
		return width;
	}

	double Rectangle::getLength() const
	{
		return length;
	}

	double getArea() const;
	double getPermimeter() const;
	bool isSquare() const;
};

#endif