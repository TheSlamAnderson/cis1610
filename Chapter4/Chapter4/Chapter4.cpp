//**************************************************
// Chapter 4 Assignment
// Calculate Surface Area Of The Visible Moon
// Christopher M. Anderson
// CIS 1610 10.19.2007
//**************************************************

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	const double PI = 3.14159;	// Set Constant For Pi
	const double R = pow(1738.3,2);  // Set Constant For Radius Of Moon Squared
	double moon;
	double percent;
	double S;

	cout << "Please enter the percentage of the moon's face that appears illuminated." << endl;

	cin >> moon;	// Input % of moon's face showing

	percent = moon / 100;	// Divide entered number by 100 to calculate percentage

	S = 2 * R * (percent*PI);	// Process formula

	cout << "The visible surface area of the moon is " << fixed << setprecision(3) << S << " square kilometers." << endl;

	cin.get();					// Press Enter To Close Screen
	cin.get();

	return 0;

}