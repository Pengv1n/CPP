//
// Created by aregenia on 30.08.22.
//

#ifndef CPP_ICHARACTER_H
#define CPP_ICHARACTER_H

#include <string>
#include "AMateria.hpp"

class	AMateria;

class ICharacter {
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};


#endif //CPP_ICHARACTER_H
