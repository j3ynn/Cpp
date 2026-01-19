#include "Fixed.hpp"

Fixed::Fixed() : _fixpoint(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called\n";
	_fixpoint = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits called\n";
	return (_fixpoint);
}

void Fixed::setRawBits(int raw)
{
	std::cout << "setRawBits called\n";
	_fixpoint = raw;
}
