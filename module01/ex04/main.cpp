#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "errore pochi argomenti !!!\n";
		return 1;
	}

	std::string filename = av[1];
	std::string s1 = av[2]; //stringa da cercare
	std::string s2 = av[3]; //stringa con cui sostituire

	if (s1.empty())
	{
		std::cout << "errore s1 vuoto !!!\n";
		return 1;
	}

	std::ifstream inFile(filename.c_str());

	if (!inFile.is_open())
	{
		std::cout << "errore file non aperto !!!\n";
		return 1;
	}

	std::string outFileName = filename + ".replace";
	std::ofstream outFile(outFileName.c_str());

	if (!outFile.is_open())
	{
		std::cout << "errore file non creato !!!" << outFileName << std::endl;
		inFile.close();
		return 1;
	}

	std::string save; //variabile che salva ogni riga

	while (std::getline(inFile, save))
	{
		size_t position = 0; //numero di caratteri da prendere
		while ((position = save.find(s1, position)) != std::string::npos)
		{
			save = save.substr(0, position) + s2 + save.substr(position + s1.length());
			position += s2.length();
		}
		outFile << save << std::endl;
	}
	inFile.close();
	outFile.close();

	std::cout << "file creato " << outFileName << std::endl;
	return 0;
}
