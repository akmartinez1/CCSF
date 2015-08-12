#pragma once
class GradedActivity
{
private:
	double score;
public:
	GradedActivity()
	{
		score = 0.0;
	}
	~GradedActivity();
	GradedActivity(double s)
	{
		score = s;
	}
	void setScore(double s)
	{
		score = s;
	}
	double getScore()
	{
		return score;
	}
	char getLetterGrade() const;
};

class Assignment : public GradedActivity
{
private:
	int functionality = 0;
	int efficiency = 0;
	int style = 0;

public:
	Assignment();
	~Assignment();
	
	void setRubric(int func, int eff, int styl);



};