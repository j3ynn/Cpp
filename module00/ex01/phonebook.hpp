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
