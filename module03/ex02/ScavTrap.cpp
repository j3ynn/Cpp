#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "ScavTrap " << _name << " constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called\n";
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap copy assignment operator called\n";
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destructor called\n";
}

void ScavTrap::attack(const std::string& targhet)
{
	if (_HitPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " is dead and can't attack!\n";
		return ;
	}
	if (_EnergyPoints == 0)
	{
		std::cout << "ScavTrap" << _name << " has no energy to attack!\n";
		return ;
	}
	_EnergyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << targhet << ", causing " << _AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!\n";
}
