#include <iostream>

#define MAX_FIBONACCI 4000000;

int main()
{
	const unsigned int maxFibonacci = MAX_FIBONACCI; //to stop the loop when it reaches 4'000'000
	unsigned long int sum = 0; //the sum of even fibonacci numbers
	unsigned int fib0 = 0; //the first number of fibonacci that we will then increase to get the next numbers
	unsigned int fib1 = 1;//the second number of fibonacci that we will then increase to get the next numbers
	unsigned int fibn; //the sum of the two previous variables

	for (unsigned int i = 2; i < maxFibonacci; ++i) //we loo until we get to 4'000'000
	{
		fibn = fib0 + fib1; //we add fib0 and fib1 to get the next number in fibonacci's series

		if (fibn % 2 == 0) //if fibn is even we add it to sum
		{
			sum += fibn;
		}

		fib0 = fib1; //the two next steps swap the variables to get ready for another loop and get the next number in the series
		fib1 = fibn;
	}

	std::cout << "The sum of Fibonacci's suite's even numbers is: " << sum << "\n";

	system("pause");
	return EXIT_SUCCESS;
}