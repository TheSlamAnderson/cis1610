//**************************************************
// Chapter 3 Assignment
// Program To Calculate Volume Of A Cone
// Christopher M. Anderson
// CIS 1610 10.02.2007
//**************************************************

#include <iostream>

using namespace std;

int main() {

	const double PI = 3.14159;	// Set Constant For Pi

	float DIAM;					// Set Variable For Diameter
	float HGT;					// Set Variable For Height
	float RAD;					// Set Variable For Radius
	float SQRAD;				// Set Variable For Radius Squared
	float FRAC;					// Set Variable For Fraction
    double VOL;					// Set Variable For Volume

	cout << "Please Enter The Diameter Of The Cone Base: " << endl;
	cin >> DIAM;				// Ask For Diameter

	cout << "Please Enter The Height Of The Cone: " << endl;
	cin >> HGT;					// Ask For Height

	RAD = (DIAM/2);				// Calculate Radius
	SQRAD = (RAD*RAD);			// Calculate Radius Squared
	FRAC = 1.0/3.0;				// Calculate Fraction

	VOL = (FRAC*PI)*SQRAD*HGT;	// Formulate Volume

	cout << "The Volume Of The Cone Is: " << VOL << endl;

	cin.get();					// Press Enter To Close Screen
	cin.get();

	return 0;

}