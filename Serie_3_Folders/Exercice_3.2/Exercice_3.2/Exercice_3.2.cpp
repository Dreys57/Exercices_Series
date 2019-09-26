#include <iostream>



int main()
{
	unsigned int n; //the number the user enters
	unsigned long long factorial = 1; //the result of the factorial; it is set at 1 because the factorial of 0 and 1 is 1

	std::cout << "Please enter a number: ";
	std::cin >> n;

	for (int i = 1; i <= n; i++) //for each loop, we multiply factorial by i, starting at 1 and increasing by 1 each loop
	{
		factorial *= i;
	}

	std::cout << n << "! = " << factorial << "\n";

	system("pause");
	return EXIT_SUCCESS;

}