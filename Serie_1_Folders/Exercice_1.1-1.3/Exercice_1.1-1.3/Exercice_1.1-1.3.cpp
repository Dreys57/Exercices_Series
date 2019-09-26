#include <iostream> // inclus la libraire pour avoir accès à cout et cin

/*
	Ce programme fait les choses suivantes
		- Demande l'âge à l'utilisateur
		- Prend la valeur donnée par l'utilisateur dans la variable age
		- Affiche la valeur sur l'écran

*/

int main() // la fonction principale
{
	int age = 0; // variable pour l'âge de l'utilisateur intitialisée à 0

	std::cout << "How old are you?\n"; // Demande l'âge de l'utilisateur

	std::cin >> age; // l'utilisateur rentre son âge

	std::cout << "You are " << age << " years old\n"; // affiche l'âge de la personne

	return EXIT_SUCCESS; // retourne la valeur 0
}