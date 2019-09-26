#include <iostream>

int fib(int n)
{
	int fibonacci; //the returned value of the function

	if (n == 1) //if n = 1 it's the first position in the fibonacci series so 0
	{
		fibonacci = 0;
	}
	else if (n == 2) // if n = 2 it's 1
	{
		fibonacci = 1;
	}
	else //if n > 2 we call the function again to calculate fib(n - 1) and fib(n - 2) and it will continue until we get to 1 and 2
	{
		fibonacci = fib(n - 1) + fib(n - 2);
	}

	return fibonacci;
}


int main()
{
	int n; //the user gives the program which fibonacci number he wants
	int fibo; //the result returned by the fib function

	std::cout << "Please enter a number: ";
	std::cin >> n;

	fibo = fib(n);

	std::cout << "The fibonnacci number at position " << n << " is: " << fibo << "\n";

	system("pause");
	return EXIT_SUCCESS;
}