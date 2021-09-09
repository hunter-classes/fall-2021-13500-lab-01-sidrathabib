/* Sidrat Habib
CSCI-135
Tong Yi and Michael Zamansky 
Lab 1A

smaller.cpp asks the user to input two integer numbers 
and prints out the smaller of the two.
*/

#include <iostream>

//$ ./smaller

int main()
{
	int num1;
	std::cout << "Enter the first number: ";
	std::cin >> num1;
	
	int num2;
	std::cout << "Enter the second number: ";
	std::cin >> num2;
	
	if (num1 < num2)
	{
		std::cout << "The smaller of the two is " << num1;
	}
	else
	{
		std::cout << "The smaller of the two is " << num2; 
	}
	
	return 0;
}
