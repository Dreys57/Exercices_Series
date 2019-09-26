#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>



int main()
{
	float number; // the number used for user input
	float RootNumber; // the square root of the number

	std::cout << "Please enter a number:\n";
	std::cin >> number;

	if (number >= 0) // we first make sure the number is positive, so that we avoid error when we use the program
	{
		RootNumber = sqrt(number); //it is positive so we calculate the square root and display it on the console

		std::cout << "The square root of your number is: " << RootNumber << "\n";
	}
	else
	{
		std::cout << "There is an error.\n"; //it is not positive so we display an error message
	}

	system("pause");
	return EXIT_SUCCESS;
}