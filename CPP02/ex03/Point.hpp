#ifndef CPP02_POINT_HPP
#define CPP02_POINT_HPP

#include "Fixed.hpp"

class Point {
private:
	const Fixed	x;
	const Fixed y;

public:
	Point();
	Point(float x_, float y_);
	Point(const Point &a);
	~Point();

	Point &operator=(const Point &a);

	const Fixed get_x() const;
	const Fixed	get_y() const;
};

std::ostream	&operator<<(std::ostream &out, const Point a);

#endif //CPP02_POINT_HPP
