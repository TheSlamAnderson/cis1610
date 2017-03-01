//****************************************************
// Chapter 12 Assignment
// International Civil Aviation Organization Alphabet
// Christopher M. Anderson
// CIS 1610 12.05.2007
//****************************************************

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

void	findWord(char);						// Declares Caluclation Function

string	phonWord;							// Declares Phonetic Variable
char	letter;								// Declares Selected Character
string	outResponse;						// Define Ouput Response

int main()
{
	
	char	wordInput[100];					// Define Word As String Length Function
	int		wordLength;						// Define Word Length As Integer
	int		i = 0;							// Define Reading Number

	cout << "Enter Word:              ";	// Prompt User For Word
	cin >> wordInput;						// Get Word

	wordLength = strlen(wordInput);			// Count Characters In Word

	cout << endl;							// Output New Line
	cout << "Phonetic Version Is:" << endl;	// Output Response
	
	while (i < wordLength)					// Run This Function On Each Letter In Word
	{
		letter = wordInput[i];
		findWord(letter);
		i++;
	}

	cout << endl;							// Output New Line

	cin.get();								// Press Enter To Close Screen
	cin.get();
	return 0;
}


// Translation Function
void findWord (char letter)
{

	letter = toupper(letter);				// Convert Letter To Uppercase
	
	int ipos ;

	string icao[26];						// Find Letter And Set Variable Equal To Word
	icao[0] = "ALPHA";
	icao[1] = "BRAVO";
	icao[2] = "CHARLIE";
	icao[3] = "DELTA";
	icao[4] = "ECHO";
	icao[5] = "FOXTROT";
	icao[6] = "GOLF";
	icao[7] = "HOTEL";
	icao[8] = "INDIA";
	icao[9] = "JULIET";
	icao[10] = "KILO";
	icao[11] = "LIMA";
	icao[12] = "MIKE";
	icao[13] = "NOVEMBER";
	icao[14] = "OSCAR";
	icao[15] = "PAPA";
	icao[16] = "QUEBEC";
	icao[17] = "ROMEO";
	icao[18] = "SIERRA";
	icao[19] = "TANGO";
	icao[20] = "UNIFORM";
	icao[21] = "VICTOR";
	icao[22] = "WHISKEY";
	icao[23] = "X-RAY";
	icao[24] = "YANKEE";
	icao[25] = "ZULU";
	
	ipos = int(letter);						// Set Variable Equal To Letter Integer

	if (ipos >= 65 && ipos <= 90)			// Determine If Valid Letter
	{
		ipos = ipos - 65;
		cout << icao[ipos] << " ";
	}
	else
		cout << "(Invalid Character " << letter << ") " << endl;
}