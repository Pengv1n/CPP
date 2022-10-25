#include "Span.hpp"
#include <iostream>

template <typename T>
void	dispSpan(T &container) {
	std::cout << "Container: ";
	if (container.size() != 0) {
		std::cout << "[ ";
		for (unsigned int i = 0; i < container.size() - 1; i++)
			std::cout << container[i] << ", ";
		std::cout << container[container.size() - 1] << " ]" <<  std::endl;
	}
	else
		std::cout << "empty" << std::endl;
}

void	short_long_Span( Span sp) {
	try {
		std::cout << "shortestSpan = " << sp.shortestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cout << "shortestSpan Error: " << e.what() << std::endl;
	}
	try {
		std::cout << "longestSpan = " << sp.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cout << "longestSpan Error: " << e.what() << std::endl;
	}
}

int main()
{
	{
		std::cout << "\033[31mGIVEN TEST\033[0m" << std::endl;

		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "\033[31mSIMPLE TEST\033[0m" << std::endl;

		int size_1 = 5;
		Span sp = Span(size_1);
		dispSpan(sp);
		try {
			for (int i = 0; i < size_1 + 1; i++)
				sp.addNumber(i);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		dispSpan(sp);
		short_long_Span(sp);

	}

	std::cout << std::endl;

	{
		std::cout << "\033[31mTEST SIZE=0 RESERV=1\033[0m" << std::endl;

		Span	one(1);
		dispSpan(one);

		short_long_Span(one);
	}

	std::cout << std::endl;

	{
		std::cout << "\033[31mTEST SIZE=1 RESERV=1\033[0m" << std::endl;

		Span	one(1);
		one.addNumber(21);
		dispSpan(one);

		short_long_Span(one);
	}

	std::cout << std::endl;

	{
		std::cout << "\033[31mTEST SIZE=2 RESERV=2\033[0m" << std::endl;

		Span	two(2);
		two.addNumber(21);
		two.addNumber(42);

		dispSpan(two);

		short_long_Span(two);
	}

	std::cout << std::endl;

	{
		std::cout << "\033[31mTEST addNumber with Container\033[0m" << std::endl;

		int size_ = 10;
		std::vector<int> vec(size_);
		for (int i = 0; i < size_; i++)
			vec[i] = i;
		Span	two(size_ - 1);

		try {
			two.addNumber(vec);
		} catch (const std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
		dispSpan(two);

		short_long_Span(two);
	}

	std::cout << std::endl;

	{
		std::cout << "\033[31mTEST addNumber with range iterator\033[0m" << std::endl;

		int size_ = 10;
		std::vector<int> vec(size_);
		for (int i = 0; i < size_; i++)
			vec[i] = i;
		Span	two(size_ - 1);

		try {
			two.addNumber(vec.begin(), vec.end());
		} catch (const std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
		dispSpan(two);

		short_long_Span(two);
	}

	std::cout << std::endl;

	{
		std::cout << "\033[31mTEST N=10000 Range [0, N-1)\033[0m" << std::endl;

		int size_ = 10000;
		std::vector<int> vec(size_);
		for (int i = 0; i < size_; i++)
			vec[i] = i;
		Span	two(size_ - 1);

		try {
			two.addNumber(vec.begin(), vec.end());
		} catch (const std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}

		short_long_Span(two);
	}

	std::cout << std::endl;

	{
		std::cout << "\033[31mTEST N=50000 Rand [0, N)\033[0m" << std::endl;

		int size_ = 50000;
		std::vector<int> vec(size_);
		srand(time(NULL));
		for (int i = 0; i < size_; i++)
			vec[i] = std::rand() % size_;
		Span	two(size_ - 1);

		try {
			two.addNumber(vec.begin(), vec.end());
		} catch (const std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}

		short_long_Span(two);
	}
	return 0;
}