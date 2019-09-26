#include <iostream>

int main()
{
	int a1 = 0; // the variables for the user input numbers.
	int a2 = 0; 
	int a3 = 0;
	int a4 = 0;
	int a5 = 0;
	const float nbInteger = 5; //the denominator. It is a float in case the average isn't integer the answer will be more precise.
	int sum = 0; // the sum of the 5 numbers.
	float average = 0; // the average of the 5 numbers.
	std::cout << "Please enter 5 numbers\n"; // asking for the 5 numbers.

	std::cout <<"1."; //repeating the 2 lines to get the 5 numbers input.
	std::cin >> a1;

	std::cout << "2.";
	std::cin >> a2;

	std::cout << "3.";
	std::cin >> a3;

	std::cout << "4.";
	std::cin >> a4;

	std::cout << "5.";
	std::cin >> a5;

	sum = (a1 + a2 + a3 + a4 + a5); //summing the 5 numbers into sum.

	average = sum / nbInteger; // dividing sum by the constant.

	std::cout << "The average of those 5 numbers is: " << average << "\n"; //displaying the average on screen

	return EXIT_SUCCESS;
}