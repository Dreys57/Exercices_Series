#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <limits>




int main()
{
	float a = std::numeric_limits<float>::infinity(); //numeric_limits let's us define a variable to infinity
	float b = std::numeric_limits<float>::infinity();
	float c = std::numeric_limits<float>::infinity();
	float d = std::numeric_limits<float>::infinity();
	float e = std::numeric_limits<float>::infinity();
	float f = std::numeric_limits<float>::infinity();
	float g = std::numeric_limits<float>::infinity();
	float h = std::numeric_limits<float>::infinity();
	float i = std::numeric_limits<float>::infinity();
	float j = std::numeric_limits<float>::infinity();

	std::array <float, 10> userInput{ a, b, c, d, e, f, g, h, i, j }; //we initialize the array with the variables above

	std::cout << "Please enter 10 numbers:\n";

	for (int i = 0; i < 10; i++)
	{
		std::cout << i + 1 << ". ";
		std::cin >> userInput[i];
	}

	std::cout << "The numbers above 0 are:\n";

	for (int i = 0; i < 10; i++)
	{
		if (userInput[i] > 0) //we test if the number at position i in the array is greater than 0
		{
			std::cout << userInput[i] << "\n"; //and if it is we display it 
		}
	}


	system("pause");
	return EXIT_SUCCESS;
}