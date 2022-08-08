#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>

class Fixed{
private:
	int	value;
	static const int bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &a);
	Fixed(const int value);
	Fixed(const float value);

	Fixed &operator=(const Fixed& a);

	bool	operator>(const Fixed &b) const;
	bool	operator<(const Fixed &b) const;
	bool	operator>=(const Fixed &b) const;
	bool	operator<=(const Fixed &b) const;
	bool	operator==(const Fixed &b) const;
	bool	operator!=(const Fixed &b) const;

	Fixed	operator+(const Fixed &b);
	Fixed	operator-(const Fixed &b);
	Fixed	operator*(const Fixed &b);
	Fixed	operator/(const Fixed &b);

	Fixed	operator++(int);
	Fixed	operator++();
	Fixed	operator--(int);
	Fixed	operator--();

	static	Fixed &min(Fixed &a, Fixed &b);
	static	Fixed &max(Fixed &a, Fixed &b);
	static	Fixed const &min(Fixed const &a, Fixed const &b);
	static	Fixed const &max(Fixed const &a, Fixed const &b);

	float	toFloat( void ) const;
	int		toInt( void ) const;

	void	setRawBits(const int rawBits);
	int		getRawBits() const;
};

std::ostream &operator<<(std::ostream &os, const Fixed& obj);

#endif //CPP_FIXED_HPP
