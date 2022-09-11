//
// Created by aregenia on 23.08.22.
//

#ifndef CPP_ANIMAL_H
#define CPP_ANIMAL_H

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal {
protected:
	std::string	type;
public:
	Animal();
	Animal(const Animal &copy);

	virtual Animal &operator=(const Animal &a) = 0;
	virtual ~Animal() = 0;

	const std::string	&getType() const;
	virtual void	makeSound() const = 0;
	virtual	Brain	*getBrain() const = 0;
};


#endif //CPP_ANIMAL_H
