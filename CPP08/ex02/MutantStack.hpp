//
// Created by aregenia on 25.10.22.
//

#ifndef CPP_MUTANTSTACK_HPP
#define CPP_MUTANTSTACK_HPP

#include <deque>
#include <stack>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
public:
	MutantStack() : std::stack<T, Container>() {}
	MutantStack(const MutantStack<T, Container> &copy) :
			std::stack<T, Container>() {
		*this = copy;
	}
	MutantStack	&operator=(const MutantStack<T, Container> &a) {
		this->c = a.c;
		return *this;
	}
	~MutantStack() {}

	typedef typename std::stack<T, Container>::container_type::iterator iterator;

	iterator	begin() {
		return this->c.begin();
	}

	iterator	end() {
		return this->c.end();
	}
};

#endif //CPP_MUTANTSTACK_HPP
