/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:03:01 by jbellucc          #+#    #+#             */
/*   Updated: 2025/12/16 14:03:02 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::setfirst(std::string firstname)
{
	_firstname = firstname;
}

void Contact::setlast(std::string lastname)
{
	_lastname = lastname;
}

void Contact::setnick(std::string nickname)
{
	_nickname = nickname;
}

void Contact::setphone(std::string phonenumber)
{
	_phonenumber = phonenumber;
}

void Contact::setdark(std::string darksecret)
{
	_darkestsecret = darksecret;
}

std::string Contact::getfirst() const
{
	return (_firstname);
}

std::string Contact::getlast() const
{
	return (_lastname);
}

std::string Contact::getnick() const
{
	return (_nickname);
}

std::string Contact::getphone() const
{
	return (_phonenumber);
}

std::string Contact::getdark() const
{
	return (_darkestsecret);
}
