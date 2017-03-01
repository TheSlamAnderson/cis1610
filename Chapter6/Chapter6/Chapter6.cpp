//****************************************************
// Chapter 6 Assignment
// CD Collection
// Christopher M. Anderson
// CIS 1610 11.10.2007
//****************************************************

#include <iostream>
#include <fstream>				// For File I/O
#include <iomanip>

using namespace std;

int main() {

	// Declare Variables
	int		songNumber;
	float	songLength1;
	int		songLength2;
	int		songLength3;
	float	totalLength1 = 0;
	int		totalLength2;
	int		totalLength3;
	float	remainLength1 = 0;
	int		remainLength2;
	int		remainLength3;
	int		readingNumber = 1;

	// Define And Open Input File
	ifstream inFile;			// Define Input File
	inFile.open("songs.dat");	// Attempt To Open Input File
	if ( !inFile )				// Determine If Input File Opened
	{
		cout << "** Unable To Open Input File **" << endl;
		return 1;				// Terminate Program
	}

	// Define And Open Output File
	ofstream outFile;			// Define Output File
	outFile.open("out.dat");	// Attempt To Open Output File
	if ( !outFile )				// Determine If Output File Opened
	{
		cout << "** Unable To Open Output File **" << endl;
		return 1;				// Terminate Program
	}

	// Output Header Information To Screen
	cout
		<< setw(4)  << "Song"
		<< setw(21) << "Song Time"
		<< setw(25) << "Total Time"
		<< endl
		<< setw(6)  << "Number" 
		<< setw(12) << "Minutes" 
		<< setw(12) << "Seconds" 
		<< setw(12) << "Minutes"
		<< setw(12) << "Seconds" 
		<< endl
		<< setw(6)  << "------" 
		<< setw(12) << "-------" 
		<< setw(12) << "-------" 
		<< setw(12) << "-------"
		<< setw(12) << "-------" 
	<< endl;

	// Output Header Information To Screen
	outFile
		<< setw(4)  << "Song"
		<< setw(21) << "Song Time"
		<< setw(25) << "Total Time"
		<< endl
		<< setw(6)  << "Number" 
		<< setw(12) << "Minutes" 
		<< setw(12) << "Seconds" 
		<< setw(12) << "Minutes"
		<< setw(12) << "Seconds" 
		<< endl
		<< setw(6)  << "------" 
		<< setw(12) << "-------" 
		<< setw(12) << "-------" 
		<< setw(12) << "-------"
		<< setw(12) << "-------" 
	<< endl;


	// Begin Charting Data
	while (readingNumber <= 7)
	{
		// Read Data From Input File
		inFile >> songNumber >> songLength1;
	
		// Calculate Results
		songLength2  = songLength1 / 60;
		songLength3  = songLength1 - (songLength2 * 60);
		totalLength1 += (songLength2 * 60) + songLength3;
		totalLength2 = totalLength1 / 60;
		totalLength3 = totalLength1 - (totalLength2 * 60);

		// Output Results To Screen
		cout
			<< setw(1)  << songNumber
			<< setw(12) << fixed << setprecision(0) << songLength2
			<< setw(13) << songLength3
			<< setw(11) << totalLength2
			<< setw(13) << totalLength3
		<< endl;

		// Output Results To File
		outFile
			<< setw(1)  << songNumber
			<< setw(12) << fixed << setprecision(0) << songLength2
			<< setw(13) << songLength3
			<< setw(11) << totalLength2
			<< setw(13) << totalLength3
		<< endl;

		// Increment Reading Number
		readingNumber++;
	}

	// Calculate Footer Information
	remainLength1 = 4800 - totalLength1;
	remainLength2 = remainLength1 / 60;
	remainLength3 = remainLength1 - (remainLength2 * 60);

	// Output Footer Information To Screen
	cout << endl << "There are " << remainLength2 << " minutes and " << remainLength3 << " seconds of space left on the 80 minute CD." << endl;
	
	// Output Footer Information To File
	outFile << endl << "There are " << remainLength2 << " minutes and " << remainLength3 << " seconds of space left on the 80 minute CD." << endl;
	
	// Close Input And Output Files
	inFile.close();
	outFile.close();

	cin.get();					// Press Enter To Close Screen
	cin.get();

	return 0;

}