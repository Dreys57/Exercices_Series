#include <iostream>

int main()
{
	std::string phrase1 = "Voici un exercice qui va me rendre ch"; //each phrasei variable is a part of the text that
	std::string phrase2 = "vre\n"; // doesn't have a special character lik é or à
	std::string phrase3 = "Pour le r";
	std::string phrase4 = "ussir je dois utiliser du code ASCII tout en n'oubliant pas les retours ";
	std::string phrase5 = " la ligne. Bref ça\n";
	std::string phrase6 = "me saoule comme exercice.\n";

	std::string sentence = phrase1 + char(138) + phrase2 + phrase3 + char(130) + phrase4 + char(133) + phrase5 + phrase6;
	//we concatenate every phrasei variable with the corresponding special character when necessary using char(ASCII number)
	std::cout << sentence;

	return EXIT_SUCCESS;
}