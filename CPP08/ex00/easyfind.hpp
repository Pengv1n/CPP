//
// Created by aregenia on 24.10.22.
//

#ifndef CPP_EASYFIND_HPP
#define CPP_EASYFIND_HPP

#include <algorithm>

class	exceptNotFind : public std::exception {
public:
	virtual const char *what() const throw() {
		return "Element not find at container!";
	}
};

template <typename T>
int	&easyfind(T &container, int val)
{
	typename T::iterator f = std::find(container.begin(), container.end(), val);
	if (f != container.end())
		return *f;
	else
		throw exceptNotFind();
}

#endif //CPP_EASYFIND_HPP
