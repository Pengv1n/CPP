//
// Created by aregenia on 30.08.22.
//

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &copy) : AMateria(copy.getType()) {}

Cure::~Cure() {}

Cure &Cure::operator=(const Cure &a) {
	this->materia_type = a.getType();
	return *this;
}

AMateria *Cure::clone() const {
	return new Cure();
}

void	Cure::use(ICharacter &target) {
	std::cout <<  "* heals " << target.getName() << "'s wounds *" << std::endl;
}