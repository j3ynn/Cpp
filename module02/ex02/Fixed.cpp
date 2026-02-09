#include "Fixed.hpp"

Fixed::Fixed() : _fixpoint(0)
{
	//std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other)
{
	//std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& other)
{
	//std::cout << "Copy assignment operator called\n";
	_fixpoint = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
	//std::cout << "getRawBits called\n";
	return (_fixpoint);
}

void Fixed::setRawBits(int raw)
{
	//std::cout << "setRawBits called\n";
	_fixpoint = raw;
}

Fixed::Fixed(const int n)
{
	//std::cout << "Int constructor called\n";
	_fixpoint = n << _bits;
}

Fixed::Fixed(const float f)
{
	///std::cout << "Float constructor called" << std::endl;
	_fixpoint = roundf(f * (1 << _bits));
}

float Fixed::toFloat(void) const
{
	return (float)_fixpoint / (1 << _bits);
}

int Fixed::toInt(void) const
{
	return _fixpoint >> _bits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

bool Fixed::operator<(const Fixed& other) const
{
	return this->_fixpoint < other._fixpoint;
}

bool Fixed::operator>(const Fixed& other) const
{
	return this->_fixpoint > other._fixpoint;
}

bool Fixed::operator>=(const Fixed& other) const
{
	return this->_fixpoint >= other._fixpoint;
}

bool Fixed::operator<=(const Fixed& other) const
{
	return this->_fixpoint <= other._fixpoint;
}

bool Fixed::operator==(const Fixed& other) const
{
	return this->_fixpoint == other._fixpoint;
}

bool Fixed::operator!=(const Fixed& other) const
{
	return this->_fixpoint != other._fixpoint;
}

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed result;
	result.setRawBits(this->_fixpoint + other.getRawBits());
	return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed result;
	result.setRawBits(this->_fixpoint - other.getRawBits());
	return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed result;
	result.setRawBits((int)(((long)this->_fixpoint * (long) other.getRawBits()) >> this->_bits));
	return result;
}

Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed result;
	result.setRawBits((int)(((long)this->_fixpoint / (long) other.getRawBits()) >> this->_bits));
	return result;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) 
{
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b) ? a : b;
}

Fixed& Fixed::operator++()
{
	_fixpoint++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	_fixpoint++;
	return temp;
}

Fixed& Fixed::operator--()
{
	_fixpoint--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	_fixpoint--;
	return temp;
}