#include <iostream>



int main()
{
	const int LIMIT_MAX = 78; //the top limit of the winning range
	const int LIMIT_MIN = 56; // the bottom limit of the winning range
	int number;

	std::cout << "Please enter a number:\n";
	std::cin >> number;

	if (LIMIT_MIN <= number && number <= LIMIT_MAX) //we test if number is greater or equal to 56 AND lesser or equal to 78
	{
		std::cout << "GAGNE\n"; //number is within the range
	}
	else
	{
		std::cout << "PERDU\n"; //number isn't
	}

	system("pause");
	return EXIT_SUCCESS;
}