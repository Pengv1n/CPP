//
// Created by aregenia on 23.08.22.
//

#ifndef CPP_DOG_H
#define CPP_DOG_H

#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog &operator=(const Dog &a);
	Dog(const Dog &copy);
	~Dog();

	void	makeSound() const;
};


#endif //CPP_DOG_H
