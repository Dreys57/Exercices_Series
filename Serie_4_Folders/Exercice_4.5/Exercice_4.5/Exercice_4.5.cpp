#include <iostream>
#include <array>
#include <time.h>

#define MAX_ROUNDS 12; //the number of tries allowed to the player

int TestColors(std::array<std::string, 4> ColorsComputer, std::array<std::string, 4> ColorsPlayer) //to test the tries
{
	int ColorsComparison = 0; //to get the win

	for (int i = 0; i < 4; i++)
	{
		if (ColorsPlayer[i] == ColorsComputer[i]) //if it is the right color and placed correctly display red
		{
			std::cout << i + 1 << " = red\n";
			ColorsComparison++;
		}
		else
		{
			for (int j = 0; j < 4; j++) //if not try to see if the color is in the combination and if it is display white
			{
				if (j == i)
				{
					break;
				}
				else if (ColorsPlayer[i] == ColorsComputer[j])
				{
					std::cout << i + 1 << " = white\n";
				}
				
			}
		}
	}

	return ColorsComparison;
}


int main()
{
	const int sizeArrays = 4;
	std::array <std::string, sizeArrays> ColorsComputer; //the colors the computer chooses
	std::array <std::string, sizeArrays> ColorsPlayer; //the colors the player chooses
	std::array <int, sizeArrays> ConstructCombination;

	srand(static_cast<unsigned int>(time(0)));	
	
	int roundCount = 1; //number of tries
	int maxRounds = MAX_ROUNDS;

	bool hasWon = false; //to know if the player won

	for (int i = 0; i < sizeArrays; i++) //to construct the solution chosen by the computer
	{
		ConstructCombination[i] = (rand() % 5); //puts a random number in each case

		switch (ConstructCombination[i]) //depending on the number, put a color in ColorsComputer
		{
			case 0:
			{
				ColorsComputer[i] = {'b', 'l', 'u', 'e'};
				break;
			}
			case 1:
			{
				ColorsComputer[i] = { 'o', 'r', 'a', 'n', 'g', 'e' };
				break;
			}
			case 2:
			{
				ColorsComputer[i] = { 'y', 'e', 'l', 'l', 'o', 'w' };
				break;
			}
			case 3:
			{
				ColorsComputer[i] = { 'v', 'i', 'o', 'l', 'e', 't' };
				break;
			}
			case 4:
			{
				ColorsComputer[i] = { 'b', 'l', 'a', 'c', 'k'};
				break;
			}
			case 5:
			{
				ColorsComputer[i] = { 'g', 'r', 'e', 'e', 'n'};
				break;
			}
		}
	}

	std::cout << "The colors are blue, orange, yellow, violet, black and green.\n\n";

	while (roundCount <= maxRounds && hasWon == false) //will stop if the player doesn't guess quickly enough or finds the answer
	{
		int ColorsComparison = 0;
		
		std::cout << "Please choose 4 colors:\n";

		for (int i = 0; i < sizeArrays; i++) //to get the player's colors
		{
			std::cin >> ColorsPlayer[i];
		}

		ColorsComparison = TestColors(ColorsComputer, ColorsPlayer); //test the colors to the combination

		if (ColorsComparison == 4) //if the player gets the 4 colors right
		{
			std::cout << "You have won in " << roundCount << " tries!\n";

			hasWon = true; //he wins
		}
		else if (roundCount == maxRounds && hasWon == false) //if he doesn't quickly enough
		{
			std::cout << "You have lost sorry!\n"; //he loses
		}
		else
		{
			std::cout << "Try again!\n";
		}

		roundCount++;

		system("pause");

	}




	system("pause");
	return EXIT_SUCCESS;
}