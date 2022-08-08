#include "Fixed.hpp"

Fixed::Fixed():value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& a) {
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
		this->value = a.getRawBits();
	return *this;
}

void Fixed::setRawBits(const int rawBits) {
	std::cout << "setRawBits member function called" << std::endl;
	value = rawBits;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}