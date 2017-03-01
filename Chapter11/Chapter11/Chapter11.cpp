//****************************************************
// Chapter 11 Assignment
// Time Calculations
// Christopher M. Anderson
// CIS 1610 12.05.2007
//****************************************************

#include "Chapter11.h"
#include <iostream>

//****************************************************

// Declare Time Class
Time::Time(){
	seconds = 0;
	minutes = 0;
}

// User Defined Time
Time::Time(long min, long sec){
	
	// Validate Seconds Portion
	if (sec >= 0) seconds = sec;
	else seconds = 0;

	// Validate Minutes Portion
	if (min >= 0) minutes = min;
	else minutes = 0;
	
	// Fix Seconds, If Over 60
	while (seconds > 59) {
		minutes++;
		seconds = seconds -60;
	}
}

//****************************************************

// Returns Total Time In Seconds
long Time::getTime(){ 
	return ((minutes * 60) + seconds);
}

// Returns Seconds Portion Of Time
long Time::getSeconds(){ 
	return seconds;
}

// Returns Minutes Portion Of Time
long Time::getMinutes(){
	return minutes;
}

//****************************************************

// Compares Current Time To Stored Time, Returns True If Equal
bool Time::isEqualTo(Time t1) {
	if (seconds == t1.seconds && minutes == t1.minutes) return true;
	else return false;
}

// Compares Current Time To Stored Time, Returns True If Greater Than
bool Time::isGreaterThan(Time t1){
	if (getTime() > t1.getTime()) return true;
	else return false;
}

// Compares Current Time To Stored Time, Returns True If Less Than
bool Time::isLessThan(Time t1){ 
	if (getTime() < t1.getTime()) return true;
	else return false;
}

//****************************************************

// Adds Stored Time To Current Time
void Time::add(Time t1){
	seconds = seconds + t1.seconds;
	minutes = minutes + t1.minutes;

	// Fix Seconds, If Over 60
	while (seconds > 59) {
		minutes++;
		seconds = seconds - 60;
	}
}
 
// Subtracts Stored Time From Current Time
void Time::subtract(Time t1){
	
	// Convert Time To Seconds
	long newTime = getTime()-t1.getTime();

	if (newTime >= 0) {
		seconds = newTime;
		minutes = 0;
	} else {
		seconds = 0; 
		minutes = 0;
	}

	// Fix Seconds, If Over 60
	while (seconds > 59) {
		minutes++;
		seconds = seconds - 60;
	}
}

//****************************************************