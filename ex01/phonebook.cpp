/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:02:43 by jbellucc          #+#    #+#             */
/*   Updated: 2025/12/17 15:34:58 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
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
//aggiungi un nuovo contatto
void Phonebook::Add()
{
	std::cout << "‧˙✧add contact˙✧˚‧\n";

	_contacts[_index].setfirst(input("✧first name: "));
	_contacts[_index].setfirst(input("˚last name: "));
	_contacts[_index].setfirst(input("˙nickname: "));
	_contacts[_index].setfirst(input("✧phone number: "));
	_contacts[_index].setfirst(input("‧dark secret: "));
	_index = (_index + 1) % 8;	//Se _index è 7, (7 + 1) % 8 = 0

	if (_count < 8)
		_count ++;
}

//mostra i contatti
void Phonebook::Search() const
{
	std::cout   << "|--------------Contact Display--------------|\n"
				<< "|-------------------------------------------|\n"
				<< "|     Index|First Name| Last Name|  Nickname|\n"
				<< "|-------------------------------------------|\n";
}