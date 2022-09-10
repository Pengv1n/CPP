//
// Created by aregenia on 30.08.22.
//

#ifndef CPP_CURE_H
#define CPP_CURE_H

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(const Cure &copy);
	~Cure();
	Cure	&operator=(const Cure &a);
	virtual	AMateria *clone() const;
	virtual void use(ICharacter &target);
};


#endif //CPP_CURE_H
