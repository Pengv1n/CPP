#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main(void)
{
	{
		const Point a;
		const Point b(10, 0);
		const Point c(0, 10);
		const Point point(1, 1);

		std::cout << "The point( x= " << point.get_x() << "\t\ty= " << point.get_y() << "\t) is inside the triangle\n" <<
				  "\ta( x= " << a.get_x() << "\t\ty= " << a.get_y() << "\t)\n" <<
				  "\tb( x= " << b.get_x() << "\ty= " << b.get_y() << "\t)\n" <<
				  "\tc( x= " << c.get_x() << "\t\ty= " << c.get_y() << "\t)\n" << std::endl;
		if (bsp(a, b, c, point))
			std::cout << "\033[32mTRUE\033[0m" << std::endl;
		else
			std::cout << "\033[31mFALSE\033[0m" << std::endl;
	}
	std::cout << "\n---------------------------------------------------------------------\n" << std::endl;
	{
		Point a(-1.5, -1.5);
		Point b(2.5, 2.5);
		Point c(-1, -2);
		Point point(8.5, -9);

		std::cout << "The point( x= " << point.get_x() << "\ty= " << point.get_y() << "\t) is inside the triangle\n" <<
				  "\ta( x= " << a.get_x() << "\ty= " << a.get_y() << "\t)\n" <<
				  "\tb( x= " << b.get_x() << "\ty= " << b.get_y() << "\t)\n" <<
				  "\tc( x= " << c.get_x() << "\ty= " << c.get_y() << "\t)\n" << std::endl;
		if (bsp(a, b, c, point))
			std::cout << "\033[32mTRUE\033[0m" << std::endl;
		else
			std::cout << "\033[31mFALSE\033[0m" << std::endl;
	}
	return (0);
}