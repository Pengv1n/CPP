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

	Fixed &operator=(const Fixed& a);

	void	setRawBits(const int rawBits);
	int		getRawBits() const;
};

#endif //CPP_FIXED_HPP
