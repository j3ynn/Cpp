#include "phonebook.hpp"

int main()
{
    Phonebook phonebook;
    std::string command;
    std::cout << "‧˙✧phonebook˙✧˚‧\n";
    std::cout << "˚ADD\n";
	std::cout << "‧SEARCH\n";
	std::cout << "✧EXIT\n";
	while (true)
	{
		std::cout << "✧ ";
		std::getline(std::cin, command);
		if (std::cin.eof())
		{
			std::cout << "\nbye✧˚‧";
			break ;
		}
		if (command == "ADD" || command == "add")
		{
			phonebook.Add();
			std::cout << "\n";
			std::cout << "˚‧menu\n";
		}
		else if (command == "SEARCH" || command == "search")
		{
			phonebook.Search();
			std::cout << "\n";
			std::cout << "˚‧menu\n";
		}
		else if (command == "EXIT" || command == "exit")
		{
			std::cout << "\nbye✧˚‧";
			break ;
		}
	}
	return (0);
}