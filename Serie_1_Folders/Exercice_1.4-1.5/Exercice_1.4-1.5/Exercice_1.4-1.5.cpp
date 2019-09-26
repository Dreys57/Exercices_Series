#define _USE_MATH_DEFINES //used to get the variable of pi

#include <iostream>
#include <math.h> // used to get access to the trigonometrical functions

/* Exercice 1.4
int main()
{
	float area = 0;
	float perimeter = 0;
	int radius = 0;

	std::cout << "Give a number for the circle's radius: ";

	std::cin >> radius;


	float SquareRadius = pow(radius, 2);

	area = 2 * M_PI * SquareRadius;


	perimeter = 2 * M_PI * radius;


	std::cout << "The area of the circle with a radius of " << radius << " is: " << area<<"\n";

	std::cout << "The perimeter of the circle with a radius of " << radius << " is: " << perimeter << "\n";

	return EXIT_SUCCESS;
}

*/

int UserInputCircle() //this function askes the user for a number for the radius
{
	int radius = 0;

	std::cout << "Give a number for the circle's radius: ";

	std::cin >> radius;

	return radius;
}

float AreaCircle(int radius) // this function takes the user input for the radius and calculates the circle's area
{
	float area = 0;

	float SquareRadius = pow(radius, 2);

	area = 2 * M_PI * SquareRadius;

	return area;
}

float PerimeterCircle(int radius) //this function takes the user input for the radius to calculates the circle's perimeter
{
	float perimeter = 0;

	perimeter = 2 * M_PI * radius;

	return perimeter;
}

int main()
{
	int radius = UserInputCircle(); //gets the user input for the radius

	float area = AreaCircle(radius); // calculates the circle's area

	float perimeter = PerimeterCircle(radius); // calculates the circle's perimeter

	std::cout << "The area of the circle with a radius of " << radius << " is: " << area<<"\n";

	std::cout << "The perimeter of the circle with a radius of " << radius << " is: " << perimeter << "\n";
	
	return EXIT_SUCCESS;
}