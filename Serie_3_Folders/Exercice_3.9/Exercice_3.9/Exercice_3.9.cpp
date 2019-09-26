#include<iostream>


void HanoiTower(int n, char Sour, char Aux, char Des) //the function to solve the tower of Hanoi
{
	if (n == 1) //if there is one disc we only have to move the disk from source to destination
	{
		std::cout << "Move Disk " << n << " from " << Sour << " to " << Des << "\n";
		return; //to avoid stack overflow
	}

	HanoiTower(n - 1, Sour, Des, Aux); //recursion of this function will make parts of the movements (you have to visualize it to understand)

	std::cout << "Move Disk " << n << " from " << Sour << " to " << Des <<"\n";

	HanoiTower(n - 1, Aux, Sour, Des); //recursion of this function will make parts of the movements (you have to visualize it to understand)
}



int main()
{
	int n;

	std::cout << "Enter number of disks:";
	std::cin >> n;

	HanoiTower(n, 'A', 'B', 'C');

	system("pause");
	return EXIT_SUCCESS;
}