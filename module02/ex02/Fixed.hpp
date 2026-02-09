#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

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
	//ex01
	Fixed(const int n); // Costruttore da intero
	Fixed(const float f); // Costruttore da float
	float toFloat(void) const;
	int toInt(void) const;
	//ex02
	bool operator>(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;
	Fixed operator+(const Fixed& other) const;
	Fixed operator-(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif