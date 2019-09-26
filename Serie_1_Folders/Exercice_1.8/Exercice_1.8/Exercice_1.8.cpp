#include <iostream>

int main()
{
	const int MAX_ARRAY = 10; // a constant to stock the max number of character in the array.
	char surname[MAX_ARRAY]; // the array taking the last name of the person
	char firstName[MAX_ARRAY]; // the array taking the last name of the person

	std::cout << "Enter your first name: ";
	std::cin >> firstName;

	std::cout << "Enter your last name: ";
	std::cin >> surname;

	std::cout << "Your initials are: " << firstName[0] << surname[0] << "\n"; // We take the first character in the array 
	//of each name and put them together

	return EXIT_SUCCESS;
}