//
// Created by aregenia on 24.10.22.
//

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N) : N(N) {
	data.reserve(N);
}

Span::~Span() {}

Span::Span(const Span &copy) {
	*this = copy;
}

Span &Span::operator=(const Span &a) {
	data.clear();
	N = a.N;

	data.reserve(N);
	for (unsigned int i = 0; i < data.capacity(); i++)
		data.push_back(a.data[i]);
	return (*this);
}

void	Span::addNumber(int e) {
	if (data.size() == N)
		throw Span::ArrayFull();
	data.push_back(e);
}

long Span::shortestSpan() {
	if (data.size() <= 1)
		throw Span::NonFindSpan();
	long	minSpan = __LONG_MAX__;

	for (std::vector<int>::iterator i = data.begin(); i != data.end(); i++)
	{
		for (std::vector<int>::iterator j = i + 1; j != data.end(); j++)
		{
			if (abs(*j - *i) < minSpan)
				minSpan = abs(*j - *i);
		}
	}
	return minSpan;
}

long Span::longestSpan() {
	if (data.size() <= 1)
		throw Span::NonFindSpan();
	long	maxSpan = abs(*std::max_element(data.begin(), data.end())
			- *std::min_element(data.begin(), data.end()));
	return maxSpan;
}

int Span::operator[](int n) const {
	return data[n];
}

unsigned int Span::size() const {
	return data.size();
}

const char *Span::ArrayFull::what() const throw() {
	return "Array is full!";
}

const char *Span::NonFindSpan::what() const throw() {
	return "Non find span array!";
}