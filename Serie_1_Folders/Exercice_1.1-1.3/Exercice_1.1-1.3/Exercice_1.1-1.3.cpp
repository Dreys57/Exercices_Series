#include <iostream> // inclus la libraire pour avoir acc�s � cout et cin

/*
	Ce programme fait les choses suivantes
		- Demande l'�ge � l'utilisateur
		- Prend la valeur donn�e par l'utilisateur dans la variable age
		- Affiche la valeur sur l'�cran

*/

int main() // la fonction principale
{
	int age = 0; // variable pour l'�ge de l'utilisateur intitialis�e � 0

	std::cout << "How old are you?\n"; // Demande l'�ge de l'utilisateur

	std::cin >> age; // l'utilisateur rentre son �ge

	std::cout << "You are " << age << " years old\n"; // affiche l'�ge de la personne

	return EXIT_SUCCESS; // retourne la valeur 0
}