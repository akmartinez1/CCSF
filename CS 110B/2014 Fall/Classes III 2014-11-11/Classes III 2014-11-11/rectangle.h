#pragma once
class rectangle
{
private:
	double width;
	double length; 

	char *name;
	static double yardsAvailable;
	void initName(char* name);

public:
	
	rectangle();
	rectangle(double, double, char*);
	~rectangle();
	void setWidth(double);
	void setLength(double);
	void printName() const;
	static double setYards(double yards);

};

