#include <iostream>
#include <algorithm>

int main()
{
	int a = 0; // the two variables the user will give + a third variable for the swap
	int b = 0;
	int temp = 0;

	std::cout << "Please enter 2 numbers:\n";

	std::cin >> a;
	std::cout << "a = " << a<<"\n";

	std::cin >> b;
	std::cout << "b = " << b<<"\n";

	temp = a; // we stock the value of a into the temp variable
	a = b; // a takes the value of b
	b = temp; // b takes the value of a stocked into temp

	std::cout << "Maintenant, a = " << a << " et b = " << b << "\n";

	return EXIT_SUCCESS;
}