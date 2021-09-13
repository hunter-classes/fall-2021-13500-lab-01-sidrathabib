/* Author: Sidrat Habib
Course: CSCI-135
Instructor: Tong Yi and Michael Zamansky 
Assignment: Lab 1D

month.cpp asks the user to input the year and the month 
and prints the number of days in that month (+leap)
*/

#include <iostream>

//$ ./month

int main()
{
	int year; 
	std::cout << "Enter year: ";
	std::cin >> year;
	
	int month; 
	std::cout << "Enter month: ";
	std::cin >> month;
	
	int common = 1;
	int leap = 2;

//determines if leap or common
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				year = leap;
			}
			else
				year = common;
			}
		else
            year = leap;
		}
		else
        year = common;
	
//calculating leap years
	if ((year == leap) && (month == 2)) {
		std::cout << "29 days";
	}
	if ((year == common ) && (month == 2)) {
		std::cout << "28 days";
	}
	
//calculating rest of the years
	
	//31 days
	if (((year == common) || (year == leap)) && (month == 1)) {
		std::cout << "31 days"; 
	}
	if (((year == common) || (year == leap)) && (month == 3)) {
		std::cout << "31 days"; 
	}
	if (((year == common) || (year == leap)) && (month == 5)) {
		std::cout << "31 days"; 
	}
	if (((year == common) || (year == leap)) && (month == 7)) {
		std::cout << "31 days"; 
	}
	if (((year == common) || (year == leap)) && (month == 8)) {
		std::cout << "31 days"; 
	}
	if (((year == common) || (year == leap)) && (month == 10)) {
		std::cout << "31 days"; 
	}
	if (((year == common) || (year == leap)) && (month == 12)) {
		std::cout << "31 days"; 
	}
	
	//30 days
	if (((year == common) || (year == leap)) && (month == 4)) {
		std::cout << "30 days"; 
	}
	if (((year == common) || (year == leap)) && (month == 6)) {
		std::cout << "30 days"; 
	}
	if (((year == common) || (year == leap)) && (month == 9)) {
		std::cout << "30 days"; 
	}
	if (((year == common) || (year == leap)) && (month == 11)) {
		std::cout << "30 days"; 
	}
	
	return 0;
}