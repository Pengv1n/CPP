//
// Created by aregenia on 04.09.22.
//

#ifndef CPP_IMATERIASOURCE_H
#define CPP_IMATERIASOURCE_H

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //CPP_IMATERIASOURCE_H
