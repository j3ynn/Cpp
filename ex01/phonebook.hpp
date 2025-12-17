/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:02:50 by jbellucc          #+#    #+#             */
/*   Updated: 2025/12/17 14:07:31 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <string>
#include <iostream>

class Phonebook
{
	private:
	Contact _contacts[8];
	int		_count;//numero dei contatti max 8
	int		_contact;//dove inserire il contatto
	
	public:
	Phonebook();
	~Phonebook();

	void	Add();//aggiunge un contatto
	void	Search() const;//cerca e mostra i contatti 
};

#endif
