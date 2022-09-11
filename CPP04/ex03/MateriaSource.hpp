//
// Created by aregenia on 04.09.22.
//

#ifndef CPP_MATERIASOURCE_H
#define CPP_MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
protected:
	const static int	INVENTORY_SIZE = 4;
	int	equipped_slots;
	AMateria	*inventory[INVENTORY_SIZE];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	~MateriaSource();
	MateriaSource	&operator=(const MateriaSource &a);

	virtual void learnMateria(AMateria *materia);
	virtual	AMateria *createMateria(std::string const & type);
};


#endif //CPP_MATERIASOURCE_H
