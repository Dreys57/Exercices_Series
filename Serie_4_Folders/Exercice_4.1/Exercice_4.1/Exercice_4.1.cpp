#include<iostream>
#include <array>

int minimum(std::array <int,10> input) //calculate the minimum of the array
{
	int min;
	min = input[0]; //we stock the first number in the array as min

	for (int i = 1; i < 10; i++) //we test if each subsequent number in the array is lesser than min and if it is
	{							// we make it the new min
		if (input[i] < min)
		{
			min = input[i];
		}

	}

	return min;
}


int maximum(int max, std::array <int, 10> input) //calculate the maximum of tha array
{
	for (int i = 1; i < 10; i++) //we do the same tactic as for the minimum, but we go from the minimum we found before
	{							//and we work up toward the maximum
		if (input[i] > max)
		{
			max = input[i];
		}
	}

	return max;
}


int main()
{
	int max;
	int maxInput;
	int minInput;

	std::array <int, 10> userInput;

	std::cout << "Please enter 10 numbers:\n";

	for (int i = 0; i < 10; i++)
	{
		std::cout << i + 1 << ". ";
		std::cin >> userInput[i];
	}

	minInput = minimum(userInput); //the minimum

	max = minInput; //we initiallize the max as min so we don't miss on a number in the array

	maxInput = maximum(max, userInput); //the maximum

	std::cout << "The minimum of the array of numbers is " << minInput << " and the maximum is " << maxInput << "\n";


	system("pause");
	return EXIT_SUCCESS;
}