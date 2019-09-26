#include <iostream>

int seriesConstruct(int n) //to create the series
{
	int temp; //variable we will return as the result of u(n)

	if (n == 0) // if n = 0 we know u(0) = 3
	{
		temp = 3;
	}
	else
	{
		temp = 3 * seriesConstruct(n - 1) + 4; //we use the recursion to call the function with n - 1 until n = 0 and the
	}										   //computer will work his way back up to u(n)

	return temp;
}


int main()
{
	int n;
	int series;

	std::cout << "Please enter a number: ";
	std::cin >> n;

	series = seriesConstruct(n); // we stock the result returned from the function into series

	std::cout << "u(" << n << ") = " << series << "\n";

	system("pause");
	return EXIT_SUCCESS;
}