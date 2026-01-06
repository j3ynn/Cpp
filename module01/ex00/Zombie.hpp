#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
	std::string _name;

	public:
	Zombie(std::string name);
	~Zombie();
	void announce (void);//annuncia zombie
};

Zombie* newZombie( std::string name );//crea , da un nome e puoi usarlo fuori dalla funzione
void randomChump( std::string name );//crea, da un nome e fa annunciare distruggi alla fine della funzione

#endif
