#include "phonebook.hpp"

Phonebook::Phonebook() :_count(0),_index(0)
{
}

Phonebook::~Phonebook()
{
}

//Legge una stringa da input finché l’utente non ne inserisce una
static std::string input(std::string prompt)
{
	std::string input;

	std::cout << prompt;
	std::getline(std::cin, input);
	while (input.empty())
	{
		std::cout << "invalid input\n";
		if (std::cin.eof())
			exit (0);
		std::cout << prompt;
		std::getline(std::cin, input);
	}
	return input;
}

void Phonebook::Add()
{
	std::cout << "‧˙✧add contact˙✧˚‧\n";

	if (_count <= 8)
	{
		_contacts[_index].setfirst(input("✧first name: "));
		_contacts[_index].setlast(input("˚last name: "));
		_contacts[_index].setnick(input("˙nickname: "));
		_contacts[_index].setphone(input("✧phone number: "));
		_contacts[_index].setdark(input("‧dark secret: "));
		_index = (_index + 1) % 8;	//Se _index è 7, (7 + 1) % 8 = 0
		if (_count < 8)
			_count ++;
	}
	return;
}
//taglia le stringhe troppo lunghe , a 10 caratteri
static std::string truncate(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void Phonebook::Search() const
{
	std::string input;
	int i;//contatore ciclo
	int index;//numero del contatto
	
	
	if (_count == 0)
	{
		std::cout << "phonebook is empty✧\n";
		return ;
	}
	std::cout   << "|--------------Contact Display--------------|\n"
				<< "|-------------------------------------------|\n"
				<< "|     Index|First Name| Last Name|  Nickname|\n"
				<< "|-------------------------------------------|\n";
	i = 0;
	while (i < _count)
	{
		std::cout << std::setw(10) << i << "|"
				  << std::setw(10) << truncate(_contacts[i].getfirst()) << "|"
				  << std::setw(10) << truncate(_contacts[i].getlast()) << "|"
				  << std::setw(10) << truncate(_contacts[i].getnick()) << std::endl;
		i++;
	}
	std::cout << "\n";
	std::cout << "˚‧enter index: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(0);
	if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
		index = input[0] - '0';
	else
	{
		std::cout << "✧invalid index: Not a valid number!‧" << std::endl;
		return;
	}
	if (index >= _count)
	{
		std::cout << "✧invalid index: Index does not exist!‧" << std::endl;
		return;
	}
	std::cout << "✧first name: " << _contacts[index].getfirst() << std::endl;
	std::cout << "˚last name: " << _contacts[index].getlast() << std::endl;
	std::cout << "˙nickname: " << _contacts[index].getnick() << std::endl;
	std::cout << "✧phone number: " << _contacts[index].getphone() << std::endl;
	std::cout << "‧darkest secret: " << _contacts[index].getdark() << std::endl;
}