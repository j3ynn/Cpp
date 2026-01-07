#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
	std::string _name;

	public:
	Zombie();//costruttore
	Zombie(std::string name);//costruttore con nome
	~Zombie();
	void setName(std::string name);
	void announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif
