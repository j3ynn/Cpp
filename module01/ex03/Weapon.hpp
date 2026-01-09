#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:
    std::string _type;

    public:
	Weapon();
	~Weapon();
    void settype(std::string type);
    std::string gettype() const;

};

#endif