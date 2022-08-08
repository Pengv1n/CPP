#include "Fixed.hpp"
#include <cmath>

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
		this->value = a.value;
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

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->value = value << Fixed::bits;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << Fixed::bits));
}

int Fixed::toInt() const {
	return this->value >> Fixed::bits;
}

float Fixed::toFloat() const {
	return (float)this->value / (1 << Fixed::bits);
}

std::ostream &operator<<(std::ostream &os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}

bool	Fixed::operator<(const Fixed &b) const {
	return (this->getRawBits() < b.getRawBits());
}

bool	Fixed::operator>(const Fixed &b) const {
	return (this->getRawBits() > b.getRawBits());
}

bool	Fixed::operator<=(const Fixed &b) const {
	return (this->getRawBits() <= b.getRawBits());
}

bool	Fixed::operator>=(const Fixed &b) const {
	return (this->getRawBits() >= b.getRawBits());
}

bool	Fixed::operator==(const Fixed &b) const {
	return (this->getRawBits() == b.getRawBits());
}

bool	Fixed::operator!=(const Fixed &b) const {
	return (this->getRawBits() != b.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &b) {
	Fixed	copy(*this);
	copy.setRawBits(this->getRawBits() + b.getRawBits());
	return copy;
}

Fixed	Fixed::operator-(const Fixed &b) {
	Fixed	copy(*this);
	copy.setRawBits(this->getRawBits() - b.getRawBits());
	return copy;
}

Fixed	Fixed::operator*(const Fixed &b) {
	Fixed	copy(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)b.getRawBits());
	copy.setRawBits((tmp1 * tmp2) / (1 << Fixed::bits));
	return copy;
}

Fixed	Fixed::operator/(const Fixed &b) {
	Fixed copy(*this);
	long	tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)b.getRawBits());
	copy.setRawBits((tmp1 * (1 << Fixed::bits)) / tmp2);
	return copy;
}

Fixed	Fixed::operator++() {
	this->value++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	copy(*this);
	operator++();
	return copy;
}

Fixed	Fixed::operator--() {
	this->value--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	copy(*this);
	operator--();
	return copy;
}

Fixed	const	&Fixed::min(const Fixed &a, const Fixed &b) {
	if (a > b)
		return b;
	return a;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b) {
	if (a > b)
		return b;
	return a;
}

Fixed	const	&Fixed::max(const Fixed &a, const Fixed &b) {
	if (a > b)
		return a;
	return b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return a;
	return b;
}