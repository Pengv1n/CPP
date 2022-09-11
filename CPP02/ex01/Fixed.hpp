//
// Created by aregenia on 30.07.22.
//

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

	float	toFloat( void ) const;
	int		toInt( void ) const;

	void	setRawBits(const int rawBits);
	int		getRawBits() const;
};

std::ostream &operator<<(std::ostream &os, const Fixed& obj);

#endif //CPP_FIXED_HPP
