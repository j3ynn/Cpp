/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:02:43 by jbellucc          #+#    #+#             */
/*   Updated: 2025/12/17 14:12:37 by jbellucc         ###   ########.fr       */
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

void Phonebook::Add()
{
    std::cout << "‧˙✧aggiungi contatto˙✧˚‧\n";

    _contacts[_contact].setfirst(input("first name: "));
    _contacts[_contact].setfirst(input("last name: "));
    _contacts[_contact].setfirst(input("nickname: "));
    _contacts[_contact].setfirst(input("phone number: "));
    _contacts[_contact].setfirst(input("dark secret: "));
}