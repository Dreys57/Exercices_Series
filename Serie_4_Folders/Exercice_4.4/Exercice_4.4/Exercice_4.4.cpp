#include <iostream>
#include <time.h>
#include <vector>


void DragonAttack(std::vector<int>& PigsHealth, int& PigsDead) //the dragon attacks a random pig and deals between 5 and 20 damages.
{
	srand(static_cast<unsigned int>(time(0))); //to seed a random number

	const int maxDamageDragon = 16; //the maximum damage the dragon can do (it is not 20 for convenience when limiting the random number
	int sizePigs = 10; //the number of pigs there is

	int randomNumber = rand();
	int randomNumberPig = (randomNumber % sizePigs) + 1; //to get a random pig to be attacked (rand % 5) + 1
	int randomDragonDamage = (randomNumber % maxDamageDragon) + 5; //random damages done by tha dragon (rand % 16) + 5
	int NumberPig = randomNumberPig; //assign the random number to a value
	int DragonDamage = randomDragonDamage; //same for the damages

	for (int i = 0; i < sizePigs; i++)
	{
		if (PigsHealth[i] <= 0) //if the pig is dead, he can't be attacked
		{
			break;
		}
		else //if he is alive, the dragon attacks
		{
			PigsHealth[NumberPig] -= DragonDamage;
		}
	}

	std::cout << "The dragon attacked the pig number " << NumberPig << " and dealt " << DragonDamage << " damages.\n";

	for (int i = 0; i < sizePigs; i++)
	{
		if (PigsHealth[i] <= 0) //if the pig is dead, we display that he is
		{
			std::cout << "The pig number " << i << " is dead.\n";

			PigsDead++; //we add a value to this variable to tell the program when every pig is dead
		}
	}
} 


void PigsAttack(int& DragonHealth, std::vector<int> PigsHealth) //the pigs attack the dragon
{
	srand(static_cast<unsigned int>(time(0)));

	const int maxDamagePigs = 5;
	const int sizePigs = 10;

	int randomNumber = rand();
	int randomPigsDamage = (randomNumber % maxDamagePigs) + 1; //(rand % 5) + 1
	int PigsDamage = randomPigsDamage; //we assign the pigs damages to a variable
	int sumDamagePigs = 0; //the sum of all the damages the pigs do to the dragon

	for (int i = 0; i < sizePigs; i++)
	{
		if (PigsHealth[i] <= 0) //if the pig is dead, he can't attack
		{
			break;
		}
		else
		{
			DragonHealth -= PigsDamage; //we substract the damages to the dragon's health
			
			sumDamagePigs += PigsDamage; //we add the damages done to dragon
		}
	}

	std::cout << "The pigs attacked the dragon and dealt " << sumDamagePigs << "\n";
}



int main()
{
	std::vector <int> PigsHealth{ 10, 10, 10, 10, 10, 10, 10, 10, 10 ,10 }; //the pigs

	int PigsDead = 0; //to know when all pigs are dead
	int DragonHealth = 100; //the dragon
	int RoundNumber = 1; //to get the number of rounds

	bool isAliveP = true; //to know if the pigs lost
	bool isAliveD = true; //or if the dragon did



	while (isAliveD == true && isAliveP == true) //the loop will stop when one of the 2 teams are dead
	{
		std::cout << "Round " << RoundNumber << "\n";

		DragonAttack(PigsHealth, PigsDead);

		PigsAttack(DragonHealth, PigsHealth);

		if (PigsDead == 10) //if all pigs are dead, the dragon won.
		{
			std::cout << "All pigs are dead. The dragon has won.\n";

			isAliveP = false; //we set it to false to stop the loop
		}
		else if (DragonHealth <= 0) //if the dragon die, the pigs win
		{
			std::cout << "The pigs have slain the dragon. They win.\n";

			isAliveD = false; //we set it to false to stop the loop
		}

		RoundNumber++; //we incerement the number of rounds each loop

		system("pause");
	}

	return EXIT_SUCCESS;
	
}