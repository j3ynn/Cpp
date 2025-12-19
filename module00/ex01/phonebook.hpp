/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:02:50 by jbellucc          #+#    #+#             */
/*   Updated: 2025/12/19 11:57:38 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

class Phonebook
{
	private:
	Contact _contacts[8];
	int		_count;//numero dei contatti max 8
	int		_index;//dove inserire il contatto
	
	public:
	Phonebook();
	~Phonebook();

	void	Add();//aggiunge un contatto
	void	Search() const;//cerca e mostra i contatti 
};

#endif
