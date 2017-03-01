//****************************************************
// Chapter 9 Assignment
// Numeric Time To English
// Christopher M. Anderson
// CIS 1610 11.24.2007
//****************************************************

#include <iostream>
#include <string>

using namespace std;

// Declare Function

void	funcTime(int funcHH,int funcMM);

// Declare Integer Variables
int		numHH = 24;
int		numMM = 60;
int		timeM1 = 99;
int		timeM2 = 99;

// Declare String Variables
string	strHH;
string	strMM;
string	ext;

// Main Function 
int main()
{

	// Request Valid User Input Time
	while (numHH > 23 || numMM > 59){
		cout << "Please Enter 24 Hour Format Time (HH MM):     ";
		cin >> numHH >> numMM;
	}

	// Output Time Response
	if (numHH == 12 && numMM == 0)
		cout << endl << "Your Time Is:     Noon" << endl;
	else if (numHH == 0 && numMM == 0)
		cout << endl << "Your Time Is:     Midnight" << endl;
	else
		funcTime(numHH,numMM);	// Call Time Function

	// Press Enter To Close Screen
	cin.get();
	cin.get();

	return 0;
}


// Time Function
void funcTime (int funcHH,int funcMM)
{

	// Determine If AM or PM
	if (funcHH < 12)
		ext = " AM";
	else if (funcHH > 12)
	{
		ext = " PM";
		funcHH = (funcHH - 12);	// Convert 24 Hour Time Into 12 Hour Time
	}
	else if (funcHH = 12)
		ext = " PM";

	//	Translate Hour Into Text
	switch (funcHH) {
		case 1:		strHH = "One ";
					break;
		case 2:		strHH = "Two ";
					break;
		case 3:		strHH = "Three ";
					break;
		case 4:		strHH = "Four ";
					break;
		case 5:		strHH = "Five ";
					break;
		case 6:		strHH = "Six ";
					break;
		case 7:		strHH = "Seven ";
					break;
		case 8:		strHH = "Eight ";
					break;
		case 9:		strHH = "Nine ";
					break;
		case 10:	strHH = "Ten ";
					break;
		case 11:	strHH = "Eleven ";
					break;
		case 12:	strHH = "Twelve ";
					break;
		default:	strHH = "Invalid Time";
					break;
	}

	// Calulate Minutes Under 10
	if (funcMM < 10) {
		strMM = "O'";
		switch (funcMM) {
			case 0:		strMM = strMM + "Clock";
						break;
			case 1:		strMM = strMM + "One";
						break;
			case 2:		strMM = strMM + "Two";
						break;
			case 3:		strMM = strMM + "Three";
						break;
			case 4:		strMM = strMM + "Four";
						break;
			case 5:		strMM = strMM + "Five";
						break;
			case 6:		strMM = strMM + "Six";
						break;
			case 7:		strMM = strMM + "Seven";
						break;
			case 8:		strMM = strMM + "Eight";
						break;
			case 9:		strMM = strMM + "Nine";
						break;
			default:	strMM = "Invalid Time";
						break;
		}
	}

	// Calulate Minutes Between 9 and 20
	else if (funcMM > 9 && funcMM < 20) {
		switch (funcMM) {
			case 10:	strMM = "Ten";
						break;
			case 11:	strMM = "Eleven";
						break;
			case 12:	strMM = "Twelve";
						break;
			case 13:	strMM = "Thirteen";
						break;
			case 14:	strMM = "Fourteen";
						break;
			case 15:	strMM = "Fifteen";
						break;
			case 16:	strMM = "Sixteen";
						break;
			case 17:	strMM = "Seventeen";
						break;
			case 18:	strMM = "Eighteen";
						break;
			case 19:	strMM = "Nineteen";
						break;
			default:	strMM = "Invalid Time";
						break;
		}
	}

	// Calulate Minutes 20 And Higher
	else if (funcMM > 19) {
		timeM1 = funcMM / 10;
		timeM2 = funcMM - (timeM1 * 10);
		
		// Calculate Tens Place
		switch (timeM1) {
			case 2:		strMM = "Twenty ";
						break;
			case 3:		strMM = "Thirty ";
						break;
			case 4:		strMM = "Forty ";
						break;
			case 5:		strMM = "Fifty ";
						break;
			default:	strMM = "Invalid Time";
						break;
		}

		// Calculate Ones Place
		switch (timeM2) {
			case 1:		strMM = strMM + "One";
						break;
			case 2:		strMM = strMM + "Two";
						break;
			case 3:		strMM = strMM + "Three";
						break;
			case 4:		strMM = strMM + "Four";
						break;
			case 5:		strMM = strMM + "Five";
						break;
			case 6:		strMM = strMM + "Six";
						break;
			case 7:		strMM = strMM + "Seven";
						break;
			case 8:		strMM = strMM + "Eight";
						break;
			case 9:		strMM = strMM + "Nine";
						break;
			default:	strMM = "Invalid Time";
						break;
		}
	}

	// Output Time Response
	cout << endl << "Your Time Is:     "  << strHH << strMM << ext << endl;

}