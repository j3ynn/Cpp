#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << _name << " Zombie created\n";
}

Zombie::~Zombie()
{
	std::cout << _name << "Zombie deleted\n";
}

void Zombie::announce (void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}
