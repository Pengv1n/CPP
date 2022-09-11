//
// Created by aregenia on 23.08.22.
//

#ifndef CPP_DOG_H
#define CPP_DOG_H

#include "Animal.hpp"

class Dog : public Animal {
private:
	Brain	*brain;
public:
	Dog();
	Dog &operator=(const Dog &a);
	Dog(const Dog &copy);
	virtual ~Dog();

	virtual void	makeSound() const;
	virtual	Brain *getBrain() const;
	virtual Animal	&operator=(Animal const &a);
};


#endif //CPP_DOG_H
