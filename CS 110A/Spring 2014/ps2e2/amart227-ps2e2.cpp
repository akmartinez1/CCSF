//Filename:  amart227-ps2e2.cpp

/*
Alan K. Martinez
amart227@mail.ccsf.edu

Assignment
Problem Set 2 Exercise 2

MUNI Survey
*/

#include <iostream>
using namespace std;

int main(void)
{
	char muni_line;
	int survey_length_days;
	int rider_count;
	int survey_average;

	cout << "Welcome to the MUNI Ridership Calculator." << endl;
	cout << "Which MUNI Line did you survey?" << endl;;
	cin >> muni_line;
	cout << "How many days did you survey it?" << endl;
	cin >> survey_length_days;
	cout << "How many people riders did you encounter?" << endl;
	cin >> rider_count;
	survey_average = rider_count / survey_length_days;
	cout << endl;
	cout << "According to your survey, an average of " << survey_average << " people rode the " << muni_line << "-Line per day." << endl;

	return 0;
}
