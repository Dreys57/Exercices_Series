#include <iostream>
#include <vector>

unsigned int fib(int n)
{
	unsigned int fib1 = 0;
	unsigned int fib2 = 1;
	unsigned int fibn;
	unsigned int fibFinal;
	std::vector <unsigned int> fibonacci;
	
	if (n == 1)
	{
		fibonacci.push_back(fib1);
	}
	else if (n == 2)
	{
		fibonacci.push_back(fib2);
	}
	else
	{
		for (int i = 2; i < n; ++i) //the loop will put each fibonacci number at the end of the vector up to n values
		{
			fibn = fib1 + fib2;

			fibonacci.push_back(fibn);

			fib1 = fib2;
			fib2 = fibn;
		}
	}
	

	fibFinal = fibonacci.back(); //we stock the last variable of the vector in fibFinal and return it to main

	return fibFinal;
}


int main()
{
	unsigned int n; //the user gives the program which fibonacci number he wants
	unsigned int fibo; //the result returned by the fib function

	std::cout << "Please enter a number: ";
	std::cin >> n;

	fibo = fib(n);

	std::cout << "The fibonnacci number at position " << n << " is: " << fibo << "\n";

	system("pause");
	return EXIT_SUCCESS;
}