#include <iostream>

int main()
{
	int n; //the number entered by the user
	bool isPrime = true; //to tell if n is prime or not

	std::cout << "Please enter a number: ";
	std::cin >> n;

	for (int i = 2; i <= n / 2; ++i) //i is set to 2 because every number is divisible by 1 and we go to n/2 because 
	{								//there's no point going over
		if (n % i == 0) //if n % i returns 0 we know there is no rest to the division so n is divisible by i
		{
			isPrime = false; //in that case we set isPrime as false
			break;
		}
	}

	if (isPrime) //if isPrime is true n is a prime number if isPrime is false, n isn't
	{
		std::cout << "This is a prime number\n";
	}
	else
	{
		std::cout << "This is not a prime number\n";
	}

	system("pause");
	return EXIT_SUCCESS;
}