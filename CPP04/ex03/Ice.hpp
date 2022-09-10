//
// Created by aregenia on 30.08.22.
//

#ifndef CPP_ICE_H
#define CPP_ICE_H

#include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice();
	Ice(const Ice &copy);
	~Ice();
	Ice	&operator=(const Ice &a);
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};


#endif //CPP_ICE_H
