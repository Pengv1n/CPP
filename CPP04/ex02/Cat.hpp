//
// Created by aregenia on 23.08.22.
//

#ifndef CPP_CAT_H
#define CPP_CAT_H

#include "Animal.hpp"

class Cat: public Animal {
private:
	Brain	*brain;
public:
	Cat();
	Cat(const Cat &copy);
	Cat	&operator=(const Cat &a);
	virtual ~Cat();

	virtual void	makeSound() const;
	virtual	Brain *getBrain() const;
	virtual	Animal	&operator=(Animal const &a);
};


#endif //CPP_CAT_H
