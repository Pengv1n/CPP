//
// Created by Akira Regenia on 10/23/22.
//

#ifndef CPP_ARRAY_HPP
#define CPP_ARRAY_HPP

#include <exception>

template <class T>
class	Array{
private:
	T				*data;
	unsigned int	_size;
public:
	Array();
	Array(unsigned int size);
	Array(const Array &copy);
	Array	&operator=(const Array &a);
	~Array();

	T	&operator[](unsigned int idx);
	class	InvalidIndex : public std::exception {
		virtual const char	*what() const throw();
	};

	unsigned int	size() const;
};

#include "Array.tpp"

#endif //CPP_ARRAY_HPP
