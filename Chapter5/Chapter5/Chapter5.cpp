//****************************************************
// Chapter 5 Assignment
// International Civil Aviation Organization Alphabet
// Christopher M. Anderson
// CIS 1610 11.10.2007
//****************************************************

#include <iostream>
#include <cctype>

using namespace std;

int main() {

	char letter;					// Define Letter As Character

	cout << "Enter Letter:     ";	// Prompt User For Letter

	cin >> letter;					// Get Letter

	letter = toupper(letter);		// Convert Letter To Uppercase

	if (letter == 'A')
		cout << endl << "ALPHA" << endl;
	else if (letter == 'B')
		cout << endl << "BRAVO" << endl;
	else if (letter == 'C')
		cout << endl << "CHARLIE" << endl;
	else if (letter == 'D')
		cout << endl << "DELTA" << endl;
	else if (letter == 'E')
		cout << endl << "ECHO" << endl;
	else if (letter == 'F')
		cout << endl << "FOXTROT" << endl;
	else if (letter == 'G')
		cout << endl << "GOLF" << endl;
	else if (letter == 'H')
		cout << endl << "HOTEL" << endl;
	else if (letter == 'I')
		cout << endl << "INDIA" << endl;
	else if (letter == 'J')
		cout << endl << "JULIET" << endl;
	else if (letter == 'K')
		cout << endl << "KILO" << endl;
	else if (letter == 'L')
		cout << endl << "LIMA" << endl;
	else if (letter == 'M')
		cout << endl << "MIKE" << endl;
	else if (letter == 'N')
		cout << endl << "NOVEMBER" << endl;
	else if (letter == 'O')
		cout << endl << "OSCAR" << endl;
	else if (letter == 'P')
		cout << endl << "PAPA" << endl;
	else if (letter == 'Q')
		cout << endl << "QUEBEC" << endl;
	else if (letter == 'R')
		cout << endl << "ROMEO" << endl;
	else if (letter == 'S')
		cout << endl << "SIERRA" << endl;
	else if (letter == 'T')
		cout << endl << "TANGO" << endl;
	else if (letter == 'U')
		cout << endl << "UNIFORM" << endl;
	else if (letter == 'V')
		cout << endl << "VICTOR" << endl;
	else if (letter == 'W')
		cout << endl << "WHISKEY" << endl;
	else if (letter == 'X')
		cout << endl << "X-RAY" << endl;
	else if (letter == 'Y')
		cout << endl << "YANKEE" << endl;
	else if (letter == 'Z')
		cout << endl << "ZULU" << endl;
	else
		cout << endl << "You have entered an invalid letter." << endl;

	cin.get();					// Press Enter To Close Screen
	cin.get();

	return 0;

}