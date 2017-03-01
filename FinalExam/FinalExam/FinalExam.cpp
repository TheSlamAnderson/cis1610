//**************************************************
// Final Exam Assignment
// Honest Dave’s Used Cars Car Payment Calculator
// Christopher M. Anderson
// CIS 1610 12.08.2007
//**************************************************

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Declare Functions
void getPrice();
void getTradeIn();
void getDownPayment();
void getInterestRate();
void calcMonPayment(int noMonths);

// Declare Variables
double price;
double tradeIn;
double downPayment;
double annualIntRate;
double annualIntPercent;
double loanAmt;
double monIntRate;
int noMonths;
double monPayment;


// Call Main Function
int main() {

	// Introduction
	cout << "========================= HONEST DAVE'S USED CARS =========================" << endl;
	cout << endl << endl;

	// Call Functions
	getPrice();
	getTradeIn();
	getDownPayment();
	getInterestRate();

	// Calculate Loan Amount
	loanAmt = price - downPayment - tradeIn;

	// Display Report
	cout << fixed << setprecision(2);

	cout << "   Vehicle Price:           ";
	cout << setw(10) << price << endl;

	cout << "   Trade-In Value:          ";
	cout << setw(10) << tradeIn << endl;

	cout << "   Down Payment:            ";
	cout << setw(10) << downPayment << endl;

	cout << "   -----------------------------------" << endl;

	cout << "   Loan Amount:             ";
	cout << setw(10) << loanAmt << endl;

	cout << endl;

	cout << "   Annual Interest Rate:    ";
	cout << setw (10) << annualIntPercent << "%" << endl;
	
	cout << endl;

	cout << "   Monthly Payment Options: " << endl;
	
	cout << "   24 Months:               ";
	calcMonPayment(24);
	cout << setw(10) << monPayment << endl;
	
	cout << "   36 Months:               ";
	calcMonPayment(36);
	cout << setw(10) << monPayment << endl;
	
	cout << "   48 Months:               ";
	calcMonPayment(48);
	cout << setw(10) << monPayment << endl;

	cout << "   60 Months:               ";
	calcMonPayment(60);
	cout << setw(10) << monPayment << endl;


	// Closing
	cout << endl << endl;
	cout << "=========================== PRESS ENTER TO CLOSE ==========================" << endl;
	cin.get();
	cin.get();

	return 0;

}

// Price Function
void getPrice() {

	while (!(price > 50 && price < 50000)) {
		cout << "1. Please Enter A Vehicle Price Between $50.00 and $50,000.00: ";
			cin >> price;
		cout << endl;
	}

}

// Trade In Amount Function
void getTradeIn() {

	tradeIn = -1;
	while (!(tradeIn >= 0 && tradeIn < price)) {
		cout << "2. Please Enter Trade-In Amount: ";
			cin >> tradeIn;
		cout << endl;
	}
}

// Down Payment Function
void getDownPayment() {

	downPayment = -1;
	while (!(downPayment >= 0 && downPayment < price - tradeIn)) {
		cout << "3. Please Enter Down Payment Amount: ";
			cin >> downPayment;
		cout << endl;
	}
}

// Interest Rate Function
void getInterestRate() {

	annualIntRate = -1;
	while (!(annualIntRate >= 0 && annualIntRate < 0.50)) {
		cout << "4. Please Enter Annual Interest Rate As A Decimal (i.e. 6% = 0.06): ";
			cin >> annualIntRate;
		cout << endl;
	}

	annualIntPercent = annualIntRate * 100;

}

// Calculate Monthly Payment Formula

void calcMonPayment(int noMonths) {

	// Calculate Monthly Interest Rate
	monIntRate = annualIntRate / 12.0;

	// Calculate Monthly Payment
	monPayment = (loanAmt * monIntRate)/(1.0-pow(1+monIntRate,-noMonths));

}