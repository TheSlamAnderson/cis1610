//****************************************************
// Chapter 11 Assignment
// Time Calculations (Driver)
// Christopher M. Anderson
// CIS 1610 12.05.2007
//****************************************************

#include <iostream>
#include "Chapter11.h"

using namespace std;

// Declare Print Function
void printTimes(Time t,Time t1,Time t2);

int main() {
	
	// Declare Times
	Time t	(5,23);
	Time t1	(4,19);
	Time t2;

	// Call Print Function
	cout << "Original Times:" << endl;
	printTimes(t, t1, t2);

	// Add T1 To T
	cout << "Add T1 To T:" << endl;
	t.add(t1);
    printTimes(t, t1, t2);

	// Add T1 to T2
	cout << "Add T1 To T2:" << endl;
	t2.add(t1);
	printTimes(t, t1, t2);

	// Subtract T2 From T1
	cout << "Subtract T2 From T1:" << endl;
	t1.subtract(t2);
	printTimes(t, t1, t2);

	// Output T In Seconds
	cout << endl;
	cout << "Output T In Seconds:     " << t.getTime() << endl << endl;

	// Output If T > T2
	cout << "T Is Greater Than T2:    ";
	if (t.isGreaterThan(t2) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;

	// Output If T < T2
	cout << "T Is Less Than T2:       ";
	if (t.isLessThan(t2) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;

	// Output If T1 = T2
	cout << "T1 Is Equal To T2:       ";
	if (t1.isEqualTo(t2) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;

	// Push Enter To Close Screen
	cin.get();
	return 0;
}


// Print Function
void printTimes(Time t,Time t1,Time t2) {

	// Output Header
	cout << endl;
	cout << "       Min:Sec         Min:Sec         Min:Sec" << endl;
	cout << "     ===========     ===========     ===========" << endl;

	// Output Times
	cout << "     t = " << t.getMinutes() << ":" << t.getSeconds() << "        " <<
	        "t1 = " << t1.getMinutes() << ":" << t1.getSeconds() << "       " <<
	        "t2 = " << t2.getMinutes() <<  ":" << t2.getSeconds() << endl << endl;
}
