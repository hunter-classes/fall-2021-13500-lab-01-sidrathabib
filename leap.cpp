/* Sidrat Habib
CSCI-135
Tong Yi and Michael Zamansky 
Lab 1C

leap.cpp asks the user to input an interger representing a year
number. if the input is a leap year according to the modern 
Gregorian calender, it should print 'Leap year', otherwise, 
print 'Common Year'
*/

#include <iostream>

//$ ./leap

int main()
{
	int year; 
	std::cout << "Enter a year: ";
	std::cin >> year;
	
	if (year % 4 == 0) {
    if (year % 100 == 0) {
    if (year % 400 == 0)
        std::cout << "Leap Year";
	
			else
                std::cout << "Common Year";
			}
        else
            std::cout << "Leap Year";
		}
		else
        std::cout << "Common Year";
		
	return 0;
}

/*if (year is not divisible by 4) then (it is a common year)
else if (year is not divisible by 100) then (it is a leap year)
else if (year is not divisible by 400) then (it is a common year)
else (it is a leap year)
*/