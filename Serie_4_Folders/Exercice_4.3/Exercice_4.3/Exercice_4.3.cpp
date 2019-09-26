#include<iostream>
#include<list>



int main()
{
	std::list <int> A = { 2, 6, 19, 32, 104, 110 };
	std::list <int> B = { 3, 8, 9, 10, 55, 105, 110 };
	std::list <int> C = { 1, 5, 6 };

	for (auto itB = B.begin(); itB != B.end(); itB++) //we loop for each element of B to place it in A
	{
		for (auto itA = A.begin(); itA != A.end(); itA++) //we test each element of A to place the element of B tested
		{												 //in the list
			if (*itB <= *itA) //we use pointers to get the values pointed by the iterators
			{
				A.insert(itA, *itB); //if the value in A is greater or equal to the value tested in B we insert
				break;				//the value in B in front of the value in A
			}
		}
	}

	std::cout << "After sorting, list A is now:\n";

	for (auto itA = A.begin(); itA != A.end(); itA++)
	{
		std::cout << *itA << "\n";
	}
	
	int i = 0; //i corrects the indexes given by C to fit when we erase an element of A

	for (auto itC = C.begin(); itC != C.end(); itC++) //to erase elements of A indexed by the elements of C
	{
			auto itA = A.begin();

			int index = *itC;

			if (index == 0) //if the first value of C is 1, we don't move the iterator in A and erase the value there
			{
				A.erase(itA);
			}
			else //if not we advance the iterator in A by the value in C corrected by i
			{
				advance(itA, index - i);

				A.erase(itA);
			}
		
			i++;
	}

	std::cout << "After erase list A is now:\n";

	for (auto itA = A.begin(); itA != A.end(); itA++)
	{
		std::cout << *itA << "\n";
	}

	system("pause");
	return EXIT_SUCCESS;
}