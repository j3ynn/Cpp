#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "FragTrap default constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "FragTrap " << _name << " constructor called\n";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called\n";
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap copy assignment operator called\n";
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destructor called\n";
}

void FragTrap::attack(const std::string& targhet)
{
	if (_HitPoints == 0)
	{
		std::cout << "FragTrap " << _name << " is dead and can't attack!\n";
		return ;
	}
	if (_EnergyPoints == 0)
	{
		std::cout << "FragTrap" << _name << " has no energy to attack!\n";
		return ;
	}
	_EnergyPoints--;
	std::cout << "FragTrap " << _name << " attacks " << targhet << ", causing " << _AttackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " requests a positive high five!\n";
}
