//****************************************************
// Chapter 7 Assignment
// International Civil Aviation Organization Alphabet
// Christopher M. Anderson
// CIS 1610 11.16.2007
//****************************************************

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

void findWord(char);						// Declares Caluclation Function

string	phonWord;							// Declares Phonetic Variable
char	letter;								// Declares Selected Character
string	outResponse;						// Define Ouput Response

int main() {

	char	wordInput[100];					// Define Word As String Length Function
	int		wordLength;						// Define Word Length As Integer
	int		i = 0;							// Define Reading Number

	cout << "Enter Word:              ";	// Prompt User For Word

	cin >> wordInput;						// Get Word

	wordLength = strlen(wordInput);			// Count Characters In Word

	while (i < wordLength)					// Run This Function On Each Letter In Word
	{
		letter = wordInput[i];
		findWord(letter);
		i++;
	}

	cout << "Phonetic Version Is:     " << outResponse << endl;				// Output Response

	cin.get();								// Press Enter To Close Screen
	cin.get();

	return 0;

}

void findWord (char letter) {

	letter = toupper(letter);				// Convert Letter To Uppercase

	if (letter == 'A')						// Find Letter And Set Variable Equal To Word
		phonWord = "ALPHA";
	else if (letter == 'B')
		phonWord = "BRAVO";
	else if (letter == 'C')
		phonWord = "CHARLIE";
	else if (letter == 'D')
		phonWord = "DELTA";
	else if (letter == 'E')
		phonWord = "ECHO";
	else if (letter == 'F')
		phonWord = "FOXTROT";
	else if (letter == 'G')
		phonWord = "GOLF";
	else if (letter == 'H')
		phonWord = "HOTEL";
	else if (letter == 'I')
		phonWord = "INDIA";
	else if (letter == 'J')
		phonWord = "JULIET";
	else if (letter == 'K')
		phonWord = "KILO";
	else if (letter == 'L')
		phonWord = "LIMA";
	else if (letter == 'M')
		phonWord = "MIKE";
	else if (letter == 'N')
		phonWord = "NOVEMBER";
	else if (letter == 'O')
		phonWord = "OSCAR";
	else if (letter == 'P')
		phonWord = "PAPA";
	else if (letter == 'Q')
		phonWord = "QUEBEC";
	else if (letter == 'R')
		phonWord = "ROMEO";
	else if (letter == 'S')
		phonWord = "SIERRA";
	else if (letter == 'T')
		phonWord = "TANGO";
	else if (letter == 'U')
		phonWord = "UNIFORM";
	else if (letter == 'V')
		phonWord = "VICTOR";
	else if (letter == 'W')
		phonWord = "WHISKEY";
	else if (letter == 'X')
		phonWord = "X-RAY";
	else if (letter == 'Y')
		phonWord = "YANKEE";
	else if (letter == 'Z')
		phonWord = "ZULU";
	else
		phonWord = "Invalid Letter";

	outResponse = outResponse + phonWord + " ";		// Add Word To Output Variable
}