#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
	int _fixpoint; //valore raw
	static const int _bits = 8;

	public:
	Fixed();
	Fixed(const Fixed& other); //costruttore di copia
	~Fixed();
	Fixed& operator=(const Fixed& other); //assegnazione di copia

	int getRawBits() const;
	void setRawBits(int raw);
};

#endif
