//****************************************************
// Chapter 8 Assignment
// Find Number Of Days Between Two Dates
// Christopher M. Anderson
// CIS 1610 11.22.2007
//****************************************************

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long JDN (int month,int day,int year);

int main()
{
	// First Date Variables
	int monthOne = 0;
	int dayOne = 0;
	int yearOne = 0;

	// Second Date Variables
	int monthTwo = 0;
	int dayTwo = 0;
	int yearTwo = 0;

	// Prompt For First Date
	cout << "Please Enter First Date (MM DD YYYY):     ";
	cin >> monthOne;
	cin >> dayOne;
	cin >> yearOne;

	// Send To Formula, Output Response
	long dateOne = JDN(monthOne,dayOne,yearOne);
	cout << monthOne << "/" << dayOne << "/" << yearOne << " = " << dateOne << " JDN" << endl << endl;

	// Prompt For Second Date
	cout << "Please Enter Second Date (MM DD YYYY):    ";
	cin >> monthTwo;
	cin >> dayTwo;
	cin >> yearTwo;
	
	// Send To Formula, Output Response
	long dateTwo = JDN(monthTwo,dayTwo,yearTwo);
	cout << monthTwo << "/" << dayTwo << "/" << yearTwo << " = " << dateTwo<< " JDN" << endl << endl;

	// Calculate Difference Between Dates, Output Response
	long difference = dateTwo - dateOne;
	cout << "There are " << difference << " days between the given dates.";

	// Press Enter To Close Screen
	cin.get();
	cin.get();

	return 0;
}


// Formula To Calculate Julian Date		
long JDN (int month,int day,int year)
{

	// Julian Date Variables
	int monthJDN = month;
	int dayJDN = day;
	int yearJDN = year;

	if (yearJDN < 0)
		yearJDN += 1;
	
	if (monthJDN > 2)
		monthJDN += 1;
	else {
		monthJDN += 13;
		yearJDN -= 1;
	}

	// Julian Date Formula
	long JUL = static_cast<long>(floor(365.25 * yearJDN) + floor(30.6001 * monthJDN) + monthJDN + 1720995.0);

	// Determine If Date Is Gregorian
	if ( yearJDN < 1582 || ( yearJDN == 1582 && (monthJDN < 10 || ( monthJDN == 10 && monthJDN < 15))))
		return JUL;
	else {
		int JDNYear = static_cast<int>(0.01 * yearJDN);
		JUL +=  static_cast<int>(2 - JDNYear + 0.25 * JDNYear);
		return JUL;
	}
}