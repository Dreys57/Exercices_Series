#include <iostream>



int main()
{
	int number; //the variable used by to get the user's input
	int DivRest; //the rest of the modulo operation

	std::cout << "Please enter a number:\n";
	std::cin >> number;

	DivRest = number % 2; //If the number is even % 2 will give a rest of 0 while an odd one will not

	if (DivRest == 0) //so, from the previous comment, we deduce if DivRest is 0 the number is even and odd if not
	{
		std::cout << "Your number is even.\n";
	}
	else
	{
		std::cout << "Your nummber is odd.\n";
	}

	system("pause");
	return EXIT_SUCCESS;
}