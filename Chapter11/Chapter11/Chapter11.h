//****************************************************
// Chapter 11 Assignment
// Time Calculations (Header)
// Christopher M. Anderson
// CIS 1610 12.05.2007
//****************************************************

class Time {

	private:
		long minutes;						// Define Minutes Portion
		long seconds;						// Define Seconds

	public:
		Time();								// Default Constructor
		Time(long minutes, long seconds);	// User Defined Constructor
	
		// Observers
		long getTime();						// Returns Total Time In Seconds
		long getSeconds();					// Returns Seconds Portion Of Time
		long getMinutes();					// Returns Minutes Portion Of Time

		// Booleans
		bool isEqualTo(Time t1);			// Compares Current Time To Stored Time, Returns True If Equal
		bool isGreaterThan(Time t1);		// Compares Current Time To Stored Time, Returns True If Greater Than
		bool isLessThan(Time t1);			// Compares Current Time To Stored Time, Returns True If Less Than

		// Transformers
		void add(Time t1);					// Adds Stored Time To Current Time
		void subtract(Time t1);				// Subtracts Stored Time From Current Time

};