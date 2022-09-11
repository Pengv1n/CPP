//
// Created by aregenia on 23.08.22.
//

#ifndef CPP_ANIMAL_H
#define CPP_ANIMAL_H

#include <string>
#include <iostream>

class Animal {
protected:
	std::string	type;
public:
	Animal();
	Animal(const Animal &copy);
	Animal &operator=(const Animal &a);
	virtual ~Animal();

	const std::string	&getType() const;
	virtual void	makeSound() const;
};


#endif //CPP_ANIMAL_H
