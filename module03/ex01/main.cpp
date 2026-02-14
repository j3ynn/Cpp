#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "✧test 1 default constructor :\n";
	ClapTrap defaulTrap("sandro");
	defaulTrap.attack("laurapausini");
	defaulTrap.takeDamage(3);
	defaulTrap.beRepaired(2);
	std::cout << "\n";
	std::cout << "✧test 2 ScaveTrap default constructor :\n";
	ScavTrap defaulTrapS("Roberto");
	defaulTrapS.attack("iginiomassari");
	defaulTrapS.takeDamage(20);
	defaulTrapS.beRepaired(15);
	std::cout << "\n";
	std::cout << "✧test 3 ScavTrap guardGate :\n";
	ScavTrap guardTrap("christian");
	guardTrap.guardGate();
	guardTrap.attack("jackie o'");
	guardTrap.guardGate();
	std::cout << "\n";
	std::cout << "✧test 4 ScavTrap copy constructor :\n";
	ScavTrap copyTrap("copy");
	copyTrap.attack("suca");
	ScavTrap copied(copyTrap);
	copied.attack("casu");
	std::cout << "\n";
	std::cout << "✧test 5 ScavTrap assignment operator :\n";
	ScavTrap assignTrap;
	assignTrap = defaulTrapS;
	assignTrap.guardGate();
	assignTrap.attack("fine");
	return 0;
}
