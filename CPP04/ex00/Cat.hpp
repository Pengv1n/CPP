//
// Created by aregenia on 23.08.22.
//

#ifndef CPP_CAT_H
#define CPP_CAT_H

#include "Animal.hpp"

class Cat: public Animal {
public:
	Cat();
	Cat(const Cat &copy);
	Cat	&operator=(const Cat &a);
	~Cat();

	void	makeSound() const;
};


#endif //CPP_CAT_H
