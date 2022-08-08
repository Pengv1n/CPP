#include "Point.hpp"

static	float	area(const Point p1, const Point p2, const Point p3)
{
	float	area;

	//Area A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2
	area = (p1.get_x().toFloat() * (p2.get_y().toFloat() - p3.get_y().toFloat()) +
			p2.get_x().toFloat() * (p3.get_y().toFloat() - p1.get_y().toFloat()) +
			p3.get_x().toFloat() * (p1.get_y().toFloat() - p2.get_y().toFloat())) / 2;

	if (area >= 0)
		return area;
	else
		return (-area);
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	float	d0, d1, d2, d3;
	bool	ret = false;

	d0 = area(a, b, c);
	d1 = area(point, a, b);
	d2 = area(point, b, c);
	d3 = area(point, a, c);

	if (d1 == 0 || d2 == 0 || d3 == 0)
		ret = false;
	else if (d1 + d2 + d3 == d0)
		ret = true;

	return (ret);
}