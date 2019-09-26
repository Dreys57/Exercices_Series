#include <iostream>



int main()
{
	int choice; //choice is the user input to decide which operation to do
	int number1; //first number asked to do the operation
	int number2; // second number asked to do the operation
	int result; //result of the operation
	bool quit = true;

	while (quit) //the loop will continue until the user presses 5 to set quit to false
	{
		std::cout << "Please enter 2 numbers:\n"; //asks the user for 2 numbers
		std::cout << "1. ";
		std::cin >> number1;
		std::cout << "2. ";
		std::cin >> number2;

		std::cout << "Additionner : 1\n"; //display the choices of operations and asks the user to choose
		std::cout << "Soustraire : 2\n";
		std::cout << "Multiplier : 3\n";
		std::cout << "Diviser : 4\n";
		std::cout << "Quitter : 5\n";
		std::cout << "Your choice?\n";
		std::cin >> choice;

		if (choice == 1) //if choice == 1 then we add the 2 numbers
		{
			result = number1 + number2;
			std::cout << number1 << " + " << number2 << " = " << result << "\n\n";
		}
		else if (choice == 2) //if choice == 2 we substract them
		{
			result = number1 - number2;
			std::cout << number1 << " - " << number2 << " = " << result << "\n\n";
		}
		else if (choice == 3) //if choice == 3 we multiply them
		{
			result = number1 * number2;
			std::cout << number1 << " * " << number2 << " = " << result << "\n\n";
		}
		else if (choice == 4) //if choice == 4 we divide them
		{
			if (number2 == 0)
			{
				std::cout << "Can't divide by 0\n";
			}
			else
			{
				result = number1 / number2;
				std::cout << number1 << " / " << number2 << " = " << result << "\n\n";
			}
		}
		else if (choice == 5)
		{
			quit = false;
		}
		else //a security if the user is feeling rebellious
		{
			std::cout << "Do it yourself!\n\n";
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}