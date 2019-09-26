#include <iostream>

#define MAX_NUMBER 1000;

int main()
{
	int sum = 0; //the sum of all the multiples of 3 or 5
	const int maxNumber = MAX_NUMBER;

	for (int i = 3; i < maxNumber; i++) //test if i is a multiple of 3 or 5 and if it is, it is added to sum
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	std::cout << "The sum of multiples of 3 and 5 = " << sum << "\n";

	system("pause");
	return EXIT_SUCCESS;
}