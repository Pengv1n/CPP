//
// Created by aregenia on 04.09.22.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : equipped_slots(0) {}

MateriaSource::MateriaSource(const MateriaSource &copy) :
equipped_slots(copy.equipped_slots) {
	for (int i = 0; i < equipped_slots; ++i)
		inventory[i] = copy.inventory[i];
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < equipped_slots; ++i)
		delete inventory[i];
}

void MateriaSource::learnMateria(AMateria *materia) {
	bool	is_not_there = true;
	if (equipped_slots < INVENTORY_SIZE)
	{
		for (int i = 0; (i < equipped_slots) && is_not_there; ++i)
		{
			if (inventory[i]->getType() == materia->getType())
				is_not_there = false;
		}
		if (is_not_there)
			inventory[equipped_slots++] = materia;
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < equipped_slots; ++i)
	{
		if (inventory[i]->getType() == type)
			return inventory[i]->clone();
	}
	return 0;
}