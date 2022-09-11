//
// Created by aregenia on 30.08.22.
//

#ifndef CPP_AMATERIA_H
#define CPP_AMATERIA_H

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class	ICharacter;

class AMateria {
protected:
	std::string	materia_type;
public:
	AMateria(std::string const & type);
	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //CPP_AMATERIA_H
