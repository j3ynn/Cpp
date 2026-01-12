#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	private:
	std::string _name;
	Weapon& weapon; //Human fa una referenza a weapon , quindi non puo esistere senza arma

	public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void attack();
};

#endif
