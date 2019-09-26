#include <iostream>



int main()
{
	float a; // a, b and c are the three constants of the quadratic equation demanded of the user
	float b;
	float c;
	float delta; // delta is the discriminant of the quadratic equation
	float solution1; // solutioni are the solutions to the quadratic equation
	float solution2;

	std::cout << "Please choose three numbers for a, b and c:\n"; //asking a, b and c to the user
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	std::cout << "c = ";
	std::cin >> c;

	delta = (pow(b, 2)) - (4 * a * c); // calculating the discriminant

	if (a == 0 && b == 0) //if a and b equal 0 there are no solutions
	{
		std::cout << "There is no solution.\n";
	}
	else if (a == 0) //if only a equals 0 the solution is a first degree equation solution, which is (-c)/b
	{
		solution1 = (-c) / b;
		std::cout << "There is only one solution and it is " << solution1<<"\n";
	}
	else if (delta < 0) //if delta is negative there are no real answers, only complex ones
	{
		std::cout << "There is no real solution.\n";
	}
	else //and if a, b and delta are positive, the solutions are classical quadratic equation solutions as seen below
	{
		solution1 = ((-b) + sqrt(delta)) / (2 * a);
		solution2 = ((-b) - sqrt(delta)) / (2 * a);

		std::cout << "There are 2 solutions and they are " << solution1 << " and " << solution2<<"\n";
	}

}