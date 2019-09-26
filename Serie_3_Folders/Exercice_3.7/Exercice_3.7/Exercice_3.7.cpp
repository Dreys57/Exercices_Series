#include <iostream>

#define MAX_NUMBER 1000;

int Multiples(int test) //the function will do the sum of 3 or 5 multiples
{
	const int maxNumber = MAX_NUMBER;
	int sum = 0;
	

	if (test < maxNumber) //we make sure i is inferior to maxNumber
	{
		if (test % 3 == 0 || test % 5 == 0) //if n is a multiple of 3 or 5 we add it to sum and we call the function with n + 1
		{
			sum += test;
			sum += Multiples(++ test);

		}
		else //if not we just call the function with n + 1 until n = maxNumber
		{
			sum += Multiples(++ test);
		}
	}
	
	return sum; //returns the result of the sum of the multiples
}

int main()
{
	int sum; //the sum of all the multiples of 3 or 5
	const int maxNumber = MAX_NUMBER;
	int test = 0; //the variable we will increase to test if it is a multiple of 3 or 5 or not

	sum = Multiples(test);

	std::cout << "The sum of 3 or 5 multiples up to " << maxNumber << " is: " << sum << "\n";

	system("pause");
	return EXIT_SUCCESS;
}