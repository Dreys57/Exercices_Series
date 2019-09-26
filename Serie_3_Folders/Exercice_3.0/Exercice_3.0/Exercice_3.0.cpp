#include <iostream>



int main()
{
	int sum = 0;  //the sum of the 5 numbers
	float Div = 5.0f; //the denominator, set as a float to get a float answer as average
	float avg;  //the average of the numbers

	std::cout << "Please enter 5 numbers:\n";

	for (int i = 0; i < 5; i++) //will ask a number to the user each loop and add it to sum
	{
		int temp;

		std::cout << i + 1 << ". ";
		std::cin >> temp;
		sum += temp;
	}

	avg = sum / Div; //to calculate the average, we take the sum and divide it by the numbers of numbers

	std::cout << "The average of those numbers is " << avg << "\n";

	system("pause");
	return EXIT_SUCCESS;

}