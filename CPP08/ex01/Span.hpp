//
// Created by aregenia on 24.10.22.
//

#ifndef CPP_SPAN_H
#define CPP_SPAN_H

#include <vector>
#include <algorithm>
#include <iostream>

class Span {
private:
	Span();
	std::vector<int>	data;
	unsigned int	N;
public:
	Span(unsigned int N);
	Span(const Span &copy);
	Span	&operator=(const Span &a);
	~Span();

	void	addNumber(int e);

	long	shortestSpan();
	long	longestSpan();

	int	operator[](int n) const;
	unsigned int	size() const;

	template <template <typename T, typename Allocator = std::allocator<T> > class Container>
	void	addNumber(Container<int> &c);

	template <typename Iter>
	void	addNumber(Iter begin, Iter end);

	class	ArrayFull : public std::exception {
	public:
		virtual const char	*what() const throw();
	};

	class	NonFindSpan : public std::exception {
	public:
		virtual const char	*what() const throw();
	};
};

template <template <typename T, typename Allocator = std::allocator<T> > class Container>
void Span::addNumber(Container<int> &c) {
	for (typename Container<int>::iterator i = c.begin(); i != c.end(); i++)
		addNumber(*i);
}

template <typename Iter>
void Span::addNumber(Iter begin, Iter end) {
	while (begin != end)
	{
		addNumber(*begin);
		begin++;
	}
}

#endif //CPP_SPAN_H
