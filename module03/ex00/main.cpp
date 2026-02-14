#include "ClapTrap.hpp"

int main()
{
	std::cout << "✧test 1 default constructor :\n";
	ClapTrap defaulTrap;
	defaulTrap.attack("luca");
	defaulTrap.takeDamage(5);
	defaulTrap.beRepaired(3);
	std::cout << "\n";
	std::cout << "✧test 2 constructor name :\n";
	ClapTrap nameTrap("fabio");
	nameTrap.attack("dominic");
	nameTrap.takeDamage(2);
	nameTrap.beRepaired(3);
	nameTrap.attack("dominic");
	std::cout << "\n";
	std::cout << "✧test 3 copy constructor :\n";
	ClapTrap copyTrap(defaulTrap);
	copyTrap.takeDamage(5);
	copyTrap.attack("luca");
	std::cout << "\n";
	std::cout << "✧test 4 copy assignment operator :\n";
	ClapTrap assingTrap;
	assingTrap = defaulTrap;
	assingTrap.attack("suca");
	return 0;
}
