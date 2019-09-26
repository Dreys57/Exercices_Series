#include <iostream>
#include <cstdlib>


int main()
{
	float height; // the height and length variable are the user input for the field's area stored in the field variable
	float length;
	float field;
	float fieldLeft; // this variable will give us the area left of the field after we put the maximum number of cows in it
	float spaceForCows = 2.5; // this is the space necessary for a cow to live
	int cows; // number of cows chose randomly but lesser than the maxCows variable value
	int maxCows; //the maximum number of cows possible in the field
	int randomNumber = rand(); //a random number
	int addedCows; //the number of cows we can add in the field after the cows variable is set


	std::cout << "Please enter a length and height for your field:\n";

	std::cout << "length = ";
	std::cin >> length;

	std::cout << "height = ";
	std::cin >> height;

	field = height * length; //calculates the area of the field

	maxCows = field / spaceForCows; //calculates the maximum number of cows possible in the field

	cows = (randomNumber % maxCows) + 1; //creates a random number of cows limited to the maxCows value

	addedCows = maxCows - cows; //calculates the number of cows we can add to

	fieldLeft = field - (maxCows * spaceForCows);

	std::cout << "We gathered the following informations:\n";
	std::cout << "- The field area is of " << field << "m^2\n";
	std::cout << "- The maximum number of cows in the field is " << maxCows << "\n";
	std::cout << "- The number of cows at the start was of " << cows << " cows\n";
	std::cout << "- The number of cows we can add to the pack is " << addedCows << "\n";
	std::cout << "- Finally, the space of the field left free is of " << fieldLeft << "m^2\n";


	system("pause");
	return EXIT_SUCCESS;
}