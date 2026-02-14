#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("salutantonio"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap " << _name << " constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap copy constructor called\n";
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap copy assignment operator called\n";
	if (this != &other)
	{
		_name = other._name;
		_HitPoints = other._HitPoints;
		_EnergyPoints = other._EnergyPoints;
		_AttackDamage = other._AttackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called\n";
}

void ClapTrap::attack(const std::string& target)
{
	if (_HitPoints == 0)
	{
		std::cout << _name << " is dead and can't attack!\n";
		return ;
	}
	if (_EnergyPoints == 0)
	{
		std::cout << _name << " has no energy to attack!\n";
		return ;
	}
	_EnergyPoints--; //-1 energia
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!\n";
		return ;
	}
	if (amount >= _HitPoints)
	{
		_HitPoints = 0;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage and dies!" << std::endl;
	}
	else
	{
		_HitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_HitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is dead and can't repair!\n";
		return ;
	}
	if (_EnergyPoints == 0)
	{
		std::cout <<  "ClapTrap " << _name << " has no energy to repair!\n";
		return ;
	}
	_EnergyPoints--; //costa 1 energia per ripararsi
	_HitPoints -= amount;
	std::cout << "ClapTrap " << _name << " repairs itself, recovering " << amount << " hit points!\n";
}
