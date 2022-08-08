#include "Point.hpp"

Point::Point():x(0), y(0) {
}

Point::Point(float x_, float y_):x(x_), y(y_) {
}

const Fixed	Point::get_x() const {
	return x;
}

const Fixed	Point::get_y() const {
	return y;
}

Point::Point(const Point &a):x(a.get_x()), y(a.get_y()) {
}

Point::~Point() {
}

Point &Point::operator=(const Point &a) {
	if (this == &a)
		return *this;
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const Point a)
{
	out << "x = " << a.get_x() << " ; y = " << a.get_y() << std::endl;
	return (out);
}