#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
	int _fixpoint;
	static const int _bits = 8;

	public:
	Fixed();
	Fixed(const Fixed& other);
	~Fixed();
	Fixed& operator=(const Fixed& other);

	int getRawBits() const;
	void setRawBits(int raw);
	//ex01
	Fixed(const int n); // Costruttore da intero
	Fixed(const float f); // Costruttore da float
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
