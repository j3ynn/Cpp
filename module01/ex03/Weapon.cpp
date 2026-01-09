#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

void Weapon::settype(std::string type)
{
    _type = type;
}

std::string Weapon::gettype() const
{
    return(_type);
}