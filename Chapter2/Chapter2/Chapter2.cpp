//**************************************************
// Chapter 2 Assignment
// Program To Display Checkerboard Pattern
// Christopher M. Anderson
// CIS 1610 09.14.2007
//**************************************************

#include <iostream>
#include <string>
using namespace std;

const string ODD = " * * * *";		// Define a line of stars for odd rows
const string EVEN = "* * * * ";		// Define a line of stars for even rows

int main() {

	cout << ODD << endl;	// Print Odd Row
	cout << EVEN << endl;	// Print Even Row
	cout << ODD << endl;	// Print Odd Row
	cout << EVEN << endl;	// Print Even Row
	cout << ODD << endl;	// Print Odd Row
	cout << EVEN << endl;	// Print Even Row
	cout << ODD << endl;	// Print Odd Row
	cout << EVEN << endl;	// Print Even Row

	return 0;

}